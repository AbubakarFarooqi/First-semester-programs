#include<iostream>
#include<conio.h>
#include<math.h>
#include<cstdlib>
using namespace std;
char mov='w';
char prev_mov;
char temp;
int tail_control=1;
int control=1;
int sx=25,sy=15;
int fx=12,fy=15;
int score=0;
int game_over=1;
int tailx[99];
int taily[99];
int food_shift()
{
	if(sx==fx && sy==fy)
	{
		tail_control++;
		score++;
		top_x:;
		fx=rand()%20;
		if(!(fx>1 && fx<49))
			goto top_x;
		top_y:;
		fy=rand()%20;
		if(!(fy>1 && fy<29))
			goto top_y;
		
		
	}
}
int movement()
{
	 prev_mov=mov;
	if(sx==1 || sx==50 || sy==1 || sy==30)
		{
			game_over=0;
			goto bottom;
		}

    if(kbhit())
    {
    	temp=mov;
        mov=getch();
        if(!(mov=='w'||mov=='s'||mov=='a'||mov=='d'))
        	mov=temp;
    }
    switch(mov)
    {
    case 'w':
    	if(prev_mov!='s')
        	sy--;
        else
        	mov=prev_mov;
        	break;
    case 's':
    	if(prev_mov!='w')
        	sy++;
        else
        	mov=prev_mov;
        break;
    case 'a':
    	if(prev_mov!='d')
    	    sx--;
        else
        	mov=prev_mov;
        break;
    case 'd':
        if(prev_mov!='a')
    	    sx++;
        else
        	mov=prev_mov;
        break;
    }
    bottom:;
    for (int i=tail_control;i>=1;i--)
		{
		tailx[i]=tailx[i-1];
		taily[i]=taily[i-1];
		}
		tailx[0]=sx;
		taily[0]=sy;
    return 0;
}
int display()
{
    int row=1,col=1;
    for(row;row<=30;row++)
    {
        for(col=1;col<=50;col++)
        {
        	control=1;
        	int control_2=1;
            if(row==1 || row==30)
            {
                cout<<"*";
                control=0;
            }
            else
                if(col==1 || col==50)
             {
				 cout<<"*";
				 control=0;
        	 }
			else
                if(row==sy && col==sx)
                {
				  cout<<"0";
                  control =0;
        		}
        	else
    			if(row==fy && col==fx)
					{
						cout<<"f";
						control=0;
						control_2=0;
           			}
			else
            if(control_2)
            	{
            		for(int i=0;i<tail_control;i++)
            		{
            			if (row==taily[i] && col==tailx[i])
            				{
								cout<<"o";
            					control =0;
							}
						else 
							cout<<" ";
							//control=0;
            		}
            	}
            	//else
				//if(control)
            	//{
				//	cout<<" ";
				//	control_2=0;
				//}
            }
        cout<<endl;
    }
    cout<<endl;
    cout<<score;
    return 0;
}
int main()
{
    while(game_over)
    {
        system("cls");
        display();
        food_shift();
        movement();
        control=1;
    }
     system("cls");
     cout<<"\n\n\n\n\n\n\t\t\t\tGAME OVER :(";
     cout<<"\n\n\n\n\n\n\n\n\t\t\t\tyour score is "<<score<<"\n\n\n\n\n";
//    int i=100;
  //  int tx[100];
    //int tem;
    //for(i;i>=0;i++)
   // {        
     //   tem=tx[i]
      //  tem=sx;
    	
  //  }
}
