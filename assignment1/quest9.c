#include <stdio.h>
int main()
{
    int hr,min,sec;
    printf("enter time in hr min sec: ");
    scanf("%d%d%d",&hr,&min,&sec);
    int totalSec = hr*3600 + min*60 + sec;
    printf("%d",totalSec);
}