#include<stdio.h>
int mai()
{
    int reverse=0,number,sum,remainder;
    printf("enter a number :");
    scanf("%d",&number);
    int temp=number;
    while(number!=0){
    remainder=number%10;
    reverse=reverse*10+remainder;
    number=number/10;
    }


}