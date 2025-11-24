#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello

{
    int no;
    float marks;
    struct Demo dobj;  //Nested
};

int main()

{ 

    printf("Size of Hello Strucher is :%lu\n",sizeof(struct Hello));Nested_Structure.c
    
    return 0 ;

}