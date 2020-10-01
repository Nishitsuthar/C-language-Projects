#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // here we generate the random number
    srand(time(0));
    int number = rand() % 100;

    printf("the random number is %d \n", number);

    int guess, nguess = 1;

    do
    {
        printf("Guess the number \n");
        scanf("%d", &guess);

        if (number < guess)
        {
            printf("Please Enter lower value !!\n");
        }
        else if (number > guess)
        {
            printf("Please Enter higher value !!\n");
        }
        else
        {
            printf("Bingo ! You guess the number in %d attemp !!", nguess);
        }
        nguess++;

    } while (number != guess);

    return 0;
}