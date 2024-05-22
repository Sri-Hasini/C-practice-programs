#include <stdio.h>

int main() 
{
int decinum, binarynum[32], x = 0;
scanf("%d", &decinum);
while (decinum > 0) {
binarynum[x] = decinum % 2;
decinum = decinum / 2;
x++;
}
for (int y = x - 1; y >= 0; y--) 
{
printf("%d", binarynum[y]);
}
return 0;
}
