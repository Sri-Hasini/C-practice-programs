#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i=1,sum=0;
    scanf("%d",&a);
    do{
        sum+=i;
        i++;
    }while(i<=a);
    printf("%d",sum);
    return 0;
}

