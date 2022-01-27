#ifndef _MORTGAGE_PAYMENT_CACLULATOR_H_
#define _MORTGAGE_PAYMENT_CACLULATOR_H_

using money = double;
namespace MortgagePaymentCalculator
{	
	money calculate_monthly_payment(money original_mortgage_balanc, int number_of_months, double monthly_interest_rate);
};

#endif
