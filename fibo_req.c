#include<stdio.h>
int fibo(int number);
int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("%d", fibo(number));
}
int fibo(int number){
    if(number==0){
        return 1;
    }
    return number+fibo(number-1);
}