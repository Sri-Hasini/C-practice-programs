#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,r,sum=0;
    scanf("%d",&a);
    while(a!=0){
        r=a%10;
        sum+=r;
        a/=10;
    }
    printf("%d",sum);
    return 0;
}

