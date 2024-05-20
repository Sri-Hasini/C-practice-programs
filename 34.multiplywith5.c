#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=5,i;
    printf("Multiplication Table for 5:\n");
    for(i=1;i<=20;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}

