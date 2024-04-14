#include<stdio.h>
int main(){
    int a=0,b=1,nxt=0;
    printf("The Fibbonanci series is :\n");
    do{
        printf("%d\t",nxt);
        nxt=a+b;
        a=b;
        b=nxt;
    }while(nxt<=300);


}
// #include <stdio.h>

// int main() {
//     int num1 = 0, num2 = 1, nextTerm = 0;

//     printf("Fibonacci series up to the last term less than or equal to 300:\n");

//     while (nextTerm <= 300) {
//         printf("%d, ", nextTerm);
//         num1 = num2;     // Move the second number to the first
//         num2 = nextTerm; // Move the next term to the second
//         nextTerm = num1 + num2; // Calculate the next term
//     }

//     return 0;
// }
