#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial(int a){
    int i,f=1;
    for(i=1;i<=a;i++){
        f*=i;
    }
    return f;
}
int main() {
    int a,b,a1,b1,c,d;
    scanf("%d%d",&a,&b);
    a1=factorial(a);
    b1=factorial(b);
    c=factorial(a-b);
    d=a1/(b1*c);
    printf("%d",d);
}
