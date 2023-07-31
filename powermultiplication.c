#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a  ");
    scanf("%d",&a);
    printf("enter the value of b  ");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++)
    {
         power=power*a;
    }
    printf("the power of %d to the %d is %d",a,b,power);
    return 0;
    
    

}