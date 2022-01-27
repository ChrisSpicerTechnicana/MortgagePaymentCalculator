#ifndef _MORTGAGE_PAYMENT_CACLULATOR_H_
#define _MORTGAGE_PAYMENT_CACLULATOR_H_

using money = double;
namespace MortgagePaymentCalculator
{	
	/// <summary>
	/// Calculates the amount that the mortgagee will have to pay each month.
	/// </summary>
	/// <param name="original_mortgage_balance">The initial amount borrowed.</param>
	/// <param name="number_of_months">Number of months over which the borrowed amount is to be repaid.</param>
	/// <param name="monthly_interest_rate">The simple interest rate, on a monthly basis.</param>
	/// <returns>The monthly payment amount.</returns>
	money calculate_monthly_payment(money original_mortgage_balance, int number_of_months, double monthly_interest_rate);


	/// <summary>
	/// Calculates the amount of interest to be paid on the mortgage in the next monthly payment.
	/// </summary>
	/// <param name="mortgage_balance">Current balance of the mortgage.</param>
	/// <param name="monthly_interest_rate">Simple monthly interest rate.</param>
	/// <returns>The interest amount.</returns>
	money calculate_interest_amount(money mortgage_balance, double monthly_interest_rate);
};

#endif
