#include <iostream>
#include "MathLib.hpp"
using namespace std;

int main()
{
        cout << "Get  cos(0) = " << MathLib::Maths::cos(0) << "  : Expected 1\n";
        cout << "Get  ctg(45) = " << MathLib::Maths::ctg(45) << "  : Expected 1\n";
        cout << "Get  tg(45) = " << MathLib::Maths::tg(45) << "  : Expected 1\n";
        cout << "Get  sin(90) = " << MathLib::Maths::sin(90) << "  : Expected 1\n";
        cout << "Get  3! = " << MathLib::Maths::factorial(3) << "  : Expected 6\n";
        cout << "Get sqrt(9) = " << MathLib::Maths::squareroot(9) << "  : Expected 3\n";
        cout << "Get crt(27) = " << MathLib::Maths::cubicroot(27) << "  : Expected 3\n";
        cout << "Get bin(20) = " << MathLib::Maths::DecimalToBinary(20) << "  : Expected 10100\n";
        cout << "Get oct(20) = " << MathLib::Maths::DecimalToOctal(20) << "  : Expected 24\n";
        cout << "Get hex(20) = " << MathLib::Maths::DecimalToHexadecimal(20) << "  : Expected 14\n";
        cout << "Get Is 6 perfect number? -> " << MathLib::Maths::IsPerfect(6) << "  : Expected yes\n";
        cout << "Get Are 3 4 5 pyutagorian? -> " << MathLib::Maths::pyutagor(3,4,5) << "  : Expected yes\n";
        cout << "Get log(125,5) = " << MathLib::Maths::logarithm(125,5) << "  : Expected 3\n";
        cout << "Get e = " << MathLib::Maths::e() << "  : Expected aproximately 2.7\n";
        cout << "Get pi = " << MathLib::Maths::pi() << "  : Expected aproximately 3.14\n";
}
