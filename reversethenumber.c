// C Program To Reverse A Number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, reversed_num = 0, last_digit;
    scanf("%d", &num);
    while(num > 0){
        last_digit = num % 10;
        reversed_num = reversed_num * 10 + last_digit;
        num = num / 10; 
    }
    printf("%d", reversed_num);
    return 0;
}
