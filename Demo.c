#include<stdio.h>

int main()
{
    int no = 11;
    char ch = '\0';
    double d = 90.5464846;

    printf("%d\n",sizeof(ch));       // "sizeof" gives the size of the data type 

    printf("%c\n",ch);               // prints the char

    printf("%d\n",no);               // prints the int 

    printf("%d\n",&no);              // prints the address

    printf("%d\n",sizeof(no));       // "sizeof" gives the size of the data type 

    printf("%f\n",d);                //  prints the double

    printf("%d\n",sizeof(d));        // "sizeof" gives the size of the data type 

    return 0;
    
}