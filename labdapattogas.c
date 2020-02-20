#include <stdio.h>
#include <curses.h>
#include <unistd.h>

int main(void)
{
    WINDOW *w;
    w = initscr();

    int x = 0;
    int y = 0;
    int xact = 1;
    int yact = 1;
    int dbx;
    int dby;

    for(;;)
    {
	getmaxyx(w, dby, dbx);

	mvprintw(y, x, "o");

	refresh();
	usleep(100000);

	clear();

	x = x + xact;
	y = y + yact;

	if (x >= dbx-1)
	    xact *= -1;
	if (x <= 0)
	    xact *= -1;
	if (y <= 0)
	    yact *= -1;
	if (y >= dby-1)
	    yact *= -1;
    }
    return 0;
}
