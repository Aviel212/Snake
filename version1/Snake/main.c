#include "snake.h"
#include <malloc.h>

void main()
{
	char player[25], moveh='j',mov;
	int time=200,count=0,row,col;
	char lastmove='j';

	start(player);
	table();

	for(row=17,col=15; row>7 && row<27 && col>=-1 && col<77;count++)
	{
		/*if(count%100==0 && time>=50 && col!=0)
			time-=50;*/
		lastmove=moveh;

		if(kbhit()) //check if a button was pressed
			moveh=getch();
			switch (moveh) {
		case 'g':
			if (lastmove=='j'){
			moveh=lastmove;
			break;
			}
			gotoxy(col+1,row+1);
			printf(" ");
			col--;
			if(col<0){
				gotoxy(col+2,row+1);
				printf("*");
				col--;
				break;}
			gotoxy(col+1,row+1);
			printf("<");
			break;
		case 'j':
			if (lastmove=='g'){
			moveh=lastmove;
			break;
			}
			gotoxy(col+1,row+1);
			printf(" ");
			col++;
			if(col>76){
				gotoxy(col,row+1);
				printf("*");
				break;}
			gotoxy(col+1,row+1);
			printf(">");
			break;
		case 'h':
			if (lastmove=='y'){
			moveh=lastmove;
			break;
			}
			gotoxy(col+1,row+1);
			printf(" ");
			row++;
			if(row>26){
				gotoxy(col+1,row);
				printf("*");
				row++;
				break;}
			gotoxy(col+1,row+1);
			printf("v");
			break;
		case 'y':
			if (lastmove=='h'){
			moveh=lastmove;
			break;
			}
			gotoxy(col+1,row+1);
			printf(" ");
			row--;
			if(row<8){
				gotoxy(col+1,row+2);
				printf("*");
				break;}
			gotoxy(col+1,row+1);
			printf("^");
			break;
			
		}
		Sleep(time);
	}

	gotoxy(26,22);
	printf("failed, try again nxt time\n");
	getch();
}