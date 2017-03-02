/*      File : readcmd.c        *
 *      By   : Conner Higashino                 *
 *      login: csh3173                 *
 *      team : Solution                 *
 *      Date : March 3, 2017                 */

/*
 * Read a command, skipping over leading blanks and any trailing
 * characters.
 */

#include <stdio.h>

int skipBlanks(void);
int skipOverRestOfCommand(void);

int main()
{
  int cmd;
        /* Grab character and ignore any leading whitespace */
        cmd = skipBlanks();
        while (cmd != EOF)
        {
                if (cmd == ';' || cmd == '\n') {
                    printf("Error: missing command\n");
                } else if ((cmd < 'A' || cmd > 'Z') && (cmd < 'a' || cmd > 'z')) {
                    printf("Error: %c is not a letter.\n", cmd);
                    skipOverRestOfCommand();
                } else {
                    printf("The command is: %c\n", cmd);
                    skipOverRestOfCommand();
                }
                cmd = skipBlanks();
   
        }
}

/**
 * A function to read in all whitespace until a character
 *
 * @return the first non-whitespace character
 */

int skipBlanks(void)
{
  int c;

        c = getchar();
        /* If the current grabbed character is a whitespace, get the next one */
        while (c == ' ' || c == '\t')
                c = getchar();
        return c;
}

/**
 * A function to read in all characters until newline or semi-colon
 *
 * @return newline character or semicolong, whichever is encountered
 */

int skipOverRestOfCommand(void)
{
  int c;
  
        c = getchar();
        /* Get all characters until newline */
        while (c != '\n' && c != ';')
                c = getchar();
        return c;
}
