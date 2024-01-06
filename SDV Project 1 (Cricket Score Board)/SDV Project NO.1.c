#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void show();
void menu();
void playing();
void heading();
FILE  *file1;
struct team
{
    char name[30];
    int run;
    int ball;
    float RR;
    char player[11][20];

};
struct player
{
    char name[30];
    int run_taken;
    int ball_played;
    int wicket_taken;
    int over_b;
    int ball_b;
    int run_given;
};



void swap(int *p,int *q)
{


    int tmp;
    tmp = *p;
    *p=*q;
    *q=tmp;
}

void new_wkt(int *p,int *q)
{
    if(*p<*q)
        *p=*q+1;
    else
        *p=*p+1;
}

struct team t1,t2;

int np;
int max_over;
struct player t1_player[11];
struct player t2_player[11];
int inn=0;

int first_tm_bat()
{
   // system("cls");
    printf("\n\n\t\t ********** %s Batting , %s Balling **********\n\n ",t1.name,t2.name);

    int over, score,i,ball, run=0;
    int wicket=0,st=0,nst=1,b,RO;
    char ptch;
    float rr=0;
    inn++;
    for(over=0; over<max_over; over++)
    {

        if(wicket<np-1)
        {
        printf("\n\tWhich player will ball?\n\n");

        for (i =0; i <np; i++)
            {
           printf("\t%d.%s\n",i, t2_player[i].name);
            }
            scanf("\t%d",&b);
        }
        else
            break;


        for(ball=0; ((ball<6)&&(wicket<np-1));)
        {



            printf("\n=======================================================================================================================");

            printf("\n \t \t  \t   %s run : %d , Wicket: %d ,  Over:%d.%d  , Ran rate:%0.2f  \n",t1.name,run, wicket,over,ball,rr);
            printf("\n \t \t \t Batting  %s: %d(%d)   %s: %d(%d) \t balling %s: %d-%d(%d.%d) \n",t1_player[st].name,t1_player[st].run_taken,t1_player[st].ball_played,
                   t1_player[nst].name,t1_player[nst].run_taken,t1_player[nst].ball_played,
                   t2_player[b].name, t2_player[b].run_given,t2_player[b].wicket_taken,
                   t2_player[b].over_b,t2_player[b].ball_b);

            printf("=======================================================================================================================\n");


            printf("\n\tEnter the ran of instant ball : ");
            scanf("%d",&score);
            switch(score){
			case 0 : {
				char dot;
				printf("\n\tEnter Type of Dot Ball\n");
				printf("\n\t'W' for a wicket\n\t'D' for a Dot Ball\n");
				fflush(stdin);
				scanf("%c", &dot);
				switch(dot){
					case 'W':{
						wicket += 1;
						t2_player[b].wicket_taken+=1;
						ball += 1;
						t2_player[b].ball_b+=1;
						t1_player[st].ball_played +=1;
						printf("\t Wicket down\n");
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t1_player[st].name,t1_player[st].run_taken);

                        new_wkt(&st,&nst);
						break;
					}
					case 'D': {
						ball += 1;
						t2_player[b].ball_b+=1;
						t1_player[st].ball_played +=1;
						printf("\n\tAnother Dot ball\n");
						break;
					}
				}
				break;
			}

			case 1: {
				char single;

				printf("\n\tEnter the type of single taken\n");
				printf("\n\t'S' for a Single\n\t'W' for a wide ball\n\t'N' for a No Ball\n\t'R' for a Run out\n");
				fflush(stdin);
				scanf("%c", &single);
				switch(single){
					case 'S': {
						run += 1;
						t1_player[st].run_taken +=1;
						ball += 1;
						t2_player[b].ball_b+=1;
						t1_player[st].ball_played +=1;
						t2_player[b].run_given+=1;
						printf("\n\tRotating the strike\n");
                        swap(&st,&nst);
						break;
					}
					case 'W': {
						run += 1;
						t2_player[b].run_given+=1;

						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 1;
                        t2_player[b].run_given+=1;
						printf("\n\tNo ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 1;
						ball += 1;
						t2_player[b].ball_b+=1;
						t2_player[b].run_given+=1;
						t1_player[st].ball_played +=1;
						wicket += 1;

                // Run out
						printf("\n\tWho is out?\n");
						printf("\n\t%d . %s \n",st,t1_player[st].name);
						printf("\n\t%d . %s \n",nst,t1_player[nst].name);
						scanf("%d",&RO);
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t1_player[RO].name,t1_player[RO].run_taken);
						if(RO==st)
                        {
                            new_wkt(&st,&nst);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }
                        else if(RO==nst)
                        {
                            new_wkt(&nst,&st);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }

						break;
					}

					default:
						printf("Invalid Input\n");
				}
				break;
			}
			case 2:{
				char doubles;

				printf("\n\tEnter the type of double taken\n");
				printf("\n\t'D' for a Double\n\t'W' for a wide ball\n\t'N' for a No Ball\n\t'R' for a Run out\n");
				fflush(stdin);
				scanf("%c", &doubles);
				switch(doubles){
					case 'D': {
						run += 2;
						t1_player[st].run_taken +=2;
						ball += 1;
                        t2_player[b].ball_b+=1;
						t1_player[st].ball_played +=1;
						t2_player[b].run_given+=2;
						printf("\n\tRotating and at the same strike\n");
						break;
					}
					case 'W': {
						run += 2;
                        t1_player[st].run_taken +=1;
						printf("\n\tWide ball\n");
						t2_player[b].run_given+=2;
						printf("\n\tRotating the strike\n");
						swap(&st,&nst);
						break;
					}
					case 'N': {
						run += 2;
						t1_player[st].run_taken +=1;
						t2_player[b].run_given+=2;
						printf("\n\tNo ball, Free hit\n");
						printf("\n\tRotating the strike\n");
						swap(&st,&nst);
						break;
					}
					case 'R': {
						run += 2;
						ball += 1;
						t2_player[b].ball_b+=1;
						t2_player[b].run_given+=2;
						t1_player[st].run_taken +=2;
						t1_player[st].ball_played +=1;
						wicket += 1;


						// Run out
						printf("\n\tWho is out?\n");
						printf("\n\t%d . %s \n",st,t1_player[st].name);
						printf("\n\t%d . %s \n",nst,t1_player[nst].name);
						scanf("%d",&RO);
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t1_player[RO].name,t1_player[RO].run_taken);
						if(RO==st)
                        {
                            new_wkt(&st,&nst);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='y')
                            {
                                swap(&st,&nst);
                            }

                        }
                        else if(RO==nst)
                        {
                            new_wkt(&nst,&st);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='y')
                            {
                                swap(&st,&nst);
                            }

                        }


						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 3:{
				char triple;

				printf("\n\tEnter the type of triple taken\n");
				printf("\n\t'T' for a Triple\n\t'W' for a wide ball\n\t'N' for a No Ball\n\t'R' for a Run out\n");
				fflush(stdin);
				scanf("%c", &triple);
				switch(triple){
					case 'T': {
						run += 3;
						t1_player[st].run_taken +=3;
						ball += 1;
						t2_player[b].ball_b+=1;
						t2_player[b].run_given+=3;
						t1_player[st].ball_played +=1;
						printf("\n\tRotating the strike\n");
						swap(&st,&nst);
						break;
					}
					case 'W': {
						run += 3;
						t1_player[st].run_taken +=2;
						t2_player[b].run_given+=3;
						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 3;
						t1_player[st].run_taken +=2;
						t2_player[b].run_given+=3;
						printf("\n\tNo ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 3;
						t1_player[st].run_taken +=2;
						ball += 1;
						t2_player[b].ball_b+=1;
						t2_player[b].run_given+=3;
						t1_player[st].ball_played +=1;
						wicket += 1;

						// Run out
						printf("\n\tWho is out?\n");
						printf("\n\t%d . %s \n",st,t1_player[st].name);
						printf("\n\t%d . %s \n",nst,t1_player[nst].name);
						scanf("%d",&RO);
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t1_player[RO].name,t1_player[RO].run_taken);
						if(RO==st)
                        {
                            new_wkt(&st,&nst);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }
                        else if(RO==nst)
                        {
                            new_wkt(&nst,&st);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }


						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 4:{
				char boundary;

				printf("\n\tEnter the type of boundary taken\n");
				printf("\n\t'B' for a Boundary\n\t'W' for a wide ball\n\t'N' for a No Ball\n");
				fflush(stdin);
				scanf("%c", &boundary);
				switch(boundary){
					case 'B': {
						run += 4;
						t1_player[st].run_taken +=4;
						ball += 1;
						t2_player[b].ball_b+=1;
						t2_player[b].run_given+=4;
						t1_player[st].ball_played +=1;
						printf("\n\tIt's a four\n");
						break;
					}
					case 'W': {
						run += 4;
						t1_player[st].run_taken +=3;
						t2_player[b].run_given+=4;
						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 4;
						t1_player[st].run_taken +=3;
						t2_player[b].run_given+=4;
						printf("\n\tNo ball, Free hit\n");
						break;
					}


					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 5:{
				char fiver;

				printf("\n\tEnter the type of fiver taken\n");
				printf("\n\t'W' for a wide ball\n\t'N' for a No Ball\n");
				fflush(stdin);
				scanf("%c", &fiver);
				switch(fiver){
					case 'W': {
						run += 5;
						t1_player[st].run_taken +=4;
						t2_player[b].run_given+=5;
						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 5;
						t1_player[st].run_taken +=4;
						t2_player[b].run_given+=5;
						printf("\n\tNo ball, Free hit\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 6:{
				char sixer;

				printf("\n\tEnter the type of sixer taken\n");
				printf("\n\t'S' for a Sixer\n");
				fflush(stdin);
				scanf("%c", &sixer);
				switch(sixer){
					case 'S': {
						run += 6;
						t1_player[st].run_taken +=6;
						ball += 1;
						t2_player[b].ball_b+=1;
						t2_player[b].run_given+=6;
						t1_player[st].ball_played +=1;
						printf("\n\tIt's a Six\n");
						break;
					}
					default:
						printf("Invalid Input\n");
				}
				break;
			}


			case 7:{
				char seven;

				printf("\n\tEnter the type of seven taken\n");
				printf("\n\t'N' for a No Ball\n");
				fflush(stdin);
				scanf("%c", &seven);
				switch(seven){

					case 'N': {
						run += 7;
						t1_player[st].run_taken +=6;
						t2_player[b].run_given+=7;
						printf("\n\tNo ball, Free hit\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}

        }
t1.run= run;
rr=(float)run/(float)(over*6+ball);
if(inn==2)
{
    if(run>t2.run)
    {
        goto ending;
    }
}


    }
    swap(&st,&nst);
    t2_player[b].over_b+=1;
    t2_player[b].ball_b=0;





    }
    ending:
    printf("\n\n \t \t   *************   %s total run : %d , Wicket: %d ,   *************  \n \n",t1.name,t1.run, wicket,over,ball);
    if(inn==2)
    {
        if(t1.run>t2.run);
        {
            printf("\n \t \t   *************   %s Won the Match   *************  \n \n",t1.name);
        }
        if(t1.run==t2.run)
        {
            printf("\n \t \t   *************   Match Draw   *************  \n \n");
        }
        else if(t1.run<t2.run)
        {
            printf("\n \t \t   *************   %s Won the Match   *************  \n \n",t2.name);
        }
    }
    else
    {
        printf("\n \t \t   *************   To win %s need %d runs    *************  \n \n \n",t2.name,t1.run+1);
    }

    }

int second_tm_bat()
{
   // system("cls");
    printf("\n\n\t\t ********** %s Batting , %s Balling **********\n\n ",t2.name,t1.name);

    int over, score,i,ball, run=0;
    int wicket=0,st=0,nst=1,b,RO;
    char ptch;
    float rr=0;
    inn++;
    for(over=0; over<max_over; over++)
    {

        if(wicket<np-1)
        {
        printf("\n\tWhich player will ball?\n\n");

        for (i =0; i <np; i++)
            {
           printf("\t%d.%s\n",i, t1_player[i].name);
            }
            scanf("\t%d",&b);
        }
        else
            break;


        for(ball=0; ((ball<6)&&(wicket<np-1));)
        {


            printf("\n=======================================================================================================================");

            printf("\n \t \t  \t   %s run : %d , Wicket: %d ,  Over:%d.%d  , Ran rate:%0.2f  \n",t2.name,run, wicket,over,ball,rr);
            printf("\n \t \t \t Batting  %s: %d(%d)   %s: %d(%d) \t balling %s: %d-%d(%d.%d) \n",t2_player[st].name,t2_player[st].run_taken,t2_player[st].ball_played,
                   t2_player[nst].name,t2_player[nst].run_taken,t2_player[nst].ball_played,
                   t1_player[b].name, t1_player[b].run_given,t1_player[b].wicket_taken,
                   t1_player[b].over_b,t1_player[b].ball_b);

            printf("=======================================================================================================================\n");


            printf("\n\tEnter the ran of instant ball : ");
            scanf("%d",&score);
            switch(score){
			case 0 : {
				char dot;
				printf("\n\tEnter Type of Dot Ball\n");
				printf("\n\t'W' for a wicket\n\t'D' for a Dot Ball\n");
				fflush(stdin);
				scanf("%c", &dot);
				switch(dot){
					case 'W':{
						wicket += 1;
						t1_player[b].wicket_taken+=1;
						ball += 1;
						t1_player[b].ball_b+=1;
						t2_player[st].ball_played +=1;
						printf("\t Wicket down\n");
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t2_player[st].name,t2_player[st].run_taken);

                        new_wkt(&st,&nst);
						break;
					}
					case 'D': {
						ball += 1;
						t1_player[b].ball_b+=1;
						t2_player[st].ball_played +=1;
						printf("\n\tAnother Dot ball\n");
						break;
					}
				}
				break;
			}

			case 1: {
				char single;

				printf("\n\tEnter the type of single taken\n");
				printf("\n\t'S' for a Single\n\t'W' for a wide ball\n\t'N' for a No Ball\n\t'R' for a Run out\n");
				fflush(stdin);
				scanf("%c", &single);
				switch(single){
					case 'S': {
						run += 1;
						t2_player[st].run_taken +=1;
						ball += 1;
						t1_player[b].ball_b+=1;
						t2_player[st].ball_played +=1;
						t1_player[b].run_given+=1;
						printf("\n\tRotating the strike\n");
                        swap(&st,&nst);
						break;
					}
					case 'W': {
						run += 1;
						t1_player[b].run_given+=1;

						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 1;
                        t1_player[b].run_given+=1;
						printf("\n\tNo ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 1;
						ball += 1;
						t1_player[b].ball_b+=1;
						t1_player[b].run_given+=1;
						t2_player[st].ball_played +=1;
						wicket += 1;

                // Run out
						printf("\n\tWho is out?\n");
						printf("\n\t%d . %s \n",st,t2_player[st].name);
						printf("\n\t%d . %s \n",nst,t2_player[nst].name);
						scanf("%d",&RO);
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t2_player[RO].name,t2_player[RO].run_taken);
						if(RO==st)
                        {
                            new_wkt(&st,&nst);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }
                        else if(RO==nst)
                        {
                            new_wkt(&nst,&st);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }

						break;
					}

					default:
						printf("Invalid Input\n");
				}
				break;
			}
			case 2:{
				char doubles;

				printf("\n\tEnter the type of double taken\n");
				printf("\n\t'D' for a Double\n\t'W' for a wide ball\n\t'N' for a No Ball\n\t'R' for a Run out\n");
				fflush(stdin);
				scanf("%c", &doubles);
				switch(doubles){
					case 'D': {
						run += 2;
						t2_player[st].run_taken +=2;
						ball += 1;
                        t1_player[b].ball_b+=1;
						t2_player[st].ball_played +=1;
						t1_player[b].run_given+=2;
						printf("\n\tRotating and at the same strike\n");
						break;
					}
					case 'W': {
						run += 2;
                        t2_player[st].run_taken +=1;
						printf("\n\tWide ball\n");
						t1_player[b].run_given+=2;
						printf("\n\tRotating the strike\n");
						swap(&st,&nst);
						break;
					}
					case 'N': {
						run += 2;
						t2_player[st].run_taken +=1;
						t1_player[b].run_given+=2;
						printf("\n\tNo ball, Free hit\n");
						printf("\n\tRotating the strike\n");
						swap(&st,&nst);
						break;
					}
					case 'R': {
						run += 2;
						ball += 1;
						t1_player[b].ball_b+=1;
						t1_player[b].run_given+=2;
						t2_player[st].run_taken +=2;
						t2_player[st].ball_played +=1;
						wicket += 1;


						// Run out
						printf("\n\tWho is out?\n");
						printf("\n\t%d . %s \n",st,t2_player[st].name);
						printf("\n\t%d . %s \n",nst,t2_player[nst].name);
						scanf("%d",&RO);
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t2_player[RO].name,t2_player[RO].run_taken);
						if(RO==st)
                        {
                            new_wkt(&st,&nst);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='y')
                            {
                                swap(&st,&nst);
                            }

                        }
                        else if(RO==nst)
                        {
                            new_wkt(&nst,&st);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='y')
                            {
                                swap(&st,&nst);
                            }

                        }


						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 3:{
				char triple;

				printf("\n\tEnter the type of triple taken\n");
				printf("\n\t'T' for a Triple\n\t'W' for a wide ball\n\t'N' for a No Ball\n\t'R' for a Run out\n");
				fflush(stdin);
				scanf("%c", &triple);
				switch(triple){
					case 'T': {
						run += 3;
						t2_player[st].run_taken +=3;
						ball += 1;
						t1_player[b].ball_b+=1;
						t1_player[b].run_given+=3;
						t2_player[st].ball_played +=1;
						printf("\n\tRotating the strike\n");
						swap(&st,&nst);
						break;
					}
					case 'W': {
						run += 3;
						t2_player[st].run_taken +=2;
						t1_player[b].run_given+=3;
						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 3;
						t2_player[st].run_taken +=2;
						t1_player[b].run_given+=3;
						printf("\n\tNo ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 3;
						t2_player[st].run_taken +=2;
						ball += 1;
						t1_player[b].ball_b+=1;
						t1_player[b].run_given+=3;
						t2_player[st].ball_played +=1;
						wicket += 1;

						// Run out
						printf("\n\tWho is out?\n");
						printf("\n\t%d . %s \n",st,t2_player[st].name);
						printf("\n\t%d . %s \n",nst,t2_player[nst].name);
						scanf("%d",&RO);
						printf("\n \t \t\t\t ********* Last Wicket %s %d runs ********* \n",t1_player[RO].name,t1_player[RO].run_taken);
						if(RO==st)
                        {
                            new_wkt(&st,&nst);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }
                        else if(RO==nst)
                        {
                            new_wkt(&nst,&st);
                            printf("\nDoes the batsman crossed half of pitch?\n");
                            printf("Enter 'y' for Yes \nEnter 'n' for No\n");
                            fflush(stdin);
                            scanf("%c",&ptch);
                            if(ptch=='n')
                            {
                                swap(&st,&nst);
                            }

                        }


						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 4:{
				char boundary;

				printf("\n\tEnter the type of boundary taken\n");
				printf("\n\t'B' for a Boundary\n\t'W' for a wide ball\n\t'N' for a No Ball\n");
				fflush(stdin);
				scanf("%c", &boundary);
				switch(boundary){
					case 'B': {
						run += 4;
						t2_player[st].run_taken +=4;
						ball += 1;
						t1_player[b].ball_b+=1;
						t1_player[b].run_given+=4;
						t2_player[st].ball_played +=1;
						printf("\n\tIt's a four\n");
						break;
					}
					case 'W': {
						run += 4;
						t2_player[st].run_taken +=3;
						t1_player[b].run_given+=4;
						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 4;
						t2_player[st].run_taken +=3;
						t1_player[b].run_given+=4;
						printf("\n\tNo ball, Free hit\n");
						break;
					}


					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 5:{
				char fiver;

				printf("\n\tEnter the type of fiver taken\n");
				printf("\n\t'W' for a wide ball\n\t'N' for a No Ball\n");
				fflush(stdin);
				scanf("%c", &fiver);
				switch(fiver){
					case 'W': {
						run += 5;
						t2_player[st].run_taken +=4;
						t1_player[b].run_given+=5;
						printf("\n\tWide ball\n");
						break;
					}
					case 'N': {
						run += 5;
						t2_player[st].run_taken +=4;
						t1_player[b].run_given+=5;
						printf("\n\tNo ball, Free hit\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 6:{
				char sixer;

				printf("\n\tEnter the type of sixer taken\n");
				printf("\n\t'S' for a Sixer\n");
				fflush(stdin);
				scanf("%c", &sixer);
				switch(sixer){
					case 'S': {
						run += 6;
						t2_player[st].run_taken +=6;
						ball += 1;
						t1_player[b].ball_b+=1;
						t1_player[b].run_given+=6;
						t2_player[st].ball_played +=1;
						printf("\n\tIt's a Six\n");
						break;
					}
					default:
						printf("Invalid Input\n");
				}
				break;
			}


			case 7:{
				char seven;

				printf("\n\tEnter the type of seven taken\n");
				printf("\n\t'N' for a No Ball\n");
				fflush(stdin);
				scanf("%c", &seven);
				switch(seven){

					case 'N': {
						run += 7;
						t2_player[st].run_taken +=6;
						t1_player[b].run_given+=7;
						printf("\n\tNo ball, Free hit\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
        }
    t2.run= run;
    rr=(float)run/(float)(over*6+ball);
    if(inn==2)
    {
        if(run>t1.run)
        {
            goto ending;
        }
    }



    }
    swap(&st,&nst);
    t1_player[b].over_b+=1;
    t1_player[b].ball_b=0;


    t2.run= run;


    }
    ending:
    printf("\n\n \t \t   *************   %s total run : %d , Wicket: %d ,   *************  \n \n",t2.name,t2.run, wicket,over,ball);
    if(inn==2)
    {
        if(t2.run>t1.run);
        {
            printf("\n \t \t   *************   %s Won the Match   *************  \n \n",t2.name);
        }
        if(t2.run==t1.run)
        {
            printf("\n \t \t   *************   Match Draw   *************  \n \n");
        }
        else if(t2.run<t1.run)
        {
            printf("\n \t \t   *************   %s Won the Match   *************  \n \n",t1.name);
        }
    }
    else
    {
        printf("\n \t \t   *************   To win %s need %d runs    *************  \n \n \n",t1.name,t2.run+1);
    }



    }

void show()
{
    // system("cls");

    file1=fopen("cscore.txt","r");
    rewind(file1);


    fread(t1_player,sizeof(struct player),10,file1);

    printf("\n\t Printing from file.\n");

    printf("\n\n\t\t\t\t ***********       Player Statistics       ************\n\n");
    printf("\n\t\t ===============================================================================");
    printf("\n\n\t Name      Run Taken       Ball Played        Wicket Taken        Over Bowllen         Run Given \n\n");

    for(int i=0;i<10;i++)

    {

        printf("\t %s",t1_player[i].name);
        printf("\t\t %d",t1_player[i].run_taken);
        printf("\t\t %d",t1_player[i].ball_played);
        printf("\t\t %d",t1_player[i].wicket_taken);
        printf("\t\t     %d.%d",t1_player[i].over_b,t1_player[i].ball_b);
        printf("\t\t    %d\n",t1_player[i].run_given);

    }


   /* for(int i=0;i<8;i++)

    {
        printf("\t %s",t2_player[i].name);
        printf("\t\t %d",t2_player[i].run_taken);
        printf("\t\t %d",t2_player[i].ball_played);
        printf("\t\t %d",t2_player[i].wicket_taken);
        printf("\t\t %d.%d",t2_player[i].over_b,t1_player[i].ball_b);
        printf("\t\t %d\n",t2_player[i].run_given);


    } */
    fclose(file1);

}



void playing()

{
   // system("cls");
    printf("\n\n\t\t ********************* GAME STARTED **********************\n\n");
    printf("\n\tEnter Number of players in each team : ");
    scanf("%d",&np);



    printf("\n\tEnter the number of overs : ");
    scanf("%d",&max_over);

                            // Two Team Name Input
    fflush(stdin);
    printf("\tEnter Team 1 Name: ");
    gets(t1.name);
    printf("\tEnter Team 2 Name: ");
    gets(t2.name);







                           // Player Name Input
        printf("\n\tPlease enter %s all %d player name\n",t1.name,np);

        fflush(stdin);
        int i;
        for (i = 0; i<np; i++)
        {
            fflush(stdin);
            printf("\t\t\t\t\t\t");
            gets(t1_player[i].name);
            t1_player[i].run_taken=0;
            t1_player[i].ball_played=0;
            t1_player[i].run_given=0;
            t1_player[i].wicket_taken=0;
            t1_player[i].over_b=0;
            t1_player[i].ball_b=0;




        }


        printf("\n\tPlease enter %s all %d player name\n",t2.name,np);

        for (i = 0; i<np; i++)
        {
            fflush(stdin);
            printf("\t\t\t\t\t\t");
            gets(t2_player[i].name);
            t2_player[i].run_taken=0;
            t2_player[i].ball_played=0;
            t2_player[i].run_given=0;
            t2_player[i].wicket_taken=0;
            t2_player[i].over_b=0;
            t2_player[i].ball_b=0;
        }
    int ings;
    printf("\n\tWhich team will bat first?\n");
    printf("\t1.%s\n",t1.name);
    printf("\t2.%s\n",t2.name);
    hz:
    scanf("%d",&ings);
    if(ings==1)
    {

        first_tm_bat(max_over,np);
        second_tm_bat(max_over,np);
    }
    else if(ings==2)
    {

        second_tm_bat(max_over,np);
        first_tm_bat(max_over,np);
    }
    else
    {
        printf("Invailed Input\nEnter again.\n");
        goto hz;
    }

    file1=fopen("cscore.txt","a+");


fseek(file1,0,SEEK_END);
fwrite(t1_player,sizeof(struct player),np,file1);
fseek(file1,0,SEEK_END);
fwrite(t2_player,sizeof(struct player),np,file1);
fclose(file1);










}
void heading()
{
    printf("\n\t\t**********************    THIS IS CRICKET SCORE BOARD COUNTER     **********************\n\n");

}
void menu()
{
    printf("\t\t\t\t********************     MAIN MENU     ***********************\n\n");
    printf("\t\t===================================================================================\n\n");
    printf("\t\t\t\t1.Playing\n\n");
    printf("\t\t\t\t2.Show\n\n");
    int n;
    printf(" \t\t  Enter Option : ");

    scanf("%d",&n);
    if(n==1)
    {
        playing();
    }
    else if(n==2)
    {
        show();
    }
    else
    {
        printf(" \t\t\t\OOPs!You choose wrong option");
        menu();
     }

}
int main()
{
    heading();
    menu();

}

