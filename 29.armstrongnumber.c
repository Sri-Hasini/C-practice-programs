#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int a,n,r,sum=0;
    scanf("%d",&a);
    n=a;
    while(a!=0){
        r=a%10;
        sum+=r*r*r;
        a/=10;
    }
    if(sum==n)printf("armstrong number");
    else printf("not armstrong number");
    return 0;
}
