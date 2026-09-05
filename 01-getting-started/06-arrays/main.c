#include <stdio.h>
/*count number of digits ,white space ,new line , and tab*/

int main(){
    int tab[10];
    for (int i=0;i<10;i++)
        tab[i]=0;

    int c;
    int whiteSpace=0;
    int newline=0;
    int other=0;
    while((c=getchar())!=EOF){
        if (c<='9' && c>='0'){
            ++tab[c-'0'];

        }
        else if (c==' '){
            ++whiteSpace;}
        else if (c=='\n'){
            ++whiteSpace;}
        else{
            ++other;
        }

    }
    printf("size = %d \n",sizeof(tab)/sizeof(int));
    for (int i=0;i<sizeof(tab)/sizeof(int);i++){
        printf("%d ",tab[i]);
    }
    printf("white space = %d ;other= %d ;newline= %d",whiteSpace,other,newline);
    printf("other= %d ",other);



    return 0;
}
/*
What is '0'?
In C, characters are stored as integer values (ASCII codes).

'0' is the character '0', which has ASCII value 48

'1' has ASCII value 49

'2' has ASCII value 50

...and so on up to '9' which is 57

What does c - '0' do?
c - '0' subtracts the ASCII value of '0' (48) from the ASCII value of the character c.

Example:
Character	ASCII Value	c - '0'	Result
'0'	48	48 - 48	0
'1'	49	49 - 48	1
'2'	50	50 - 48	2
'5'	53	53 - 48	5
'9'	57	57 - 48	9
Why do we use it?
We use c - '0' to convert a character digit to its actual integer value so we can use it as an array index.

In your code:
c
if (c >= '0' && c <= '9'){
    ++tab[c - '0'];  // Convert char to index
}
This means:

If c is '5', then c - '0' = 53 - 48 = 5
*/