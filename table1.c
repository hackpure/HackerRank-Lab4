#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, i = 1;
    scanf("%d", &num);
    do{
        printf("%d\n",num * i);
        i++;
    }while(i<=10);
    return 0;
}
