#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the digit in the number are %d",count);
    return 0;
}