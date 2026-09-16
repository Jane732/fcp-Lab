#include <stdio.h>
int main()
{
    int n,temp,count=-1,ldigit,sum=0;
    printf("enter a no: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        temp=temp/10;
        count ++;}

        temp=n;
        while(temp>0){
            ldigit=temp%10;
            for(int i=1;i<=count;i++){
                ldigit=ldigit*10;}
            sum=sum+ldigit;
            temp=temp/10;
            count=count-1;
        }      
        printf("reverse of the number is %d",sum);
        return 0;

}
