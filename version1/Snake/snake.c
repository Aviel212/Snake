#include "snake.h"

void start( char *player )
{
	int i,j,stop=79;
	printf("********************************************************************************\n");
	printf("*************************please enter your name*********************************\n");
	printf("********************************************************************************\n");
	printf("name:  ");
	gets(player);
	printf("\n");
	for(i=0;i<stop;i++)
	{
		system("cls");
		printf("********************************************************************************\n");
		printf("*************************please enter your name*********************************\n");
		printf("********************************************************************************\n");
		printf("Good Luck  %s !!!",player);
		printf("\n");
		for(j=0;j<i;j++)
			printf(" ");
		if (i<stop-1)
			printf("..");
		else printf("  ");
		Sleep (35);
	}

}

void table()
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

void delet(int *it,int *jt,char mat[][78],char moveh,int *i, int *j)
{
	if(mat[*i][*j]=='>')
	{
		mat[*i][*j]='*';
		mat[*it][*jt]=' ';
		(*jt)++;
	}
	if(mat[*i][*j]=='v')
	{
		mat[*i][*j]='*';
		mat[*it][*jt]=' ';
		(*it)++;
	}
	if(mat[*i][*j]=='^')
	{
		mat[*i][*j]='*';
		mat[*it][*jt]=' ';
		(*it)--;
	}
	if(mat[*i][*j]=='<')
	{
		mat[*i][*j]='*';
		mat[*it][*jt]=' ';
		(*jt)--;
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
