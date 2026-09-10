#include <stdio.h>
int main()
//table of a no
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
     printf("%d\n",i*n);
    }
    printf("end");
}