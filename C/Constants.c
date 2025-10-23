#include <stdio.h>
// constants declaration using #define
#define PI 3.14159
#define add(x,y) x+y
#define compare(x,y) if(x>y)\
                        printf("%d is greater than %d\n",x,y);\
                    else\
                        printf("%d is lesser than %d\n",x,y);
const int val=6;
 
void main(){
    printf("%.5f \n",PI);
    printf("sum is b+c= %d\n",add(3,4));
    printf("sum is a*b+c = %d\n",5*add(3,4));
    printf("time is %s\n",__TIME__);
    printf("date is %s\n",__DATE__);
    compare(4,5);
    printf("constant val is %d\n",val);
    int a=056;
    printf("octal representation to decimal representation is %d\n",a);
}