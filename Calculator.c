#include <stdio.h>

int main() {
    float a, b;
    int c;
    int d  = (int)a;
    int e = (int)b;
    printf("\t\t***A_Simple_C_Calculator ✨***\n "); 
    printf("Enter The First Number: ");
    scanf("%f", &a);

    printf("Enter The Second Number = ");
    scanf("%f", &b);

    printf("Choose 1 for Addition\n");
    printf("Choose 2 for Subtraction\n");
    printf("Choose 3 for Divide\n");
    printf("Choose 4 for Multiply\n");
    printf("Choose 5 for Modulus\n");

    printf("Choice : ");
    scanf("%d", &c);

    switch(c) {

        case 1:
            printf("The Addition of %f and %f is %f\n", a, b, a+b);
            break;

        case 2:
            printf("The Subtraction of %f and %f is %f\n", a, b, a-b);
            break;

        case 3:
            if(b != 0)
                printf("The Division of %f and %f is %f\n", a, b, a/b);
            else
                printf("Error: Division by zero not allowed!\n");
            break;

        case 4:
            printf("The Multiplication of %f and %f is %f\n", a, b, a*b);
            break;

        case 5: {
            int d = (int)a;
            int e = (int)b;
            if(e != 0)
                printf("The Modulus of %d and %d is %d\n", d, e, d % e);            else
                printf("Error: Modulus by zero not allowed!\n");
            break;
        }

        default:
        printf("Invalid Choice! Please choose 1-5.\n");
    }

    printf("\n\tThanks for Using Our Calculator\n\t\tHave a Good Day");
    return 0;
}
