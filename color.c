#include <stdio.h>
// #include <conio.h>
#include <windows.h>

#define BLACK = 0
#define DARKBLUE = 1
#define DARKGREEN = 2
#define SILVER = 3
#define RED = 4
#define COKLAT = 5
#define GREY = 6
#define WHITE = 7
#define DARKGREY = 8
#define BLUE = 9
#define LIGHTGREEN = 10
#define CYAN = 11
#define LIGHTRED = 12
#define LIGHTMAGENTA = 13
#define LIGHTCYAN = 14
#define LIGHTWHITE = 15


#define handle GetStdHandle(STD_OUTPUT_HANDLE)
void gotoxy(int x, int y)
{
    COORD position = {x, y};
    SetConsoleCursorPosition(handle, position);
}
void set(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}
