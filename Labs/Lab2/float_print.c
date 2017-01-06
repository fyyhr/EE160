//File: float_print.c
//By: Conner Higashino 
//login: csh3173
//Date: January 6, 2017

/*
	A program to illustrate different float formatting
*/

#include <stdio.h>

int main()
{
	//variable declaration
	float num;

	//variable initialization
	num = 1.2345;

	//printing different numbers of decimals
	printf("Printing with different precision: ");
	/* So when printing out floats, you can change the precision with the flag. The precision
	 * value is the number that's after the period in your flag. The precision tells printf
	 * how many digits after the decimal should be printed. */
	/* There's a few bugs in this section, make sure to fix them */
	printf("%.1f", num);//One decimal place
	printf(" %.2f", num);//two decimal places
	printf(" %.3f\n", num);//three decimal places. Notice the number is rounded
	
	//printing with zero padding after
	printf("Zero padding after: %.5f %.6f %.7f\n", num, num, num);
	/* If you noticed, when printing three zeros after, it isn't actually three zeros. There
	 * is a reason this happens, which is not covered in this course. Just know that when
	 * you print past the 6th decimal value in a float, things go wrong. */

	//priting with zero padding before
	/* You can also define the width of a float when printing. The width is the number of
	 * minimum characters that will be printed. So our num has 6 characters. It has 5 digits
	 * and 1 decimal point. So if we want to pad the number, we must define a width of 7 or
	 * more. Normally the padding will be added at the end, so we restric the precision
	 * of our float to only 4. That way we get all our decimal values and the padding will
	 * be forced to the front of the number. Printf uses spaces as padding by default, but we
	 * can set the padding to be a 0 if we type 0 before declaring the width of our float.
	 * This is pretty confusing, so if you don't quite understand, don't hesistate to ask. */
	printf("Zero padding before: %07.4f %08.4f %09.4f\n", num, num, num);
	return 0;
}
