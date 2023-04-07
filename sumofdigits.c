#include<stdio.h>
#include<math.h>
int main(){
    int numberofdigit;
    printf("Please enter number of digit you have entered: ");
    scanf("%d", &numberofdigit);
    int digit,sum=0, numberstoringvar[numberofdigit];
    printf("Please enter digit: ");
    scanf("%d", &digit);
    for(int i=0; i<=numberofdigit; i++){
        numberstoringvar[i]=digit%10;
        digit=digit/10;
        sum=sum+numberstoringvar[i];
    }
    printf("%d", sum);
}