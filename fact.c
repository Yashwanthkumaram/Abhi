//factorial of a number
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}
int main()
{
    int n,r;
    printf("enter n: ");
    scanf("%d",&n);
    r=fact(n);
    printf("fact of %d is %d",n,r);
    
}
