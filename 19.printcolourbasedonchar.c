#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s;
    scanf("%c",&s);
    switch(s){
        case 'R':printf("RED");
            break;
        case 'B':printf("BLUE");
            break;
        case 'G':printf("GREEN");
            break;
        case 'Y':printf("YELLOW");
            break;
    }
    return 0;
}

