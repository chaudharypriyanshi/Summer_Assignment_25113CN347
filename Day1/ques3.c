#include <stdio.h>
int main(){
    /*Write a program to Find factorial of a number. */
    int i , n , fact = 1;
    printf("Enter the number n =");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial of a given number is: %d" , fact);
    return 0;
}