#ifndef _MATH_LIBRARY_
#define _MATH_LIBRARY_


#include <cmath>
#include <string>

namespace MathLib
{
	class Maths
	{
	public:
		static long double e();
		static long double pi();

		static double sin(double);
		static double cos(double);
		static double ctg(double);
		static double tg(double);

		static double squareroot(double);
		static double cubicroot(double); 

		static int DecimalToBinary (int);
		static int DecimalToOctal (int);
		static std::string DecimalToHexadecimal (int);

		static long long unsigned int factorial(int);

		static double logarithm(double, double);

		static bool IsPerfect ( unsigned int);
		static bool pyutagor(unsigned int, unsigned int, unsigned int);
	};
}

#endif
