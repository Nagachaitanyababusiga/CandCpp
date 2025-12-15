#include <stdio.h>

int main(){
    // * / % -> Highest priority (left to right)
    // + - -> Lowest priority (left to right)
    printf("%d",5%3*2/2);
    return 0;
}