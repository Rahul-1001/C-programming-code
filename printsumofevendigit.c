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
        if(last_digit%2==0){
        sum=sum+last_digit;
        }
        n=n/10;
       
    }
     printf("sum of even number is %d",sum);
    return 0;
}