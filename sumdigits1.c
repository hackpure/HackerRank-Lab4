// C Program To Print Sum Of Digits Of A Number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);
    while(num != 0){
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("%d", sum);
    return 0;
}
