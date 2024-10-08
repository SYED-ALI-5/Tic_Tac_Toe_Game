#include<stdio.h>
#include<conio.h>



int main()
{
	int it=0;
	char a='a',b='b',c='c',d='d',e='e',f='f',g='g',h='h',i='i',check;
	char ch,choice;
	
	printf("\nWelcome to the Tic Tac Toe World--!\n");
	printf("Flag of player 1 is 'O' and player 2 is 'X'.\n\n");
	printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n",a,b,c,d,e,f,g,h,i);
	
	
	
	
	while(it<9)
	{
	
	//shifting the turn of players
		
	if(it%2==0)
	{
		printf("player 1 chose the position: ");
		ch=getche();			//TAKING INPUT USING GETCH() FOR NOT PRESSING ENTER.
		choice='O';   			// FLAG OF PLAYER 1
	}
	
	if(it%2==1)
	{
		printf("Player 2 chose a position:");
		ch=getche();
		choice='X';				//FLAG OF PLAYER 2
	}
	
	
	// putting the flag of the player to the entered position.
	
switch(ch)
	{
		case 'A':
		case 'a':
			if(a=='X' || a=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			a=choice;
			it++;
			
			break;
		case 'B':
		case 'b':
			if(b=='X' || b=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			b=choice;
			it++;
			
			break;
		case 'C':
		case 'c':
			if(c=='X' || c=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			c=choice;
			it++;
			
			break;
		case 'D':
		case 'd':
			if(d=='X' || d=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			d=choice;
			it++;
			
			break;
		case 'E':
		case 'e':
			if(e=='X' || e=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			e=choice;
			it++;
			
			break;
		case 'F':
		case 'f':
			if(f=='X' || f=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			f=choice;
			it++;
			
			break;
		case 'G':
		case 'g':
			if(g=='X' || g=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			g=choice;
			it++;
			
			break;
		case 'H':
		case 'h':
			if(h=='X' || h=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			h=choice;
			it++;
			
			break;
		case 'I':
		case 'i':
			if(i=='X' || i=='O')
			{
				
				printf("\nThe position is already taken.\n");
				break;
			}
			i=choice;
			it++;
			
			break;
		default:
			
			printf("\nyou entered an invalid position.\n");
		}
		
		
		//checking for possible matches of Columns, Rows or Diagnals to find the winner
		
		if((a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && i=='O') || (a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && i=='O') || (a=='O' && e=='O' && i=='O') || (c=='O' && e=='O' && g=='O'))
		{
			
			printf("\n\n\nCongrats Player 1  --!\nYou have won.\n ");
			break;
		}
		
		if((a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && i=='X') || (a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && i=='X') || (a=='X' && e=='X' && i=='X') || (c=='X' && e=='X' && g=='X'))
		{
			
			printf("\n\n\nCongrats Player 2  --!\nYou have won.\n ");
			break;
		}
	

		// Draw the match if no Columns,Rows or Diagonals match
		
		if(it==9)
		{
			
			printf("\n\n\nGame is Draw!");
			break;
		}
		
		
		//DISPLAY UPDATED TABLE AFTER EACH ITERATION.
		
		printf("\n\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n",a,b,c,d,e,f,g,h,i);
	}
	
	
	// final output
	
	printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n",a,b,c,d,e,f,g,h,i);
	
	
return 0;	
}


