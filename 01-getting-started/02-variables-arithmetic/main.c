#include <stdio.h>

/**
    /**
 * ====================================================================
 *                    PRINTF FORMAT SPECIFIERS REFERENCE
 * ====================================================================
 * 
 * FORMAT    DESCRIPTION                                       EXAMPLE
 * ========  ================================================  =============
 * %d        Print as decimal integer                          "42"
 * %6d       Print as decimal integer, at least 6 chars wide   "    42"
 * %f        Print as floating point                           "42.123456"
 * %6f       Print as floating point, at least 6 chars wide    "42.123456"
 * %.2f      Print as floating point, 2 digits after decimal   "42.12"
 * %6.2f     Print as float, at least 6 wide, 2 after decimal  " 42.12"
 * 
 * ====================================================================
 *                    ADDITIONAL COMMON SPECIFIERS
 * ====================================================================
 * 
 * FORMAT    DESCRIPTION                                       EXAMPLE
 * ========  ================================================  =============
 * %c        Print as single character                         "A"
 * %s        Print as string                                   "Hello"
 * %x        Print as hexadecimal (lowercase)                  "2a"
 * %X        Print as hexadecimal (uppercase)                  "2A"
 * %o        Print as octal                                    "52"
 * %p        Print as pointer address                          "0x7fff..."
 * %e        Print as scientific notation (lowercase)          "4.2e+01"
 * %E        Print as scientific notation (uppercase)          "4.2E+01"
 * %u        Print as unsigned decimal integer                 "42"
 * %ld       Print as long decimal integer                     "4200000000"
 * %lu       Print as unsigned long integer                    "4200000000"
 * 
 * ====================================================================
 *                    WIDTH AND PRECISION EXAMPLES
 * ====================================================================
 * 
 * FORMAT    INPUT     OUTPUT    EXPLANATION
 * ========  ========  ========  ========================================
 * %d        42        42        Default width
 * %4d       42        42        Minimum 4 chars (right-aligned)
 * %-4d      42        42        Minimum 4 chars (left-aligned)
 * %04d      42        0042      Minimum 4 chars, pad with zeros
 * %+d       42        +42       Always show sign
 * % d       42         42       Space for positive sign
 * %.2f      42.123    42.12     2 decimal places (rounded)
 * %8.2f     42.123       42.12  8 chars wide, 2 decimal places
 * %-8.2f    42.123    42.12     8 chars wide, left-aligned
 * %08.2f    42.123    00042.12  8 chars wide, pad with zeros
 * 
 * ====================================================================
 *                    COMMON ESCAPE SEQUENCES
 * ====================================================================
 * 
 * SEQUENCE   DESCRIPTION
 * ========   ========================================================
 * \n         Newline (move to next line)
 * \t         Tab (horizontal)
 * \r         Carriage return (move to start of line)
 * \b         Backspace
 * \f         Form feed
 * \a         Alert (bell)
 * \\         Backslash character
 * \'         Single quote
 * \"         Double quote
 * \0         Null character
 * 
 * ====================================================================
 *                    TIPS & BEST PRACTICES
 * ====================================================================
 * 
 * 1. Use %d for integers, %f for floating point numbers
 * 2. Width: minimum characters to print (including decimal point)
 * 3. Precision: number of digits after decimal point (for %f)
 * 4. Use - flag for left alignment
 * 5. Use 0 flag to pad with zeros instead of spaces
 * 6. Use + flag to always show + sign for positive numbers
 * 7. Always match format specifiers with the correct data types
 * 8. Wrong specifiers cause undefined behavior or incorrect output
 * 
 * ====================================================================
 *                    QUICK REFERENCE CARD
 * ====================================================================
 * 
 * CODE         MEANING                    EXAMPLE
 * ==========   =========================  ======================
 * %d           Integer                    10
 * %6d          Integer, width 6           "    10"
 * %f           Float default              3.141593
 * %.2f         Float, 2 decimals          3.14
 * %6.2f        Float, width 6, 2 dec      "  3.14"
 * %-6.2f       Float, left-aligned        "3.14  "
 * %06.2f       Float, zero-padded         "003.14"
 * 
 * ====================================================================
 */
*/

/**
 * Program: Fahrenheit to Celsius Temperature Converter
 * 
 * This program converts Fahrenheit temperatures to Celsius
 * using the formula: C = 5/9 * (F - 32)
 * 
 * It displays a temperature conversion table from 0°F to 300°F
 * in steps of 20°F.
 * 
 * KEY LEARNING POINTS:
 * 1. Integer vs Floating-point division
 * 2. While loops
 * 3. Proper variable naming
 * 4. Type casting and arithmetic precision
 */

int main() {
    // Constants - define the conversion parameters
    const int MAX_FAHRENHEIT = 300;      // Upper limit of temperature range
    const int MIN_FAHRENHEIT = 0;        // Lower limit of temperature range
    const int STEP_SIZE = 20;            // Increment between each conversion
    
    int fahrenheit = MIN_FAHRENHEIT;     
    int celsius = 0;                    
    
    printf("============================\n");
    printf("  °F to °C Conversion Table \n");
    printf("============================\n");
    printf("  Fahrenheit    Celsius    \n");
    printf("----------------------------\n");
    
    // Loop through Fahrenheit values and convert to Celsius
    while(fahrenheit < MAX_FAHRENHEIT) {
        // CRITICAL: Multiply first, then divide!
        // 5 * (fahrenheit - 32) / 9  gives integer result
        // (5/9) * (fahrenheit - 32)  would give 0 (integer division!)
        celsius = 5 * (fahrenheit - 32) / 9;
        
        // Display the conversion
        printf("     %3d°F     →    %3d°C\n", fahrenheit, celsius);
        
        // Move to the next Fahrenheit value
        fahrenheit = fahrenheit + STEP_SIZE;
    }
    
    printf("============================\n");
    
    return 0;
}