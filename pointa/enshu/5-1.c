#include<stdio.h>

int main(void)
{
    double a = 53.6, b = 84.7, c = 57.89;
     double ans;

    ans = (a + b) / (c * b);
    printf("少数形式 = %f\n", ans);
    printf("指数形式 = %e", ans);

    return 0;
     
}