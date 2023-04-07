#include<stdio.h>
int main(){
     int n,a=0;
     printf("Please enter a number: ");
     scanf("%d", &n);
     for(int i=2; i<n; i++){
        if(n%i==0){
            a++;
        }
     }
     if(a==0){
        printf("Prime");
     }
     else{
        printf("Not Prime");
     }
     
    return 0;
}