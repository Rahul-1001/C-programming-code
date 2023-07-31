#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of series is %d",sum);
    return 0;
}