//Quiz Application
#include<stdio.h>

int main()
{
    int score=0, ans;

    printf("Capital of India?\n1.Delhi 2.Mumbai\n");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("Score=%d",score);

    return 0;
}