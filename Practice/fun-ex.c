//Day5 functions
#include <stdio.h>

//with argu and return

/*int sum(int a, int b)
{
    return a+b;
}*/

//without argu and with return

/*int sub()
{
    int s=5,u=6;
     return u-s;
}*/

// without argu and return

 /*int mul()
 {
    int p=2,q=5;
    printf(" Multiplication is: %d\n ", p*q);
 }*/

 // with argu no return
  int div(int a, int b)
  {
    printf("After divide:%d\n", a/b);
  }

int main()
{
    int a,b;

   printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    
    /*c = sub();
    printf("diffrence is:%d\n", c); */

    //mul();

    div(a,b);

    return 0;
}
