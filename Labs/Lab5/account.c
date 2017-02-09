/**
 * account.c
 * Author: Conner Higashino
 * Login: csh3173
 * EE160 Section 2, Spring 2017
 * February 8, 2017
 */

/**
 * A program that prints the accumulated value of an initial investment invested at a specified
 * annual interest and compounded annually for a specified number of years. We assume that only
 * positive numbers will be inputted.
 */

#include <stdio.h>

#define YEARS 1
#define MONTHS 2
#define DAYS 3

float calc_acc_amt(float acc_amount, float annual_interest, int years);

int main() {
  int flag;
  float totalAccumulated, interest;
  float initialAccount;
  int time, selector;

  while (flag != EOF) {
    /* Clean variables */
    flag = time = selector = 0;
    totalAccumulated = interest = initialAccount = 0;
    /* Get user inputs */
    printf("How much are you initially investing?  $");
    flag = scanf("%f", &initialAccount);
    if (flag == EOF) {
      printf("\nBye now\n");
      return 0;
    }
    printf("What is the fixed annual interest rate (decimal number only)?  ");
    scanf("%f", &interest);
    printf("Would you like to track interest accumulation by years, months, or days?\n");
    printf("1 - years;\t2 - months;\t3 - days\n");
    scanf("%d", &selector);
    if (selector == YEARS) {
      printf("How many years are you leaving this investment?  ");
      scanf("%d", &time);
    }
    /* This is a faster way than writing else { if { <statement> } }, either method is accepted */
    else if (selector == MONTHS) {
      printf("How many months are you leaving this investment?  ");
      scanf("%d", &time);
      /* Convert interest from annual to monthly rate */
      interest /= 12;
    }
    else if (selector == DAYS) {
      printf("How many days are you leaving this investment?  ");
      scanf("%d", &time);
      /* Convert interest from annaul to daily rate (assume 365 days/year, include weekends) */
      interest /= 365;
    }
    else {
      printf("Unrecognized input, let's start over\n");
      flag = 27;  //arbitrary, cannot be -1
    }
    if (flag == 27) {
      printf("\n");
    }
    else {
    /* Calculate the interest */
    totalAccumulated = calc_acc_amt(initialAccount, interest, time);
    printf("Your total account after %d ",time);
    /* Print correct measurement of time */
    if (selector == YEARS) {
      printf("years");
    }
    else if (selector == MONTHS) {
      printf("months");
    }
    else if (selector == DAYS) {
      printf("days");
    }
    printf(" is %.2f\n", totalAccumulated);
    }
  }
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
