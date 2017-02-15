 
/*     File : gravity.c     *
 *     By   : Conner Higashino              *
 *     login: csh3173              *
 *     Date : January 6, 2017              */
 
/*
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */
 
#include <stdio.h>

main() {
	float velocity;
	int time;	/* Change the comma to a semi-colon */
	float distance;	/* Add the variable declaration for distance */
 
        /*  set the time  */
        time = 10;
 
        /*  compute the velocity */
        velocity = 32.0 * time;		/* Add a semi-colon here */
 
        /*  compute the distance  */
        distance = 32 * time * time / 2;
 
        /*  print the result  */
        printf("An object falling %4.2f feet in %d seconds ", distance, time); /* Add the distance
										* variable to be
										* printed. Changed
										* the flag for time
										* to an int flag
										* from a float 
										* flag */
        printf("is traveling %4.2f ft/sec\n",velocity);
 
}	/* Close main function */
