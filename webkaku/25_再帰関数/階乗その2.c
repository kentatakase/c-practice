/*
説明：再帰的にn!を求める関数を用いて、n!を計算する。
入力：標準入力から0から15までの整数nを入力。
出力：標準出力にn!を出力
*/

#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    int fac;

    printf("階乗n!を計算します。\n");
    printf("n=? \n");
    scanf("%d", &n);

    if(n<0||15<n)
    {
        printf("nは0から15までの整数にする。\n");
        return -1;
    }

    fac = fact(n);

    printf("%d ! = % 10d \n", n,fac);

    return 0;
}

int fact(int n)
{
    int fac;

    if(n==0)
      {
          fac=1;
      }
    else
      {
          fac=n*fact(n-1);
      }
    return fac;
}
