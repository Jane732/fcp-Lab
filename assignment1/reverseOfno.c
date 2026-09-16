#include <stdio.h>
 int reverseNo(int n, int rev){
    if(n==0){ return rev;}

    return reverseNo(n/10, rev*10 + n%10);
 }
 int main()
 {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    printf("reverse of the number is %d\n",reverseNo(n,0));
    if(reverseNo(n,0)==n){printf("the number is a palindrome\n");}
    return 0;
 }