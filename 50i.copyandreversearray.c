#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
     int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
