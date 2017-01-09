/*      File : seconds.c        *
 *      By   : Conner Higashino                 *
 *      login: csh3173                 *
 *      team : Best Team                 *
 *      Date : January 9th, 2017                 */

/*
 *   This program reads a number of seconds and computes how many
 *     hours, minutes and seconds that corresponds to.
 */
#include <stdio.h>		/* Need to include stdio! */


main()
{  int seconds;
   int hours, minutes;		/* Terminate this line */

        /*  get the number of seconds  */
        printf("Enter the number of seconds: ");
        scanf("%d", &seconds);		/* Need to pass the address to scanf, not the value! */

        /*  compute the number of hours  */
        hours = seconds / 3600;

        /*  compute the number of minutes  */
        minutes = (seconds % 3600) / 60;		/* Take the remainder of seconds that do
							 * not make an hour and convert what you
							 * can to minutes.
							 */

        /*  compute the number of seconds remaining  */
        seconds = seconds % 60;		/* Make sure that the 'seconds' variable is spelt correctly */

        /*  print the result  */
        printf("there are %d hours, %d minutes, %d seconds\n",
                hours, minutes, seconds);

} /* Close main function */
