#include <stdio.h>
int main()
{
    int n,prime=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n%i==0){prime=0;
        break;}
    }
    if(prime==1){printf("No is prime\n");}
    else{printf("No is not prime");}

    
}
