#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,k;
    float sumV;
    sumV=0;
    printf("entre la valeur n\n");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        sumV=sumV+1/sqrt(n+k);
    }
    printf("sumV= %f",sumV);

    return 0;
}
