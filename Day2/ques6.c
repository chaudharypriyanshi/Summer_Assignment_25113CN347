#include <stdio.h>

int main(){
    /*Write a program to print the reverse of a number*/

    int n, d, rev=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0){
        d = n%10;
        rev = rev*10 + d;
        n = n%10;
    }

    printf("The reverse of %d is %d",n, rev);
    return 0;
}