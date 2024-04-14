#include <stdio.h>

// Global variable
int globalVar = 10;

// Function demonstrating local, global, and static variables
void variableDemo() {
    // Local variable
    int localVar = 20;

    // Static variable
    static int staticVar = 30;

    // Printing values of all variables
    printf("Inside variableDemo function:\n");
    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);
    printf("Static variable: %d\n", staticVar);

    // Modifying values of all variables
    globalVar += 10;
    localVar += 10;
    staticVar += 10;
}

int main() {
    // Calling variableDemo function
    variableDemo();

    // Printing values of global variable after function call
    printf("\nInside main function:\n");
    printf("Global variable: %d\n", globalVar);

    // Trying to access local and static variables from main function (uncomment to see compilation error)
    // printf("Local variable: %d\n", localVar);   // Compilation error: localVar not in scope
    // printf("Static variable: %d\n", staticVar); // Compilation error: staticVar not in scope

    return 0;
}
