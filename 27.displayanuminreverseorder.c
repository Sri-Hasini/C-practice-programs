#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,i,rev=0,r;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}
