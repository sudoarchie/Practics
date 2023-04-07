#include<stdio.h>
int main(){
     int a[][3]={{1,2,3},{1,2,3}};
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j <= 2; j++)
        {
            a[i][j]=a[i][j]+a[i][j];
        }
        
     }
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     
    return 0;
}