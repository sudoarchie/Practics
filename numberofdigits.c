#include<stdio.h>
#include<math.h>
int n=0;
int fun1(int a);
int main(){
    int a;
    printf("Please enter a number: ");
    scanf("%d", &a);
    fun1(a);
    printf("it is a %d digit of number", n);
}
int fun1(int a){
    for(int i=1; ; i++){
        n=n+1;
        a=a/10.0;
        if(a<1){
            break;
        }
    }
}