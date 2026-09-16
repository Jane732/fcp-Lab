#include <stdio.h>
int main()
// simple interest calculation.
{
    float p,r,t,si;
    printf("Enter principal amt, rate of interest and time period: ");
    scanf("%f %f %f",&p,&r,&t);
    si=p*r*t/100;
    printf("The simple interest is %.2f",si);
    
}
