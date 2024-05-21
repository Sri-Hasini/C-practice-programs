#include<stdio.h>
#include<string.h>
int main(){
	int i,cnt=0;
	char s[100];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
		cnt++;
	}
	printf("%d",cnt);
}
