#include <stdio.h>
int main()
//to read marks of 5 sub and calculate total and percentage.
{
    float s1,s2,s3,s4,s5,total,perc;
    printf("Enter marks of 5 subs: ");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    total=s1 +s2 +s3 +s4 +s5;
    perc= total /5;
    printf("The total is %.2f\n",total);
    printf("The percentage is %.2f%%",perc);
}