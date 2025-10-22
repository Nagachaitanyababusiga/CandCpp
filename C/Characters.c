#include <stdio.h>
#include <limits.h>
#include <float.h>

void main(){
    int a=65;
    char b=65;
    printf("a=%c,b=%c,int a=%d,int b=%d\n",a,b,a,b);
    printf("signed character=%c and unsigned character=%c\n",-128,128);
    long double c=4.2342432423;
    printf("c=%.16Lf\n",(double)c);
    printf("3/4=%.16f\n",3.0/4);
}