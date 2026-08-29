#include <stdio.h>

#define IN  1
#define OUT 0

/*
 * ====================================================================
 * 1.5 CHARACTER INPUT & OUTPUT
 * ====================================================================
 * 
 * getchar() = reads ONE character from keyboard
 * putchar() = prints ONE character to screen
 * EOF = End of File (-1) - Ctrl+D (Linux) or Ctrl+Z (Windows)
 * 
 * CRITICAL:
 * 1. int c (not char!) - EOF is -1
 * 2. (c = getchar()) != EOF - parentheses needed!
 * 3. == for compare, = for assignment
 * 4. ALWAYS read next char inside loop
 * 
 * ====================================================================
 */

int main() {
    int c;          // MUST be int (EOF = -1)
    int nl = 0;     // Line counter
    int nw = 0;     // Word counter
    int nc = 0;     // Character counter
    int state = OUT; // Are we inside a word?
    
    /*
     * getchar() reads one character from keyboard
     * putchar() writes one character to screen
     * 
     * Example: Type "Hello" → Program prints "Hello"
     * 
     * This loop reads a character, checks if it's EOF,
     * and if not, processes it and prints it back.
     */
    while ((c = getchar()) != EOF) {
        
        // Count every character
        ++nc;
        
        // Count lines (newline characters)
        if (c == '\n') {
            ++nl;
        }
        
        
        putchar(c);  // Print the character back to screen
    }
    
    // Print results: lines, words, characters
    printf("\n\n=== STATISTICS ===\n");
    printf("Lines:     %d\n", nl);
    printf("Words:     %d\n", nw);
    printf("Chars:     %d\n", nc);
    
    return 0;
}
/*
* EXERCISES 
 * ====================================================================
 * 
 * Exercise 1-6:  Verify that getchar() != EOF is 0 or 1
 *                Hint: printf("%d\n", getchar() != EOF);
 * 
 * Exercise 1-7:  Write a program to print the value of EOF
 *                Hint: printf("EOF = %d\n", EOF);
 * 
 * Exercise 1-8:  Write a program to count blanks, tabs, and newlines
 *                Hint: Count ' ', '\t', and '\n' separately
 * 
 * Exercise 1-9:  Write a program to copy input to output, replacing
 *                each string of one or more blanks with a single blank
 *                Hint: Track if you're already in a blank space
 * 
 * Exercise 1-10: Write a program to copy input to output, replacing:
 *                - tab     → \t
 *                - backspace → \b
 *                - backslash → \\
 *                Hint: if (c == '\t') printf("\\t");
 * 
 * Exercise 1-11: How would you test the word count program?
 *                What inputs might uncover bugs?
 * 
 * Exercise 1-12: Write a program that prints its input one word per line
 *                Hint: Print characters normally, print '\n' when you
 *                see a space, tab, or newline (but don't print those)
 * 
 * ====================================================================
 */
