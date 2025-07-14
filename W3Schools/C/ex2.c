#include <stdio.h>

#define MAX(x,y) (x>y) ? x : y

void main(){
    int x=5;
    int y=15;
    printf("%d", MAX(x,y));
}