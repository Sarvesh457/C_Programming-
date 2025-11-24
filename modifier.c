#include<stdio.h>

int main()
{
    int i = 10;

    short int j = 20;

    long int k = 30;

    printf("Print the Size of integer:-%lu\n",sizeof(i));             //4

    printf("Print the Size of short integer:-%lu\n",sizeof(j));       //2

    printf("Print the Size of long integer:-%lu\n",sizeof(k));        //8

    return 0;
}