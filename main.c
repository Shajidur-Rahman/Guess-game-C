#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int num, a = 4, ask, final = 0;
    srand(time(0));
    num = rand() % 20;
    printf("Thanks for chossing the game\n");
    printf("You have %d chance to chose the number\n", a +1);

    // main part 
    while (a >= 0)
    {
        printf("Exit in %d\n", a + 1);
        printf("Enter the number: ");
        scanf("%d", &ask);
        if (ask > num){
            printf("Please chose smaller number :(\n");
        }
        else if (ask < num){
            printf("Please chose bigger number :(\n");
        }
        else if (ask == num){
            printf("You won :)\n");
            final = 1;
            break;
        }
        // else{
        //     printf("Try again :(\n");
        // }


        a--;
    }
    
    if (final == 0){
        printf("You lost\n");
        printf("The number was %d\n", num);
    }

    return 0;
}
