#include <stdio.h>

int main() {
    long long num, largestPrimeFactor = 0;
    int i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num % 2 == 0) {
        largestPrimeFactor = 2;
        num = num / 2;
    }

    for (i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %lld\n", largestPrimeFactor);

    return 0;
}
