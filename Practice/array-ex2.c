// program to write 2D array
// accept the element of array and show them

#include <stdio.h>
int main()
{
    int arr[2][3], i, j;

    // for accept array elemnet
    printf("Enter array elements:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    // for print element
    printf("Elements of array are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
