//Do while code print a table of given by user 

#include <stdio.h>
int main()
{
    int tab, i=1;
    printf("Enter a no. for table:");
    scanf("%d", &tab);

    do
    {
        printf("%d * %d = %d\n", tab , i, tab*i);
        i=i+1;
    } while(i<=10);

    return 0;
}