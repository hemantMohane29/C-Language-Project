#include <stdio.h>
#include <math.h>

double division(double, double);
double Modulus(int, int);

int main()
{

    int choice;
    double a, b, results;
    while (1)
    {

        printf("\n\n----------------------------------\n ");
        printf("--Welcome to simple Calculator--\n ");
        printf("Choose one of the following optios\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiple\n");
        printf("4. Divided\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        printf("Now Enter your choice\n");
        scanf("%d", &choice);
        if (choice == 7){
            break;
        }
        // Exception handle kiya hai choice number
        if (choice < 1 || choice > 7){
            printf("warning --- ***** Invaild number ***** ");
            continue;
        }

        printf("\nEnter the first number = ");
        scanf("%lf", &a);

        printf("Enter the second number = ");
        scanf("%lf", &b);

        switch (choice){
        case 1:
            results = a + b;
            break;
        case 2:
            results = a - b;
            break;
        case 3:
            results = a * b;
            break;
        case 4:
            results = division(a, b);
            break;
        case 5:
            results = Modulus(a, b);
            break;
        case 6:
            results = pow(a, b);
            break;
        }
        // Exception handle kiya hai result ka
        if (!isnan(results)){
            printf("\n***here is result***\n");
            printf("Result of operator is = %.2lf\n", results);
        }
    };

    printf(" -- \"Thank you for using this calculator.\" --\n");
    printf("\t* Developed by Hemant Mohane. *");

    return 0;
}

// Exception handle division number
double division(double a, double b)
{
    if (b == 0){
        fprintf(stderr, "***** invaild number *****");
        return NAN;
    }
    else{
        return a / b;
    }
}

// Exception handle Modulus number
double Modulus(int a, int b)
{
    if (b == 0){
        fprintf(stderr, "***** Invaild number *****");
        return NAN;
    }
    else{
        return a % b;
    }
}
