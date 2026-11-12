#include <stdio.h>

int main() {
    // Introduction
    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Choose an operation:\n");
    printf("\t1. Addition\n");
    printf("\t2. Subtraction\n");
    printf("\t3. Multiplication");
    printf("\t4. Division");
    printf("\t5. Modulus\n");
    printf("-----------------------------------");

    // Asking the user to choose his operation
    printf("Choose any operation(1-5):");
    int user_option;
    scanf("%i", &user_option);

    // Asking for first number
    printf("Enter you first number:");
    int fisrt_number;
    scanf("%i", &fisrt_number);

    // Asking for second number
    printf("Enter your second number:");
    int second_number;
    scanf("%i", &second_number);
    
    // Addition
    if (user_option == 1){
        int sum = fisrt_number + second_number;
        printf("%i\n", sum);
    }
    // Subtraction
    else if (user_option == 2){
        int difference = fisrt_number - second_number;
        printf("%i\n", difference);
    }
    // Multiplication
    else if (user_option == 3){
        int multiple = fisrt_number * second_number;
        printf("%i\n", multiple);
    }
    // Division
    else if (user_option == 4){
        // Zero division handling
        if (second_number == 0){
            printf("Division by zero is not allowed\n");
        }

        else{
            int div = fisrt_number / second_number;
            printf("%i\n", div);
        }
    }
    // Modulus
    else{
        int mod = fisrt_number % second_number;
        printf("%i\n", mod);
    }


    return 0;
}
