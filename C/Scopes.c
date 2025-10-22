#include <stdio.h>

int a;
int fun();

void main(){
    printf("%d\n",fun());
}

int fun(){
    printf("%d\n",a);
    a+=10;
    printf("%d\n",a);
    return a+10;
}