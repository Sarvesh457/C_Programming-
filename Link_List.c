#include<stdio.h>

struct Demo
{
    int i;
    float f;
    struct Demo *ptr;
};

int main()

{ 

    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.ptr = 11;
    obj2.ptr = 21;
    obj3.ptr = 51;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = NULL;
    
    printf("Size of Hello Strucher is :%lu\n",sizeof(struct Hello));
    
    return 0 ;

}