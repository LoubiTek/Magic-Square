#include <stdio.h>
#include <stdlib.h>

int NUM[] = {9,3,7,1};

void GameBoard()
{
    printf("\n");
    printf("  3x3\n");
    printf("-------\n");
    printf("|4|?|2|\n");
    printf("|?|5|?|\n");
    printf("|8|?|6|\n");
    printf("-------\n");
    printf("\n");
}

void Test()
{
    scanf("%d",&NUM[0]);

    if(NUM[0] == 9)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }

    printf("The number 2 is: ");

    scanf("%d",&NUM[1]);

    if(NUM[1] == 3)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }

    printf("The number 3 is: ");

    scanf("%d",&NUM[2]);

    if(NUM[2] == 7)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }

    printf("The number 4 is: ");

    scanf("%d",&NUM[3]);

    if(NUM[3] == 1)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }
}

int main()
{
    printf("WELCOME TO MY MAGIC SQUARE!\n");
    printf("\n");
    printf("Good Luck\n");
    GameBoard();
    printf("Complete and replace the ? by a value to make the result correspond to 15.\n");
    printf("\n");
    printf("The number 1 is: ");
    Test();
    return 0;
}
