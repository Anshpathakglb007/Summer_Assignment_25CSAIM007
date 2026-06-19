#include <stdio.h>

int reverse = 0;

int reverseNumber(int num) {
    if(num == 0)
        return 0;

    reverse = reverse * 10 + (num % 10);
    reverseNumber(num / 10);

    return reverse;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed Number = %d\n", reverseNumber(num));

    return 0;
}
