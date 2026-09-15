#include <stdio.h>

int main()
{
    float a, b;
    char op;
    char g;
    do
    {

        printf("enter one value\n");
        scanf("%f", &a);
        printf("enter your opreter\n");
        scanf(" %c", &op);
        printf("enter second value\n");
        scanf("%f", &b);
        switch (op)
        {
        case '+':
            printf("sum: %.2f\n", a + b);
            break;
        case '-':

            printf("subtract: %f\n", a - b);
            break;
        case '*':
            printf("product: %f\n", a * b);
            break;
        case '/':
            if (b == 0)
            {
                printf("not divisible by zero");
            }
            else
                printf("division: %f\n", a / b);
            break;

        default:
            printf("anpad h kya\n ");
            break;
        }
        printf("wapas calculate karega kya ******(y/n)");
        scanf(" %c", &g);
    } while (g == 'Y' || g == 'y');
    printf("nikal beh*****");
    return 0;
}
