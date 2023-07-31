#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    //1-2+3-4+5.....n
    //odd number->add
    //even number->subtract
    for(int i=1;i<=n;i++)
    {
       if(i%2!=0)
       {
        sum=sum+i;
       }
       else{
        sum=sum-i;
       }
    }
    printf("the sum of series is %d",sum);
    return 0;
}