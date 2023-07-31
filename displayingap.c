#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+4)
    {
        printf("%d",i);
    }
}