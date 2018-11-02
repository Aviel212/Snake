#include "snake.h"


void printsnake()
{
	int i,j;
	printf("|*****************************************************************************|\n");
	for(i=0;i<19;i++)
	{
		printf("|");
		for(j=0;j<77;j++)
			printf(" ");
		printf("|\n");
	}
	printf("|*****************************************************************************|\n");
}

int mov(int *i, int *j, char mat[][78],char move)
{
	if(move=='y')
	{
		(*i)--;
		if (mat[*i][*j]=='*' || mat[*i][*j]=='>' || mat[*i][*j]=='<' || mat[*i][*j]=='v' || mat[*i][*j]=='^')
			return 0;
		mat[*i][*j]='^';
	}
	if(move=='h')
	{
		(*i)++;
		if (mat[*i][*j]=='*' || mat[*i][*j]=='>' || mat[*i][*j]=='<' || mat[*i][*j]=='v' || mat[*i][*j]=='^')
			return 0;
		mat[*i][*j]='v';
	}
	if(move=='j')
	{
		(*j)++;
		if (mat[*i][*j]=='*' || mat[*i][*j]=='>' || mat[*i][*j]=='<' || mat[*i][*j]=='v' || mat[*i][*j]=='^')
			return 0;
		mat[*i][*j]='>';
	}
	if(move=='g')
	{
		(*j)--;
		if (mat[*i][*j]=='*' || mat[*i][*j]=='>' || mat[*i][*j]=='<' || mat[*i][*j]=='v' || mat[*i][*j]=='^')
			return 0;
		mat[*i][*j]='<';
	}
		
}


void gotoxy(int x, int y)
{
    HANDLE stdOutput;
    COORD pos;
    stdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(stdOutput, pos);
}
