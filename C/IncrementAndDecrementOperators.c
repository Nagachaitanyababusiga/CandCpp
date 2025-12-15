#include <stdio.h>

int main(){
    //rvalue storing value
    //lvalue returning value
    int a=5;
    int x=a++;
    printf("%d\n",x);
    x=++a;
    printf("%d\n",x);
    int b=5;
    x=b--;
    printf("%d\n",x);
    x=--b;
    printf("%d\n",x);
    return 0;
    //token generalization : an important topic (read about lexeme in C)
    printf("%d",(a+++b));
}