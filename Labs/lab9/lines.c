//File: lines.c
//By: 
//Date: 

/* Program to print a line of characters */

#include <stdio.h>

void line_printer(char, int);
int flush();

int main()
{
    int size;
    char symbol;
    int flag;
    
    
    printf("Enter symbol for line: ");
    flag = scanf("%c", &symbol);
    while(flag != EOF)
    {
        flush();
        
        printf("Enter size of line: ");
        flag = scanf("%d", &size);
        flush();
        
        line_printer(symbol, size);
    
        printf("Enter symbol for line: ");
        flag = scanf("%c", &symbol);
    }
    
    printf("Done printing lines.\n");
    
    return 0;
}

void line_printer(char ch, int len)
{
    for(int i = 0; i < len; i++)
        putchar(ch);
    
    putchar('\n');
    
}

int flush()
{
    int i = 0;
    
    while(1)
    {
        i++;
        if (getchar() == '\n')
            return i;
    }   
    return i;
}
