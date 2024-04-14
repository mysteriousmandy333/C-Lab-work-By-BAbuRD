#include <stdio.h>

// Recursive function to generate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: fib(0) = 0, fib(1) = 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the Fibonacci series up to a given limit
void printFibonacciSeries(int limit) {
    // Iterate through the Fibonacci series and print each number
    for (int i = 0; i < limit; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int limit;

    // Input the limit of the Fibonacci series from the user
    printf("Enter the limit of the Fibonacci series: ");
    scanf("%d", &limit);

    // Print the Fibonacci series up to the specified limit
    printf("Fibonacci series up to %d terms: ", limit);
    printFibonacciSeries(limit);

    return 0;
}
