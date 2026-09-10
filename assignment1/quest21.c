#include <stdio.h>
int main()
{
  int n1,n2;
  printf("Enter two nos: ");
  scanf("%d %d",&n1,&n2);
  //a->+ b->- c->* d->/ e->%
  char ch;
  printf("Enter a character: ");
  scanf(" %c",&ch);
  
  switch(ch){
    case 'a': printf("the sum is %d\n",n1+n2);
    break;
    case 'b': printf("the difference is %d\n",n1-n2);
    break;
    case 'c': printf("the multiplication is %d\n",n1*n2);
    break;
    case 'd': printf("the division is %d\n",n1/n2);
    break;
    case 'e': printf("the remainder is %d\n",n1%n2);
    break;
default : printf("not valid\n");
  }
printf("end");
  
}