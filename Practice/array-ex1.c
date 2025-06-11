#include <stdio.h>
int main()
{
    int arr[3],i,sum=0;
    printf("Enter element of array:\n");
    for(i=0;i<=3;i++)
    {
        scanf("%d", &arr[i]);
    }
    //printf("Enter values are:\n");
    
    for(i=0;i<=3;i++)
    {
        printf("%d value is :%d \n", i ,arr[i]);
    }

    return 0;
}
