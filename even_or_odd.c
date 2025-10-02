#include<stdio.h>

int main()
{
  printf("Wassup Guys! Jah stinks");
  int a=5;

  for(int i=0; i<a; ++i)
    {
      printf("%d\n", i);
    }
  printf("Hello");

  int num;
  printf("\nGive me a number: ");
  scanf("%d", &num);

  if(num%2==0)
  {
    printf("\nNumber is Even");
  }
  else
  {
    printf("\nNumber is Odd");
  }

  return 0;
}
