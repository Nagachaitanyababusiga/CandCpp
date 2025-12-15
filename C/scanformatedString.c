#include <stdio.h>

int main(){
    int a,b;
    //'&input' translates to 'address of input'
    // similarly '&a' translates to 'address of a'
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("%d + %d = %d",a,b,a+b);
    return 0;
}