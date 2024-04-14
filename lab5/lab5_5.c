#include <stdio.h>

void triangleShape(int n);
void flagPole(int n);

int main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    // Display the upper triangle
    triangleShape(row);
    // Display the lower triangle
    triangleShape(row);
    // Display the flagpole
    flagPole(row);

    return 0;
}

void triangleShape(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void flagPole(int n) {
    for (int i = 1; i <= n; i++) {
        printf("*\n");
    }
}

