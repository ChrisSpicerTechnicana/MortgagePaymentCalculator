#include "pch.h"
#include "..\Calculator\Calculator.h"
TEST(MonthlyPaymentCalculator, FabozziExample) {
	// ARRANGE:
	const int number_of_months = 360;
	const money original_mortgage_balance = 100'000;
	constexpr double monthly_interest_rate = 0.095 / 12.f;

	// ACT:
	const auto monthly_payment = MortgagePaymentCalculator::calculate_monthly_payment(original_mortgage_balance, number_of_months, monthly_interest_rate);

	// ASSERT:
	ASSERT_NEAR(monthly_payment, 840.85, 0.01);
}