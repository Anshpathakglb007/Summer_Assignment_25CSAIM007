#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print descending numbers
        for(k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}