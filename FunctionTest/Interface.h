#pragma once
namespace test_method {}

namespace test_method
{
/**
 * calc n!
 */
	unsigned long long factorial(unsigned int n);

/**
 * give a charactar in,change it to upper
 */
	void to_upper(char& c);

/**
 * give a charactar in,change it to upper
 */
	void to_upper(char* pc);

/**
 * find the solution of the a3x^3+a2x^2+a1x+a0=0
 * from range:[a,b] ,\n and ensure the exact answer in [answer-delta,answer+delta]
 */
	double find_solution_of_rank3(double a3, double a2, double a1, double a0, double left, double right, double delta);

/**
 * find the solution of the f(x)=0
 * from range:[a,b],\n and ensure the exact answer in [answer-delta,answer+delta]
 * Assert the function is continuous.
 */
	double find_solution(double (*f)(double), double left, double right, double delta);
}