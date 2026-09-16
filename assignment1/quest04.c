#include <stdio.h>
int main()
// to convert from fahrenheit to celsius.
{
    float f,c;
    printf("Enter temp in fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)*1.8;
    printf("The temp is %.2f degree celsius.",c);
}
