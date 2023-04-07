#include<stdio.h>
int main(){
    int n;
    printf("Please enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d", a[i]);
    }
}