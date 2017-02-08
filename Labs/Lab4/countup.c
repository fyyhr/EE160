/*      File : countup.c        *
 *      By   : Conner Higashino                 *
 *      login: csh3173                 *
 *      team : Solution                 *
 *      Date : January 30th, 2017                 */

/*  A program to count from 1 to 20, one per line  */

#include <stdio.h>

int main()
{
  int count;

	count = 1;          /* We initialize count = 1 as we begin counting from 1 rather than 0 */
	while (count < 21)  /* you may also choose to use the less-than or equal to operator. Either is
                       * correct.
                       */
	{
		printf("%d\n", count);  /* Print newline for readability, optional */
		count = count + 1;  /* You may leave this as-is. An alternative is to use count++ */
	}
}
