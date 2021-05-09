/* print_depth.c 再帰関数実験１ コメント等一部省略*/

#include <stdio.h>
#define MAX 10 /*nの最大値、見栄えを制御*/
int fact(int n); /*階乗n!を求める再帰的な関数*/

void print_dot(int k);/*仮引数分ドットを表示する関数*/

int main()
{
    int n;
    int fac;
    printf("n= ? ");
    scanf("%d", &n);
    fac = fact(n);
    printf("\n");
    printf("%d! = %5d \n", n, fac);
    return 0;
}

int fact(int n)
{
    int fac;

    print_dot(MAX-n);
    printf("Called by n = %d \n", n);
    if(n==0)
      {
          fac=1;
          print_dot(MAX-n);
          printf("REACHED BASIS 0!=1 \n");
      }
    else
      {
          fac=n*fact(n-1);
          print_dot(MAX-n);
          printf("%d !=%d *( %d! )\n", n, n, n - 1);
      }
    return fac;
}

void print_dot(int k)
{
    int i;
    for (i=0;i<k;i++)
      {
          printf("..");
      }
    return;
}