//Marksheet Generation
#include<stdio.h>

int main()
{
    int m1,m2,m3,total;
    float per;

    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;
    per=total/3.0;

    printf("Total=%d\nPercentage=%.2f",total,per);

    return 0;
}