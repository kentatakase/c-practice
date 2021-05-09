#include<stdio.h>

int main(void)
{
    int gosen, sen, gohyaku, hyaku, gozyu, zyu, go, ichi;
    int kaimono = 468;
    int okane = 10000;
    int oturi;

    oturi = okane - kaimono;
    gosen = oturi / 5000;
    oturi = oturi % 5000;
    
    sen = oturi / 1000;
    oturi = oturi %1000;

    gohyaku = oturi / 500;
    oturi = oturi % 500;

    hyaku = oturi / 100;
    oturi = oturi % 100;

    gozyu = oturi / 50;
    oturi = oturi % 50;

    zyu = oturi / 10;
    oturi = oturi % 10;

    go = oturi / 5;
    oturi = oturi % 5;

    ichi = oturi / 1;
    oturi = oturi % 1;

    printf("五千円札の枚数 = %d\n", gosen);
    printf("千円札の枚数 = %d\n", sen);
    printf("500円玉の枚数 = %d\n", gohyaku);
    printf("百円玉の枚数 = %d\n", hyaku);
    printf("五十円玉の枚数 = %d\n", gozyu);
    printf("十円玉の枚数 = %d\n", zyu);
    printf("五円玉の枚数 = %d\n", go);
    printf("一円玉の枚数 = %d\n", ichi);
    
    return 0;
    
}