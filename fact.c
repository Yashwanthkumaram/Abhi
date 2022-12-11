//factorial of a number
#include<stdio.h>
//fuck you abhi 
//THIS CODE SUCKS
int fact(int i)
{
    if(I==0)
    return 1;
    else
    return fact(I-1)*I;
}
int main()
{
    int n,r;
    printf("enter n: ");
    scanf("%d",&n);
    r=fact(n);
    printf("fact of %d is %d",n,r);
    
}
