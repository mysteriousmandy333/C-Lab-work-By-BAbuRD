#include<stdio.h>
int fact(int n){
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);

}
int main(){
    int P ,C ,n,r;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter r:\n");
    scanf("%d",&r);
    P=fact(n)/fact(n-r);
    C=fact(n)/(fact(n-r)*fact(r));
    printf("The permutation of %d , %d is %d\n",n,r,P);
    printf("The Combination of %d , %d is %d\n",n,r,C);


}