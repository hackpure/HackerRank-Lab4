// C Program To Print All Odd Numbers From 1 to N

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num, i = 1;
    scanf("%d", &num);
    while(i <= num){
        if(i % 2 != 0){
            printf("%d ", i);
        }
        i++;
    }
}
