#include <stdio.h>

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