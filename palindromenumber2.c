// C Program To Check Whether A Number Is Palindrome Or Not

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, copy_num, reversed_num = 0, last_digit;
    scanf("%d", &num);
    copy_num = num;
    while(num > 0){
        last_digit = num % 10;
        reversed_num = reversed_num * 10 + last_digit;
        num = num / 10; 
    }
    if(copy_num == reversed_num){
        printf("Palindrome.");
    }
    else{
        printf("Not Palindrome.");
    }
    return 0;
}
