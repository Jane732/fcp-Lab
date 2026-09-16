#include <stdio.h>
int main()
{
    int n, temp, reverse=0,remainder;
    printf("enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        remainder=temp%10;
        reverse=reverse*10 + remainder;
        temp=temp/10;
    }
     if(reverse==n){printf("The number is a palindrome\n");}
     else{printf("The number is not a palindrome\n");}
     return 0;

}