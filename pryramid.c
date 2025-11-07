#include <stdio.h>
#include <stdlib.h>   // for abs()

int main()
{
    int num, i, y, spaces;

    printf("\nEnter a number for generating the pyramid:\n");
    scanf("%d", &num);

    for (y = 0; y <= num; y++)
    {
        // print leading spaces to center the pyramid
        for (spaces = 0; spaces < (num - y) * 3; spaces++)
            printf(" ");

        // print numbers with abs()
        for (i = -y; i <= y; i++)
        {
            printf("%3d", abs(i));
        }
        printf("\n");
    }

    return 0;
}
