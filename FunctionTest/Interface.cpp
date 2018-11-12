#include "Interface.h"

namespace
{
	unsigned long long _in_factorial(const unsigned long long n)
	{
		return n == 1 ? 1 : _in_factorial(n - 1) * n;
	}
}

unsigned long long test_method::factorial(const unsigned int n)
{
	return n <= 1 ? 1 : _in_factorial(n);
}

void test_method::to_upper(char& c)
{
	c -= 32;
}

void test_method::to_upper(char* pc)
{
	(*pc) -= 32;
}

int haha()
{
	int a = 0;
	return a;
}

double test_method::find_solution(double (*f)(double), double left, double right, double delta)
{
	double middle;
	do
	{
		middle = (left - right) / 2;
		if (f(left) * f(middle) < 0)
		{
			right = middle;
		}
		else
		{
			left = middle;
		}
	}
	while ((right - left) > delta);
	return middle;
}

double test_method::find_solution_of_rank3(const double a3, const double a2, const double a1, const double a0,
                                           double left, double right,
                                           const double delta)
{
	const auto f = [a0, a1, a2, a3](const double x)-> double { return a3 * x * x * x + a2 * x * x + a1 * x + a0; };
	double middle;
	do
	{
		middle = (left - right) / 2;
		if (f(left) * f(middle) < 0)
		{
			right = middle;
		}
		else
		{
			left = middle;
		}
	}
	while ((right - left) > delta);
	return middle;
}