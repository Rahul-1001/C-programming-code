#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int last_digit=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;

    }
    printf("the sum of digit are %d",sum);
    return 0;
}