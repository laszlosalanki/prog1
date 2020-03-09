#include <stdio.h>
#include <curses.h>
#include <unistd.h>

int main(void) {
    WINDOW *w;
    w = initscr();

    int x = 0;
    int y = 0;
    int xact = 1;
    int yact = 1;
    int mx;
    int my;
    int m = 1;
    for(;;) {
    	getmaxyx(w, my, mx);

    	mvprintw(y, x, "o");

    	refresh();
    	usleep(10000);

    	clear();


      x = abs((m%((mx-1)*2))-(mx-1));
      y = abs((m%((my-1)*2))-(my-1));
      m = m+1;

    	/*x = x + xact;
    	y = y + yact;

    	if (x >= mx-1)
    	    xact *= -1;
    	if (x <= 0)
    	    xact *= -1;
    	if (y <= 0)
    	    yact *= -1;
    	if (y >= my-1)
    	    yact *= -1;*/
    }
    return 0;
}
