 
/*     File : gravity.c     *
 *     By   : Conner Higashino              *
 *     login: csh3173              *
 *     Date : January 9, 2017              */
 
/*
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */
 
#include <stdio.h>

main() {
	float velocity;
	float time = -1;	/* Make sure to use a float variable */
	float distance;

        /* Get user input for the time variable. Check that input is greater than 0
	 * You don't need to check input for full credit (you haven't learned loops yet!)
	 * This is a very simple method of input validation and doesn't check if the user inputs
	 * characters or non-numbers. There are many different approaches to handle this. Data
	 * validation is important for system security.
	 */
	while (time < 0) {
		printf("How many seconds shall the object fall?\n");
		scanf("%f", &time);
		if (time < 0) {
			printf("Please enter a value of 0 or higher\n");
		}
	}

	/* The rest is unchanged from the Lab2 gravity.c file. Make sure you don't overwrite your
	 * time variable! Also, if you left time as an int variable, change your flags in the
	 * printf so that it properly calls a float.
	 */

        /*  compute the velocity */
        velocity = 32.0 * time;
 
        /*  compute the distance  */
        distance = 32 * time * time / 2;
 
        /*  print the result  */
        printf("An object falling %4.2f feet in %.2f seconds ", distance, time);
        printf("is traveling %4.2f ft/sec\n",velocity);
 
}
