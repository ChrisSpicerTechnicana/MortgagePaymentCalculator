// MortgagePaymentCalculator.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "Calculator.h"
#include <cmath>

money MortgagePaymentCalculator::calculate_monthly_payment(money original_mortgage_balance, int number_of_months, double monthly_interest_rate)
{
	const double power_value = std::pow(1 + monthly_interest_rate, number_of_months); // Used twice, so we'll calculate and use again.
	const money monthly_payment = original_mortgage_balance * (monthly_interest_rate * power_value) / (power_value - 1);

	return monthly_payment;
}

money MortgagePaymentCalculator::calculate_interest_amount(money mortgage_balance, double monthly_interest_rate)
{
	return mortgage_balance * monthly_interest_rate;
}