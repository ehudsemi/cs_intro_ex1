/******************
Name: Ehud Semidubersky
ID: 217931336
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */

    printf("Please enter a character\n");
    char inputCharacter;
    scanf(" %c", &inputCharacter);
    int value = (int)inputCharacter;    //ascii value
    printf("Its numerical value is: %d\n", value);
    int oddOrEven = value & 1;      //check the last bit if 1 or 0
    printf("0 for even, 1 for odd: %d\n", oddOrEven);




    

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    printf("Please enter a negative integer\n");
    int inputNum;
    scanf(" %d", &inputNum);
    int onesComplement = -(~inputNum);   //convert from 2's complement to 1's
    printf("1's complement: %d\n", onesComplement);
    unsigned unsignedNumber = (unsigned)inputNum;
    printf("unsigned: %u\n", unsignedNumber);





    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
    printf("Please enter 3 integers\n");
    int inputNum2, rightShift, leftShift;
    scanf(" %d%d%d", &inputNum2, &rightShift, &leftShift );
    int shiftedNum = (inputNum2 >> rightShift) << leftShift;    //first i shift right and then left
    printf("After shifting right and left: %d\n", shiftedNum);






    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    printf("Please enter 3 integers\n");
    int firstNum, secondNum, thirdNum;
    scanf("%d %d %d", &firstNum, &secondNum, &thirdNum);
    int oddOrEvenFirstNum = firstNum & 1;
    int oddOrEvenSecondNum = secondNum & 1;
    int oddOrEvenThirdNum = thirdNum & 1;
    int sum = oddOrEvenFirstNum + oddOrEvenSecondNum + oddOrEvenThirdNum;
    /* If sum >= 2 - at least two odd
    If sum <= 1 - at least two even
    (sum >> 1) & 1 gives 1 if sum>=2, 0 otherwise */
    int mostAre = (sum >> 1) & 1;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", mostAre);







    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    int octNum, hexNum;
    scanf("%o %x", &octNum, &hexNum);
    int octLSB = octNum & 1;     //check the last bit if 1 or 0
    int hexLSB = hexNum & 1;     //check the last bit if 1 or 0
    printf("LSBs: %d %d\n", octLSB, hexLSB);
    int octMSB = (octNum >> 31) & 1;    //check the last first if 1 or 0 by shifting the number
    int hexMSB = (hexNum >> 31) & 1;    //check the last first if 1 or 0 
    printf("MSBs: %d %d\n", octMSB, hexMSB);
    printf("Bye!\n");

    return 0;
}
