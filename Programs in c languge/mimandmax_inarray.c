#include <stdio.h>
#define MAX_SIZE 100
int minmaum(int arry[], int n)
{
    int i;
    int min = arry[0];
    for (i = 0; i < n; i++)
    {
        if (arry[i] > min)
        {
            min = arry[i];
        }
        return min;
    }
}
int maximum(int arry[], int n)
{
    int i;
    int max = arry[0];
    for (i = 0; i < n; i++)
    {
        if (arry[i] > max)
        {
            max = arry[i];
        }
    }
    return max;
}

int main(void)
{
    int i, n;
    int arry[MAX_SIZE];
    printf("ENTER THE SIZE FOR ARRY:");
    scanf("%d", &n);
    if (n > MAX_SIZE)
    {
        printf("INVALID INPUT SIZE OF ARRY  MORE THAN MAX SIZE");
    }
    for (i = 0; i < n; i++)
    {
        printf("input the elment (%d) of arry:", i + 1);
        scanf("%d", &arry[i]);
    }

    printf("THE MAX NUMBER IN ARRY:%d\n", maximum(arry, n));
    printf("THE MANIMUM NUMBER IN ARRY:%d\n", minmaum(arry, n));
}