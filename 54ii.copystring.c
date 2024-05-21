#include<stdio.h>
int main(){
    int i;
    char s[1001],h[1001];
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++){
        h[i]=s[i];
    }
    h[i]='\0';
    for(i=0;h[i]!='\0';i++){
    printf("%c",h[i]);
    }
}
