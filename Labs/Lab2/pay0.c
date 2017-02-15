/*   File: pay0.c
     Programmer: Conner Higashino
     Date: January 6th, 2017
     This program calculates the pay for one person, given the hours worked
     and rate of pay.
*/

#include <stdio.h> /* Need to add include declaration */

main()
{    /* declarations */
     int id_number;
     float hours_worked,
          rate_of_pay,
          pay;

     /* print title */
     printf("***Pay Calculation***\n\n");

     /* initialize variables */
     id_number = 123;
     hours_worked = 32.5;	/* Change these variable values */
     rate_of_pay = 10.10;	/*				*/

     /* calculate pay */
     pay = hours_worked * rate_of_pay;

     /* print data and results */
     printf("ID Number = %d\n", id_number);
     printf("Hours Worked = %f, Rate of Pay = %f\n",
               hours_worked, rate_of_pay);
     printf("Pay = %f\n", pay);		/* There's a typo here, it should be "printf" not "prinf" */
}


