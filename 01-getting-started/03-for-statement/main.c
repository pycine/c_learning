#include <stdio.h>

/*
 * ====================================================================
 * PROGRAM: Fahrenheit to Celsius Temperature Converter
 * ====================================================================
 * It displays a conversion table from 0°F to 300°F in steps of 20°F.
 * 
 * KEY CONCEPTS DEMONSTRATED:
 * 1. For loop structure (initialization; condition; increment)
 * 2. Integer arithmetic (multiply before divide to avoid truncation)
 * 3. Format specifiers (%3d for neat alignment)
 * 4. Variable scope (celsius declared inside the loop)
 * 5. Expression evaluation inside printf
 * 
 * ====================================================================
 */

int main() {
    /* 
     * Print Fahrenheit-Celsius table.
     * 
     * The for loop has three parts:
     *   1. INITIALIZATION: int fahr = 0  (start at 0°F)
     *   2. CONDITION:     fahr <= 300   (continue until 300°F)
     *   3. INCREMENT:     fahr = fahr + 20 (step by 20°F)
     * 
     * Each iteration calculates the Celsius equivalent and prints it.
     */
    for (int fahr = 0; fahr <= 300; fahr += 20) {
        

        int celsius = 0;                     // Declare and initialize
        celsius = 5 * (fahr - 32) / 9;       // Calculate conversion
        
        /*
         * Print the conversion with nice formatting.
         * 
         * %3d  → Print integer with minimum width of 3 characters
         *        (right-aligned for neat table columns)

         */
        printf("     %3d°F     →    %3d°C\n", fahr, celsius);
    }
    
   
    return 0;
}
/*
EXERCISE 1-5 (FOR THE READER):
 * ====================================================================
 * 
 * Modify the temperature conversion program to print the table in 
 * reverse order, that is, from 300 degrees down to 0.
 * 
 * HINTS:
 * 1. Start fahr at 300 instead of 0
 * 2. Change the condition to fahr >= 0
 * 3. Change the increment to fahr = fahr - 20
 * 
*/