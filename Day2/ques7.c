#include <stdio.h>

int main(){
    /*Write a program to find product of digits*/

    int n, d, product=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0){
        d = n%10;
        product = product*d;
        n = n/10;
    }
    printf("Product of digits of %d is %d", n, product);
    return 0;
}