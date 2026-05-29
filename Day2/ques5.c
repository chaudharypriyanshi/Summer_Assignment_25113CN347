#include <stdio.h>

int main(){
    /*Write a program to calculate the sum of digits of number*/

    int n, d, sum=0;

    printf("Enter the number n: ");
    scanf("%d",&n);

    while(n>0){
        d = n%10;
        sum += d;
        n = n/10;
    }

    printf("Sum of digits of %d is %d",n,sum);
    return 0;
}