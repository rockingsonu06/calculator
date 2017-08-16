#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include <conio.h>
void main ()
{
int s, a, b, c;
printf("Enter no. to perform a function\n
       1. Addition of 2 numbers\n
       2. Subtraction of 2 numbers\n
       3. Multiplication of 2 numbers\n
       4. Division of 2 numbers\n");
scanf("%d",&s);


if (s==1)
     {
         printf("Enter first number-\n");
            scanf("%d",&a);
             printf("Enter second number-\n");
            scanf("%d",&b);

    printf("The sum of the numbers is %d",a+b);
     }

else if (s==2)
       {
           printf("Enter first number-\n");
            scanf("%d",&a);
             printf("Enter second number-\n");
            scanf("%d",&b);

    printf("The subtraction of the numbers is %d",a-b);
       }
else if (s==3)
        {
            printf("Enter first number-\n");
            scanf("%d",&a);
             printf("Enter second number-\n");
            scanf("%d",&b);

    printf("The multiplication of the numbers is %d",a*b);
        }
else if (s==4)
       {
           printf("Enter first number-\n");
            scanf("%d",&a);
             printf("Enter second number-\n");
            scanf("%d",&b);

    printf("The division of the numbers is %d",a/b);
       }
}
