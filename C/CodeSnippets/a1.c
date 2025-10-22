#include <stdio.h>

void main(){
    printf("length= %d\n",printf("string=%s","Hello world\n"));
    printf("length= %10s\n","Hello");
    signed char c=255;
    c+=10;
    printf("c=%d\n",c);
    unsigned char d=255;
    d+=10;
    printf("c=%d\n",d);
    unsigned i=1;
    signed j=-4;
    printf("unsigned representation = %u\n",i+j);
    printf("signed representation = %d\n",i+j);
}