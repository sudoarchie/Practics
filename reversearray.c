#include<stdio.h>
int main(){
        int a[5]={2,3,5,9,8},b[5];
        for (int i = 0; i < 5; i++)
        {
            b[i]=a[4-i];
            printf("%d",b[i]);
        }
        
     return 0;
}