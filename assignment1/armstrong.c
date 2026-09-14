#include <stdio.h>
int main()
{
    int n,temp,Ldigit,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while (temp>0)
    { temp=temp/10;
        count++;
    }
    temp=n;
    while(temp>0)
    {
        int power=1;
        Ldigit=temp%10;
        for(int i=1;i<=count;i++){
            power=power*Ldigit;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if (sum==n)
    {
        printf("armstrong no");
        
    }
    else{printf("not armstrong no");}

    

}
