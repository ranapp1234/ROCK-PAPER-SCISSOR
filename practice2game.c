/* Create Rock, Paper and Scissors Game
Player 1: user-(rana): speak ROCK
Player 2: (computer): speak  SCISSORS  ---->> player 1 gets 1 point

rock vs scissors - rock wins
paper vs scissor - scissor wins
scissors vs paper - paper wins

Write the program to allow user to play this game three times with computer. Log the score of computer and the player. Display the name of the winner at the end

Note: you have to display the name of the player during the game. Take usesr name as an input from the user.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 4 // maximum number of rounds a player can lose before he/she loses the game
char name1[35];
char name2[35];

void funcuser1()
{
    printf("\n %s  CURRENTLY PLAYING WITH WORLDs ONE OF THE BEST PLAYER\n", name1);
    printf(" \nYOUR NAME IS :%s \n", name1);
}
void funcuser2()
{
    printf("\n%s  CURRENTLY PLAYING WITH WORLDs ONE OF THE BEST PLAYER\n", name2);
    strcpy(name2, "#RANA");
    printf("NAME IS:  %s \n", name2);
}
int func3()
{
    int i, num;
    time_t t;
    num = 4;
    srand((unsigned)time(&t));

    return (rand() % num) + 1;
}

int main()
{
    int n;
    char b, a;

    printf(" \nWorld Oldest and Goldest Game\n \n****** ROCK PAPER AND SCISSORS ****** \n");
    printf(" \nyou have only three chance\n TO WIN  or  TO LOSE \n");
end:
    printf(" \nTo start the game press 1:");
    scanf("%d", &n);
    if (n != 1)
    {
        printf(" you  should enter 1 for starting the game ");
        goto end;
    }
    else if (n = 1)
    {
        printf(" \nEnter your name: ");
        scanf("%s", &name1);

        for (int i = n; i < MAX; i++)
        {
            printf("\n -------------------------------------------This is your %d round:---------------------------------------------------------------\n", i);
            printf(" --------------------------------------------choose your  option:---------------------------------------------------------------\n");
            printf("\n--------------------------------------------1-Rock\t2-Paper\t3-Scissors------------------------------------------------------\n");
            printf(" --------------------------------------------your choice= ");

            scanf("%d", &a);
            while ((a != 1) && (a != 2) && (a != 3))
            {
                printf("\nWrong input! please choose again: ");
                printf("your choice= ");
                scanf("%d", &a);
            }

            switch (a)

            {
            case 1:
                funcuser1();
                printf("YOU  CHOOSED Rock\n");
                getchar();
                funcuser2();
                func3();
                if (func3() == 1)
                {
                    printf("COMPUTER CHOOSED rock\n");
                }
                else if (func3() == 2)
                {
                    printf("COMPUTER CHOOSED paper\n");
                }
                else if (func3() == 3)
                {
                    printf("COMPUTER CHOOSED scissor\n");
                }
                else
                {
                    return 0;
                }

                printf("COMPUTER choos is:%d\n", func3());

                if (a == func3())
                {
                    printf("MATCH is DRAW ");
                    break;
                }
                else if (a > func3())
                {
                    printf("WINNER is:%s", name1);
                    break;
                }
                else if (func3() > a)
                {
                    printf("WINNER is: %s", name2);
                    break;
                }
                else
                {
                    printf("match is DRAW");
                    break;
                }

                
                break;

            case 2:
                funcuser1();
                printf("YOU  CHOOSED paper\n");

                funcuser2();
                func3();
                if (func3() == 1)
                {
                    printf("COMPUTER CHOOSED rock\n");
                }
                else if (func3() == 2)
                {
                    printf(" COMPUTER CHOOSED paper\n");
                }
                else if (func3() == 3)
                {
                    printf("COMPUTER CHOOSED scissor\n");
                }
                else
                {
                    return 0;
                }

                printf("COMPUTER choos is:%d\n", func3());

                if (a == func3())
                {
                    printf("MATCH  is DRAW ");
                    break;
                }
                else if (a > func3())
                {
                    printf("WINNER is: %s", name1);
                    break;
                }
                else if (func3() > a)
                {
                    printf("WINNER is :%s", name2);
                    break;
                }
                else
                {
                    printf("match is DRAW");
                    break;
                }
                break;

            case 3:
                funcuser1();
                printf("YOU CHOOSED scissor\n");

                funcuser2();
                func3();
                if (func3() == 1)
                {
                    printf("COMPUTER CHOOSED rock\n");
                }
                else if (func3() == 2)
                {
                    printf("COMPUTER CHOOSED paper\n");
                }
                else if (func3() == 3)
                {
                    printf("COMPUTER CHOOSED scissor\n");
                }
                else
                {
                    return 0;
                }

                printf("COMPUTER choos is:%d\n", func3());

                if (a == func3())
                {
                    printf("the  match  is DRAW ");
                    break;
                }
                else if (a > func3())
                {
                    printf("WINNER is: %s", name1);
                    break;
                }
                else if (func3() > a)
                {
                    printf("WINNER is: %s", name2);
                    break;
                }
                else
                {
                    printf("match is DRAW");
                    break;
                }
                break;
            }
        }
    }
    else
    {
        return 0;
    }
}
