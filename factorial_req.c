#include<stdio.h>
int factorial(int number);
int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("%d", factorial(number));
}
int factorial(int number){
     if(number==1){
        return 1;
     }
     else{
        return number*factorial(number-1);
     }
}