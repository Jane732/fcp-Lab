#include <stdio.h>
int main()
{
    // 
    int n,fact=1;
    float sum=0.0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+ (float)i/fact;
    }
    printf("%.2f",sum);
}