#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#define WALL 1
#define ROAD 0
#define TRAP 2
#define GOAL 3
#define U 72
#define D 80
#define L 75
#define R 77
int x=0;
int y;
int map [5][5]{
{1,1,1,1,1},
{1,1,1,1,1},
{1,0,2,2,3},
{1,1,1,1,1},
{1,1,1,1,1}};
void gotoxy (int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
