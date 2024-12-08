/*************************
Name: Sercan Þahan
Student ID: 150140005
e-Mail: sahanse@itu.edu.tr
*************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	int N, P, W, S;
	int player1, player2;
	int prob;
	int round;
	int pas1, pas2;
	int score1, score2;
	char team1, team2;
	
	printf("Enter the number of players in each team:\n");
	scanf("%d", &N);
	
	printf("Enter the probability of successful pass (do not use percentage sign):\n");
	scanf("%d", &P);
	
	printf("Enter the number of successful passes to win round:\n");
	scanf("%d", &W);
	
	printf("Enter the final score to win game:\n");
	scanf("%d", &S);
	
	srand(time(NULL));
	
	score1 = 0;
	score2 = score1;
	
	round = 1;
	
	prob = rand()%100;
	
	if(rand()%2)
	{
		printf("Team A starts the game\n");
		team1 = 'A';
		team2 = 'B';
		/*Deciding which team starts the game*/
	}
		
	else
	{
		printf("Team B starts the game\n");
		team1 = 'B';
		team2 = 'A';
		/*Deciding which team starts the game*/
	}

	while(score1 < S && score2 < S )
	{
		pas1 = 0;
		pas2 = pas1;
		printf("Round %d\n", round);
		round++;
		/*Starting round*/
		
		while(pas1 < W && pas2 < W) 
		{
			if (prob <= P) 
			{
				do
				{
					player2 = (rand() %N) + 1;	
				} while(player1 == player2); /*This do... while part is used for avoiding same player getting the ball from itself*/
    		    player1 = player2; /*This part is used to keep using do... while loop*/
				printf("Player %d from Team %c took the ball\n", player1, team1);
			   	pas2 = 0;
			   	pas1++;
			   	/*Transfering ball between random players. Either in same team or rival teams.
				Counting pass count, so a team can get a point*/
			}
					
			if (prob > P)
			{
				do
				{
					player2 = (rand() %N) + 1;
				}while(player1 == player2); /*This do... while part is used for avoiding same player getting the ball from itself*/
            	player1 = player2; /*This part is used to keep using do... while loop*/
        	    printf("Player %d from Team %c took the ball\n", player1, team2);
	            pas1 = 0;
                pas2++;
                /*Transfering ball between random players. Either in same team or rival teams.
				Counting pass count, so a team can get a point*/
			}
			prob = rand()%100;	
		}
		if (pas1 > pas2)
		{
			printf("Team %c gained 1 point.\n", team1);
			score1++;
			printf("Team %c: %d\nTeam %c: %d\n\n", team1, score1, team2, score2);
			/*Incrementing scores of teams and printing the scores at the and of round*/
			if (score1 < S)
			{
				printf("Team %c starts the next round\n", team1);
			}
		}
		else
		{
			printf("Team %c gained 1 point.\n", team2);
			score2++;
			printf("Team %c: %d\nTeam %c: %d\n\n", team2, score2, team1, score1);
			/*Incrementing scores of teams and printing the scores at the and of round*/
			if (score2 < S)
			{
				printf("Team %c starts the next round\n", team2);
			}
		}
	}
	if (score1 > score2)
	{
		printf("Team %c won the game.\n", team1);
	}
	else
	{
		printf("Team %c won the game.\n", team2);
	}

	system("pause");
	return 0;
}
