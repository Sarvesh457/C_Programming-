#include<stdio.h>

int main()
{
    int Arr[]={11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);
    

    printf("Result of Substraction is :- %ld\n",q-p);  //Is allowed

    q=q-2;                                             //Is allowed

    printf("Data pointed by q is :- %ld\n",*q);  



    
    return 0;
}