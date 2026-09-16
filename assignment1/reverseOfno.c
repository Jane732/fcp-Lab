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

    printf("reverse of the number is %d",reverseNo(n,0));
    return 0;
 }