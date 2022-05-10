//Basic Calculator
#include <stdio.h>

float num1, num2, addition, substraction, division, multiplication; //Declaring the variables

int main(){ //Main function
//Instructions and giving the variables a value

    printf("Basic Calculator \n");

    printf("Enter your first variable: \n"); //Print the indications
    scanf("%f", &num1);
    printf("Enter your second variable: \n");
    scanf("%f", &num2);
    
    //Operations

    addition = num1 + num2; //Realice the operations, in this case, the sum of the two variables
    substraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    //Results

    printf("The sum of the variables is: %f \n", addition); //Print the result of the operation, in this case, the sum
    printf("The substraction of the variables is %f \n", substraction);
    printf("The multiplication of the variables is: %f \n", multiplication);
    printf("The division of the variables is %f \n", division);

    return 0;
}