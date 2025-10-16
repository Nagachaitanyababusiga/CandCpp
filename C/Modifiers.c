#include <stdio.h>

int main(){
    signed int a=234;
    signed int b=-234;
    unsigned int c=23;
    unsigned int d=-234;
    long e=2343434;
    printf("a=%d, b=%d,c=%d,d=%d, e=%d\n",a,b,c,d,e);
    printf("a=%d, b=%d,c=%d,d=%d, e=%d",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
}