#include<stdio.h>
int main()
{
    int n;
    printf("please enter the size of array: ");
    scanf("%i",&n);
    int a[n],b;
    for (int i=1;i<=n;i++)
    {
        printf("please enter the no. ");
        scanf("%i",&a[i]);
    }
    return 0;
}