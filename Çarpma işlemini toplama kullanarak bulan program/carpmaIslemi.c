#include <stdio.h>
#include <stdlib.h>

int num1,num2;
int counter;
int main(void){
    printf("Number 1:");
    scanf("%d",&num1);
    printf("Number 2:");
    scanf("%d",&num2);

    while (num2>0) {
        counter=counter+num1;
        num2--;
    }
    printf("solution: %d",counter);
}