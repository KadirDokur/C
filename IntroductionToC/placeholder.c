#include <stdio.h>

int main(){

    int x = 5;
    int *p1 = &x;

    printf("%d\n",p1); 
    printf("%d\n",x); 
    printf("%d\n",&x); 
    printf("%d\n",*p1); 
    

    return 0;
}