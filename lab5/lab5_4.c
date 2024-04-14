#include <stdio.h>

void displayWave(int rows);

int main() {
    int numRows;
    printf("Enter the number of rows for the wave: ");
    scanf("%d", &numRows);

    displayWave(numRows);

    return 0;
}

void displayWave(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%02X ", j); // Display hexadecimal values
        }
        printf("\n");
    }
}
