#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int N1 = 0; // 9
    int N2 = 0; // 3
    int N3 = 0; // 7
    int N4 = 0; // 1

    printf("WELCOME TO MY MAGIC SQUARE!\n");
    GameBoard();
    printf("Complete and replace the ? by a value to make the result correspond to 15.\n");
    printf("\n");
    printf("The number 1 is: ");

    scanf("%d",&N1);

    if(N1 == 9)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }

    printf("The number 2 is: ");

    scanf("%d",&N2);

    if(N2 == 3)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }

    printf("The number 3 is: ");

    scanf("%d",&N3);

    if(N3 == 7)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }

    printf("The number 4 is: ");

    scanf("%d",&N4);

    if(N4 == 1)
    {
        printf("Very good\n");
    }
    else
    {
        printf("Incorrect, try again\n");
        GameBoard();
    }
    return 0;
}
