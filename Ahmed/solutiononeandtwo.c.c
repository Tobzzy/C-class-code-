#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, j, sum = 0;
    char action;
    printf("Welcome to my integer loop calculator in C");
    printf("\n");
    printf("press F for (for loop), W for (while loop) and X to exit");
    printf("\n");
    scanf(" %c",&action);

    if (action == 'F'){
        printf("Please input an integer value: ");
        scanf("%d",&a);
        for(i=1; i <= a; ++i)
        {
        sum += i;
        }
        printf("Sum = %d",sum);

    }

    else if (action == 'W') {
        printf("Please input an integer value: ");
        scanf("%d",&a);
        if (a >= 0) {
        while ( j <= a )
        {
        sum += j;
        ++j;
        }

        printf("Sum = %d",sum);
        }
        else
            printf("please enter a positvie integer number"); // while loop

        }

     else if (action == 'X') {
        void abort(void);
     }


    return 0;

}
