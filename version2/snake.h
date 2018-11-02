#include <stdio.h>
#include <conio.h>
#include <Windows.h>
COORD coordinate = {0,0}; 


void gotoxy(int x, int y); 
void printsnake();
int mov(int *i, int *j, char mat[][78],char move);

