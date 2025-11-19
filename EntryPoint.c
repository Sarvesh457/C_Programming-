#include "Marvellous.h"

int main()
{

    float fValue = 10.5f;
    float fRet = 0.00f;

    fRet = CircleArea(fValue);

    printf("Area of Circle is : %f\n",fRet);
    
    return 0;
}

//gcc Helper.c EntryPoint.c -o Myexe
//gcc EntryPoint.c Helper.c -o Myexe