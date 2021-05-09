/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した自然数を逆順に並べ替える -
 */

 #include<stdio.h>

 int main(void)
 {
     int number;
     int reverse = 0;

     printf("自然数を入力してください = ");
     scanf("%d", &number);

     while(number > 0){
         reverse = reverse * 10 + number % 10;
         number /= 10;
     }

     printf("逆順で並び替えた自然数 = %d\n", reverse);

     return 0;
 }