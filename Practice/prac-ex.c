/*creating a program in which convert
KM to M
Liter to ML
KG to G
Hours to MIN */

#include <stdio.h>
int main()
{
    int m = 1000, ml = 1000, g = 1000, min = 60, cs, a;
    while (1)
    {
        printf("Enter: \n 1 for Km to m \n 2 for Liter to Ml\n 3 for Kg to g \n 4 for Hours to MIN \n 0 for Quit \n:");
        scanf("%d", &cs);
        switch (cs)
        {
        case 0:

            printf("You want to Quit\n");
            goto end;
            break;

        case 1:
            printf("Enter the value of KM:");
            scanf("%d", &a);
            printf("You want to convert %dKm into M\n %dKm = %dm\n", a, a, a * m);
            break;

        case 2:
            printf("Enter the value of Liter:");
            scanf("%d", &a);
            printf("You want to convert %d Liter into Ml\n %dL = %dml\n", a, a, a * ml);
            break;

        case 3:
            printf("Enter the value of Kg:");
            scanf("%d", &a);
            printf("You want to convert %dKg into gram\n %dKg = %dg\n", a, a, a * g);
            break;

        case 4:
            printf("Enter the value of Hours:");
            scanf("%d", &a);
            printf("You want to convert %dhours into min\n %dhours = %dmin\n", a, a, a * min);
            break;

        default:
            printf("You enter wrong no. buddy\n");
            goto end;
            break;
        }
    }
end:
    return 0;
}
