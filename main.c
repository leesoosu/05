#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  
  printf("input an integer : ");
  scanf("%d", &a);
  
  if(a>=0)
       printf("absolute value: %d /n", a);
  else
       printf("absolute value: %d /n", -a);
  
  system("PAUSE");	
  return 0;
}
