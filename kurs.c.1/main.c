#include <stdio.h>

int main(){
    
    int x=5, y=7;
    float pi = 3.14;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("pi: %f\n", pi);
    printf("pi: %.10f\n", pi);

    printf("all: %d %d %f\n", x,y,pi);

    return 0;
    
}