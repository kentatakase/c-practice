#include<stdio.h>
#include<math.h>

int space(int);

int main(void)
{
    int x;
    int y;
    int i;

    for(i=49;i>=0;i--)
    {
      y = i;
      x = 4 * sqrt(y);
      printf("*");
      space(x);
      printf("|");
      space(x);
      printf("*");
      printf("\n");
    }

  return 0;
}


int space(int xx)
{
  for (int j = 0; j < xx; j++)
  {
    printf(" ");
  }
  return 0;
}