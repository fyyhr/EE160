/**
 * account.c
 * Author: Conner Higashino
 * Login: csh3173
 * EE160 Section 2, Spring 2017
 * January 31, 2017
 */

/**
 * A program that prints the accumulated value of an initial investment invested at a specified
 * annual interest and compounded annually for a specified number of years. We assume that only
 * positive numbers will be inputted.
 */

#include <stdio.h>

float calc_acc_amt(float acc_amount, float annual_interest, int years);

int main() {
  float totalAccumulated, interest;
  float initialAccount = -1; /* I initialize this to -1 to guarantee that the program will enter the
                              * while loop.
                              */
  int years;

  while (initialAccount != 0) {
    /* Get user inputs */
    printf("How much are you initially investing?  $");
    scanf("%f", &initialAccount);
    /* There are multiple ways to handle this part, I choose to just ask for a decimal value.
     * You could ask for a float in percent and convert or something else that makes sense. I
     * didn't want to spend extra time on that.
     */
    printf("What is the fixed annual interest rate (decimal number only)?  ");
    scanf("%f", &interest);
    printf("How many years are you leaving this investment?  ");
    scanf("%d", &years);
    /* Calculate the interest */
    totalAccumulated = calc_acc_amt(initialAccount, interest, years);
    printf("Your total account after %d years will be $%.2f\n", years, totalAccumulated);
  };
}

/**
 * A function that computes the value of an investment account given initial conditions.
 *
 * @param acc_amount the initial amount in the account
 * @param annual_interest the fixed annual interest rate
 * @param years the number of years that the initial investment will accrue interest
 * @return the value of the account after the number of years
 */

float calc_acc_amt(float acc_amount, float annual_interest, int years) {
  int i = 0;
  while (i < years) {
    /* total = total + total * interest */
    acc_amount += acc_amount * annual_interest;
    i++;
  }
  return acc_amount;
}
