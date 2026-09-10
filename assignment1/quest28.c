#include <stdio.h>
int main()
{
    //3 digits armstrong no
    int n,temp,remainder,sum=0;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        remainder=temp%10;
        sum= sum+ remainder*remainder*remainder;
        temp=temp/10;
    }
    if(sum==n){printf("Armstrong no");}
    else{printf("Not armstrong no");}
    
    

}