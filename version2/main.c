#include "snake.h"



void main()
{
	char player[25],mat[20][78]={' '}, moveh='j';
	int *i, *j, *it, *jt;
	int row,col,rowt,colt, fail=1;
	printsnake();
	i=(int *)malloc(77*sizeof(int) );
	j=(int *)malloc(19*sizeof(int) );
	i=&row;
	j=&col;
	row=0;
	col=1;
	it=&rowt;
	jt=&colt;
	rowt=0;
	colt=0;
	//start(player);
	mat[0][0]='*';
	mat[0][1]='>';
	for(;( (row)<19 && (row)>=0 ) && ( (col)<77 && (col)>=0 );)
	{
		gotoxy(row+1,col+1);
	//
	//delet(it,jt,mat,moveh,i,j);
	if(fail==0)
		break;
	if(kbhit())
		moveh=getch();
	Sleep(200);
	if(row==19 || col==77)
		break;
	}
}



