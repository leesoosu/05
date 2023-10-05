#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, i, sum = 0;
  
  printf("input a number : ");
  scanf("%d", &a);
  
  for(i=1; i<=a; i++)
      sum = sum+i;
  printf("The result is %d\n", sum);
  
  system("PAUSE");	
  return 0;
}
