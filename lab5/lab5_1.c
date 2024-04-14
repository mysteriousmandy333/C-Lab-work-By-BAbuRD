#include<stdio.h>
int main(){
    int lim1,lim2;
    int sum=0;
    printf("Enter the initial Limit \n");
    scanf("%d",&lim1);
    printf("Enter the final Limit \n");
    scanf("%d",&lim2);
    for(int i= lim1;i<=lim2;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("The sum of even numbers between %d and %d is %d",lim1,lim2,sum);
}