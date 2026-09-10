#include <stdio.h>
int main()
{
    int secs=31558150,days,hrs,mins;
    days=secs/86400;
    secs=secs%86400;
    hrs=secs/3600;
    secs=secs%3600;
    mins=secs/60;
    secs=secs%60;
    printf("no of days is %d\n",days);
    printf("no of hrs is %d\n",hrs);
    printf("no of mins is %d\n",mins);
    printf("no of secs is %d\n",secs);

}