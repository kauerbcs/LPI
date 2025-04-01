#include "fraction.h"

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) { }

Fraction Fraction::add(const Fraction &other) {
    int commonDenom = denominator * other.denominator;
    int num = numerator * other.denominator + other.numerator * denominator;
    return Fraction(num, commonDenom);
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}