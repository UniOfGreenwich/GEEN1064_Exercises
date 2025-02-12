#include <stdio.h> // we need this library to get access to the input and out put methods for printing to terminal

// declare a function that converts a decimal number to it's binary number
long long convert(int num)
{
    // declare an initialise some global variables
    long long binary = 0;  // long long used to store large binary values
    int remainder, i = 1; // int is 16 bytes by default

    //While the supplied number does not equal 0 do this code
    while(num!=0)
    {
        remainder = num % 2; // get the remainder
        num /= 2; // halve the supplied number
        binary += remainder * i; //get the binary representation
        i *= 10; // moving to next position ex: units -> tens
    }
    return binary; // once finished return long long  (binary number)
}
 
int main()
{   
    int decimal_num = 0;
    printf("Enter any decimal number: "); // let the user know what you want
    scanf("%d",&decimal_num); // capture their input 
    printf("%d in decimal is %lld in binary\n", decimal_num, convert(decimal_num)); // return the converted value be calling the function convert()
    return 0; // exit the code with no errors.
}