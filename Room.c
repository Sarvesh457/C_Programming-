#include <stdio.h>

int main()
{
    char ch1[] = "Sarvesh";
    char ch2[] = "Sahu";
    char ch3[] = "Pranav";
    char ch4[] = "Sudav";

    char *Work_Washing[3];

    Work_Washing[0] = "Bathroom";
    Work_Washing[1] = "Basin";
    Work_Washing[2] = "Toilet";

    // Example printing
    printf("Names:\n");
    printf("%s\n", ch1);
    printf("%s\n", ch2);
    printf("%s\n", ch3);
    printf("%s\n", ch4);

    printf("\nWork Washing Tasks:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", Work_Washing[i]);
    }

    return 0;
}
