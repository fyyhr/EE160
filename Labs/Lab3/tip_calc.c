//File: tip_calc.c
//By: Conner Higashino 
//login: csh3173
//Date: January 10, 2017

/*
	A program to compute the cost of a meal including tax, tip, and a discount
*/

#include <stdio.h>

int main()
{
	//program constants
	float sales_tax = 0.04172;
	float tip_rate = 0.15;
	float discount = 0.10;
	
	//program variables
	float sub_total;			//the cost of the meal
	float discount_price;		//discounted price
	float tax;					//the amount of tax you need to pay
	float tip_w_tax;			//the amount of tip you will pay
	float tip_wo_tax;			//the amount of tip you will pay
	float final_cost_w_tax;		//cost including tax and tip
	float final_cost_wo_tax;	//cost including tax and tip

	//get cost of meal
	printf("Enter the cost of the meal: ");
	scanf("%f", &sub_total);

	//compute the discount price
	discount_price = sub_total - (sub_total * discount);	/* You can remove a lot of
								 * parentheses here. You can keep these two and be OK as they make it easier to
                 * read
								 */

	//compute the tax
	tax = discount_price * sales_tax;			/* You don't need parantheses here */

	//compute the tip
	tip_wo_tax = discount_price * tip_rate;			/* You don't need parantheses here */
	tip_w_tax = (discount_price + tax) * tip_rate;		/* You can remove most parantheses
								 * here. You only need the two
								 */
	//if you're feeling generous or lazy, you tip on the tax too
	

	//compute the final cost
	final_cost_w_tax = discount_price + tax + tip_w_tax;	/* You don't need parantheses here */
	final_cost_wo_tax = discount_price + tax + tip_wo_tax;  /*				   */
	
	//output results
	printf("---------------------------------------\n");
	printf("Sub total:\t\t\t$%4.2f\n", sub_total);
	printf("Price after %.0f%% discount:\t$%4.2f\n", discount*100, 
		discount_price);
	printf("Tax:\t\t\t\t$%4.2f\n", tax);
	printf("Tip(%.0f%%) w/ tax:\t\t$%4.2f\n", tip_rate*100, tip_w_tax);
	printf("Tip(%.0f%%) w/o tax:\t\t$%4.2f\n", tip_rate*100, tip_wo_tax);
	printf("Total cost big tip:\t\t$%4.2f\n", final_cost_w_tax);
	printf("Total cost reg tip:\t\t$%4.2f\n", final_cost_wo_tax);
		
	return 0;
}
