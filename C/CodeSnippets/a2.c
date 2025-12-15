#include <stdio.h>

static int i;
static int i=25;  // bss section will store unassigned and data will store assigned variables
static int i;// if not reassigned there will be an error
int main(){
    static int i; // i=0 if not commented if not commented then i=25
    printf("%d",i); 
    return 0;
}