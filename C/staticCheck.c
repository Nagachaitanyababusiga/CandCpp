#include <stdio.h>
#include <limits.h>

int increment();

int main(){
    int val=increment();
    val=increment();
    val=increment();
    printf("%d",val);
    return 0;
}