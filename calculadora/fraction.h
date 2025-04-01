#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int den);
    Fraction add(const Fraction &other);
    int getNumerator() const;
    int getDenominator() const;
};

#endif // FRACTION_H