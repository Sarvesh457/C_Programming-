#include<stdio.h>

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue= 98.56789;
    
    //**************************************************//
    //     Printing the values of all the datatype      //
    //**************************************************//
    
    printf("%c\n",cValue);
    printf("%d\n",iValue);
    printf("%f\n",fValue);  
    printf("%lf\n",dValue);
    

    //************************//
    //size of all the datatype//
    //************************// 

    printf("Size of character is:- %lu\n ",sizeof(cValue));
    
    printf("Size of integer is:- %lu\n ",sizeof(iValue));
    
    printf("Size of float is:- %lu\n ",sizeof(fValue));
    
    printf("Size of double is:- %lu\n ",sizeof(dValue));
    

    printf("Address of cValue is :-%lu\n",&cValue);
    
    printf("Address of iValue is :-%lu\n",&iValue);

    printf("Address of fValue is :-%lu\n",&fValue);

    printf("Address of dValue is :-%lu\n",&dValue);

    
    return 0;
}