#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
    }printf("\n");
    for(i=n;i!=0;i--){
        printf("%d ",i);
    }
}
