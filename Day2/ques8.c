#include <stdio.h>

int main(){

    /*Write a program to check whether a number is palindrome or not*/

    int n, d, rev=0, temp;

    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;

    while (n>0){
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }

    if(rev == temp){
        printf("%d is a palindrome number",n);
    }else{
        printf("%d is not a palindrome number",n);
    }
    return 0;
}