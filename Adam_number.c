#include <stdio.h>
#include <math.h>
int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int isAdamNumber(int num) {
    int originalSquare = num * num;
    int reverseSquare = reverse(num) * reverse(num);
    if(originalSquare == reverse(reverseSquare) == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (isAdamNumber(n) == 1)
        printf("True");
    else
        printf("False");
}
