/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した摂氏温度を華氏温度に変換 -
 */
#include <stdio.h>

int main(void){
    int i, j;

    float celsius, fahrenheit;
    printf("摂氏を入力してください = ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;

    printf("華氏 = %.3f\n",fahrenheit);

    return 0;
}