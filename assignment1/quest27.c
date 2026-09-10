#include <stdio.h>
int main()
{
    int n,x;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=2;i<=n-1;i++){
        x=n%i;
        if(x!=0){break;}
        
    }
    printf("prime");

}