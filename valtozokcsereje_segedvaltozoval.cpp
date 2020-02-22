#include <iostream>

using namespace std;

int main()
{
    int x = 6;
    int y = 9;
    cout << "A valtozok csere elott: " << x << ", " << y << endl;
    int z = x;
    x = y;
    y = z;
    cout << "A valtozok csere utan: " << x << ", " << y << endl;
    return 0;
}