#include <stdio.h>
int main()
//to check if a given character is capital or small
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
if(ch>='a' && ch<='z'){printf("Small letter\n");}
else if(ch>='A' && ch<='Z'){printf("Capital letter\n");}
else{printf("Not a letter");}

}