#include <stdio.h>
int main()
// to check if even or odd
{
    int number;
    printf("Enter a number: \n");
    scanf("%d",&number);
    if(number%2==0){
        printf("Your number is even.\n");
    }
    else{
        printf("Your number is odd.");
    }
}