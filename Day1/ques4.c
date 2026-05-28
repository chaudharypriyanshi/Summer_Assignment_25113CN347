#include <stdio.h>
int main(){
//Write a program to Count digits in a number.
int n, count = 0;
printf("Enter the number n =");
scanf("%d",&n);
while(n>0){
    n = n/10;
    count = count + 1;
}
printf("Total number of digit is: %d " , count);
return 0;
} 