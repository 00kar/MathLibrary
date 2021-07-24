#include "MathLib.hpp"


namespace MathLib
{
	long long unsigned int Maths::factorial(int number)
	{
		long long unsigned int answer = 1;
		if(number > 1) { answer = factorial(number - 1) * number; }
		else if(number == 1) { return answer; }
		else if(number == 0) { return 1; }
		return answer;
	}


	long double Maths::e()
	{
		int precision = 10;
		long double result = 0;
		for(int i = 0; i < precision; ++i)
			result += 1/double(factorial(i));
		return result;
	} 


	long double Maths::pi()
	{
		long double result = 0;
		int precision = 1000000;
		for(int i = 1; i < precision; ++i)
			result += double( pow(-1, i + 1) ) / (2*i - 1);
		return 4*result;
	}


	double Maths::sin(double degree)
	{
		int prs = 10;
		double answer=0;
		int temp;
		if(int(degree) % 180 == 0) { return 0; }
		else { degree *= M_PI / 180; }
		while(degree >= 2 * M_PI) { degree -= 2 * M_PI; }
		while(degree <= (-2) * M_PI) { degree += 2 * M_PI; }
		for(int i = 0; i < prs ; ++i)
		{
			temp = 2*i+1;
			answer += pow(-1, i) * pow(degree, temp) / factorial(temp);
		}
		return answer;
	}


	double Maths::cos(double degree)
	{
		int prs = 10;
		double answer=0;
		int temp;
		if(int(degree) % 180 != 0 && int(degree) % 90 == 0) { return 0; }
		else { degree *= M_PI / 180; }
		while(degree >= 2 * M_PI) { degree -= 2 * M_PI; }
		while(degree <= (-2) * M_PI) { degree += 2 * M_PI; }
		for(int i = 0; i < prs ; ++i)
		{
			temp = 2*i;
			answer += pow(-1, i) * pow(degree, temp) / factorial(temp);
		}
		return answer;
	}


	double Maths::ctg(double x) {
		return cos(x)/sin(x);
	}



	double Maths::tg(double x) {
		return sin(x)/cos(x);
	}


	double Maths::squareroot(double x) {   
		int n = 0;

		// saving numbers' value in temp
		double temp = x;
	
		// when number is smaller than 1, make it integer multipling by 10	
		while( (int)temp  != (double)temp ) {
		    	temp *= 10;
    		    	n++;
    		}

		// doing binary search
		double xhigh = temp;
    		double xlow = 0;
        	double guess = temp/2;
    		while (guess * guess != temp) {
       			if (guess * guess > temp)
       		   		xhigh = guess;
       		        else
				xlow = guess;
        	        double new_guess = (xhigh + xlow) /2;
		   	if (new_guess == guess)
       		   	    	break; // not getting closer
		   	guess = new_guess;
		}
		
		// converting back to it's real appearance
	     	if ( x < 1)
	        	for ( int i = 0; i < (n/2); i++)
	                	guess /= 10;
		return guess;
	}
	

	double Maths::cubicroot(double x) {   
		int n = 0;

		// saving numbers' value in temp
		double temp = x;
	
		// when number is smaller than 1, make it integer multipling by 10	
		while( (int)temp  != (double)temp ) {
		    	temp *= 10;
		      	n++;
		}

		// doing binary search    
	    	double xhigh = temp;
	        double xlow = 0;
	    	double guess = temp/2;
	    	while (guess * guess * guess != temp) {
	 	      	if (guess * guess * guess > temp)
	       			xhigh = guess;
	       		else
	       		        xlow = guess;
	   		double new_guess = (xhigh + xlow) /2;
	             	if (new_guess == guess)
				break; // not getting closer
			guess = new_guess;
		}

		// converting back to it's real appearance
		if ( x < 1)
	        	for ( int i = 0; i < (n/3); i++)
	                	guess /= 10;
		return guess;
	}


	int Maths::DecimalToBinary ( int number ) {	
		int BinaryNumber = 0, i = 1;
	
		// Converting to binary
		while ( number > 0 ) {
			int remainder = number % 2;
			BinaryNumber += remainder * i;
			number /= 2;
			i *= 10;
	     	}
   	
		return BinaryNumber;
	}


	int Maths::DecimalToOctal ( int number ) {	
		int OctalNumber = 0, i = 1;
	
		// Converting to octal
		while ( number > 0 ) {
			int remainder = number % 8;
			OctalNumber += remainder * i;
			number /= 8;
			i *= 10;
	     	}	
		return OctalNumber;
	}


	std::string Maths::DecimalToHexadecimal ( int number ) {
		std::string HexadecimalNumber = "";
		
		// Constructing hexadecimal number by checking remainder value	
		while ( number > 0 ) {
			int remainder = number % 16;
			if ( remainder < 10 )
				HexadecimalNumber = char(remainder + 48) + HexadecimalNumber;
			else
				HexadecimalNumber = char(remainder + 55) + HexadecimalNumber;
			number /= 16;
		}

		return HexadecimalNumber;
	}


	double Maths::logarithm(double a, double base) {
		int precision = 7;
		double result = 0;
		for(int i = 0; i < precision; ++i) {
			int sum = 0;
			while(a >= base) {
				a /= base;
				sum++;
			}
			result += pow(10,(-1)*i) * sum;
			a = pow(a,10);
		}
		return result;
	}


	bool Maths::IsPerfect ( unsigned int num ) {
		unsigned int sum = 1;
		for ( unsigned int i = 2; i*i <= num; ++i ) {
			if ( num % i == 0 ) {
				if ( i*i != num )
					sum += i + num / i;
				else
					sum += i;
			}	
		}
		if ( sum == num && num != 1 )
			return true;
		return false;
	}


	bool Maths::pyutagor(unsigned int a, unsigned int b, unsigned int c) {
		if( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b +c*c == a*a) )
			return true;
		return false;		
	}

}
