#include <stdio.h>


int main(void)
{
unsigned a;
if (scanf("%4u",&a) !=1) {
    printf("input error");
    return 0;
}

printf ("%s",(a%3000 >=0 && a%3000<=999) ? (a / 3000 == 1 ? "yes" : "no") : "no");
printf("Hello world");
printf("Hello all world");

    return 0;
}