#include<stdio.h>
int add(int n1,int n2){
    return n1+n2;
}
int sub(int n1,int n2){
    return n1-n2;
}
int mult(int n1,int n2){
    return n1*n2;
}
int div(int n1,int n2){
    return n1/n2;
}
int main(){
    int a,b;
    printf("Enter 1st no.\n");
    scanf("%d",&a);
    printf("Enter 2nd no.\n");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("The sum is %d\n",sum);
    int diff=sub(a,b);
    printf("The difference is %d\n",diff);
    int pro=mult(a,b);
    printf("The product is %d\n",pro);
    int di=div(a,b);
    printf("The division is %d\n",di);
}