#include <stdio.h>
int main()
{
    //sum of odd
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){continue;}
        sum=sum+i;
    }
    printf("the sum of all odd nos till n is %d\n",sum);
    //sum of even
    int s=0;
    for(int i=n;i>=1;i--){
        if(i%2==0){s=s+i;}
    }
    printf("the sum of all even nos till n is %d\n",s);
    printf("end");
}