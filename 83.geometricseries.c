#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    float a,c;
    int b,i;
    scanf("%f%d",&a,&b);
    for(i=0;i<=b;i++){
        c+=pow(a,i);
    }
    printf("%.3f",c);
}

