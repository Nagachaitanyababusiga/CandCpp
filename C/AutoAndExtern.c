#include <stdio.h>

int a;
//extern int var3; //should be present in other files

int main(){
    int var;
    auto int var2;
    printf("var=%d\n",var);
    printf("auto var2=%d\n",var2);
    //printf("extern var3=%d\n",var3);
    printf("va=%d\n",a);
    return 0;
}