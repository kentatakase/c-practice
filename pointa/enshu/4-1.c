#include <stdio.h>
int main(void)
{
    int A = 3000, B = 5000;
    int goukei;

    goukei = A * 12 + B * 8;
    printf("結果 = %ld\n", goukei);
    goukei = A * 8 + B * 12;
    printf("結果 = %ld\n", goukei);

    return 0;
}