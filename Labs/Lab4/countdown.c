/*      File : countdown.c      *
 *      By   : Conner Higashino                 *
 *      login: csh3173                 *
 *      team : Solution                 *
 *      Date : January 30, 2017                 */

/*  A program to count from 10 down to 1, one per line and print "blastoff"  */

#include <stdio.h>

main()
{

        int count = 10;       /* Initialize count to 10, as that's where we wish to start counting
                               * down from
                               */

        while(count > 0)   /* We don't want to print '0'. Could also change to >= 1 */
        {
                printf("%d\n", count);  /* print current countdown number */
                count--;                /* Decrement count, could also use count = count -1 or
                                         * count -= 1
                                         */

        }
        printf("BLASTOFF!\n");

}

