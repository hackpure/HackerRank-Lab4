// C Program To Print The Sum Of Digits Number(s)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, T, i, sum = 0;
    scanf("%d", &T);
    for(i = 1;i <= T; i++){
        scanf("%d", &num);
        while(num != 0){
            sum = sum + num % 10;
            num = num / 10;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
