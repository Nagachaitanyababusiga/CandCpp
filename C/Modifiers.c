#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    int a=234;
    printf("signed number a=%d, size = %d, max_value= %d, min_value= %d \n",a,sizeof(a),INT_MAX,INT_MIN);
    unsigned int b=234;
    printf("unsigned number b=%u, size = %d, max_value= %u, min_value= %u \n",b,sizeof(b),UINT_MAX,0); //there is no uint becuase it is zero
    short c=23;
    printf("short number is c=%d,  size = %d, max_value= %d, min_value= %d \n",c,sizeof(c),SHRT_MAX,SHRT_MIN);
    //sizeof(short)<=sizeof(int)<=sizeof(long)
    //int , signed int and signed refer to same data type
    // long, long int also
    long int d=234;
    printf("signed long d=%ld, size = %d, max_value= %ld, min_value= %ld \n",d,sizeof(d),LONG_MAX,LONG_MIN);
    long unsigned e=234;//putting - doesn't give any error but gives very big value
    printf("unsigned long e=%lu, size = %d, max_value= %lu, min_value= %lu \n",e,sizeof(e),ULONG_MAX,0); // there is no Ulong_min
    long long int f=234;
    printf("signed long long f=%lld, size = %d, max_value= %lld, min_value= %lld \n",f,sizeof(f),LLONG_MAX,LLONG_MIN);
    unsigned long long g=234;
    printf("unsigned long long g=%llu, size = %d, max_value= %llu, min_value= %llu \n",g,sizeof(g),ULLONG_MAX,0);
    float j=32.0;
    printf("float number j=%f, size = %d, max_value= %f, min_value= %f \n",j,sizeof(j),FLT_MAX,FLT_MIN);
    double i=32.0;
    //unsigned double i=33.0; // doesn't exists
    printf("double number i=%lf, size = %d, max_value= %lf, min_value= %lf \n",i,sizeof(i),DBL_MAX,DBL_MIN);
    long double k=32.0;
    printf("long double number i=%Lf, size = %d, max_value= %Lf, min_value= %Lf \n",k,sizeof(k),LDBL_MAX,LDBL_MIN);
}

