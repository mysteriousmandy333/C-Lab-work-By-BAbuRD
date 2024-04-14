#include<stdio.h>
int main(){
    int gcd,lcm,num1,num2;
    printf("Enter 1st no.\n");
    scanf("%d",&num1);
    printf("Enter 2nd no.\n");
    scanf("%d",&num2);
    int a=num1;
    while(num1!=0){
        if (num2%num1==0){
            gcd=num2/num1;
        }
        else
        gcd=1;
        num1--;
     }
    printf("The HCF is :%d\n",gcd);
    lcm=(a*num2)/gcd;
    printf("The LCM is :%d",lcm);



}