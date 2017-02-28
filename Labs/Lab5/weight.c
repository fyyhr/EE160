/*      File : weight.c            *
 *      By   : Conner Higashino                 *
 *      login: csh3173                 *
 *      team : Solutions                 *
 *      Date : February , 2017                 */

/*  A program to compute the sum of numbers given on the input  */

#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
  float sum = 0;
  float input;
  float weight;
  float totalWeight = 0;
  int flag;
  int count = 0;

        /*  Get the first input            */
  printf("Weight may be given as a decimal or integer, however you decide. But the program is not smart enough to know if you want decimals or percents. So be consistent with either one that you choose.\n");
  printf("Enter the first weight and value you would like to average (value first, separated with a space): ");
  scanf("%f %f", &weight, &value);

        /*  While there is more input      */
  while (flag != EOF) {

        /*  Accumulate the sum     */
    sum += input * weight;
    /* Accumulate the weight */
    totalWeight += weight;
    /* Increment count */
    count++;
                /*  Get the next input     */
    printf("Enter the next weight and value you would like to average (value first, separated with a space): ");
    flag = scanf("%f %f", &weight, &value);
  }

  /* Compute average */
  sum /= totalWeight;

        /*  Print the results              */
  printf("Done");
  printf("\nThe weighted average of your %d numbers is: %.2f\n", count, sum);

  return 0;
}
