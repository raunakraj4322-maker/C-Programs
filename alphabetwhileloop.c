/*
 * Program: Alphabet Printer using While Loop
 * Description: Prints all uppercase letters (A to Z) on separate lines
 * Author: [Raunak Raj]
 * Date: March 2026
 */

#include <stdio.h>

int main()
{
    char i;  // Loop variable to store characters
    
    i = 'A';  // Initialize with uppercase 'A'
    
    // Print all uppercase letters from A to Z
    while (i <= 'Z') {
        printf("%c\n", i);  // Print character followed by newline
        i++;                 // Move to next character
    }
    
    return 0;  // Indicate successful program execution
}
