#include <stdio.h>
int main()
// to swap two numbers using third number.
{
    int a=5,b=3,c;
    c=a,a=b,b=c;
    printf("%d\n",a);
    printf("%d\n",b);

    int firstNo,secondNo,x;
    printf("Enter first number: ");
    scanf("%d",&firstNo);
    printf("Enter second number: ");
    scanf("%d",&secondNo);
    x=firstNo,firstNo=secondNo,secondNo=x;
    printf("The first no is %d\n",firstNo);
    printf("The second no is %d",secondNo);
    
    
}