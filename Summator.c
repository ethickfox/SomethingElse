#include <stdio.h>
#include <stdlib.h>
void summator(int *a, int *b,int max,int t)
{
    int i,counter=0,digit=0;
    int *c = (int*)calloc(sizeof(int),max+1);
    for(i=0; i<max; i++)
    {
        counter = a[max-i-1] +b[max-i-1];
        if(counter>=10)
        {
            digit=counter/10;
            counter=counter%10;
        }
        c[max-i]+=counter;
        c[max-i-1]+=digit;
        digit=0;
        counter=0;

    }
    for(i=0; i<max+5; i++)
        printf("-");
    printf("\n");
    printf("c: ");
    for(i=0; i<max+1; i++)
        printf("%d",*(c+i));
    free(c);
}
int main()
{
    setlocale(0,"");
    int n,i,m,t=0,max,dif1=0,dif2=0;
    printf("¬ведите размер числа 1: ");
    scanf("%d",&n);
    printf("¬ведите размер числа 2: ");
    scanf("%d",&m);
    if(n>m)
    {
        max=n;
        dif1=max-m;
    }
    else if(n<m)
    {
        max=m;
        dif2=max-n;
    }
    else
    {
        max=m;
    }
    int *a =(int*)calloc(sizeof(int),max);
    int *b =(int*)calloc(sizeof(int),max);
    printf("¬ведите a: ");
    for(i=dif2+1; i<=n+dif2; i++)
    {
        printf("\n");
        scanf("%d",a+i);
    }
    printf("¬ведите b: ");
    for(i=dif1+1; i<=m+dif1; i++)
    {
        printf("\n");
        scanf("%d",b+i);
    }
    printf("a: ");
    for(i=0; i<n+dif2; i++)
        printf("%d",*(a+i));
    printf("\n");
    printf("b: ");
    for(i=0; i<m+dif1; i++)
        printf("%d",*(b+i));
    printf("\n");
    summator(a,b,max,t);
    free(a);
    free(b);
    return 0;
}
