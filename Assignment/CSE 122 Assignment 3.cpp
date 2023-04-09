
#include <iostream>
#include <cassert>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int _numerator, int _denominator) {
        assert((_numerator == (int)_numerator) && (_denominator == (int)_denominator));
        assert(_denominator != 0);
        numerator = _numerator;
        denominator = _denominator;
    }

    void reduce() {
        int gcd = getGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }

    friend Fraction operator+(const Fraction& frac1, const Fraction& frac2) {
        int num = (frac1.numerator * frac2.denominator) + (frac2.numerator * frac1.denominator);
        int den = frac1.denominator * frac2.denominator;
        Fraction result(num, den);
        result.reduce();
        return result;
    }

    int getGCD(int a, int b) {
        return b == 0 ? a : getGCD(b, a % b);
    }
};

int main() {
    Fraction nm1(2, 5);
    Fraction nm2(1, 7);
    Fraction nm3 = nm1 + nm2;
    cout << nm1 << " + " << nm2 << " = " << nm3 << endl;
    return 0;
}
