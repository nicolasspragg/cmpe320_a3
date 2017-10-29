#pragma once
#ifdef FRACDLL_EXPORTS
#define FRACDLL __declspec(dllexport)
#else
#define FRACDLL __declspec(dllimport)
#endif
#include <iostream>
#include <vector>
#include <regex>
using namespace std;

FRACDLL int* addFrac(int a0, int a1, int a2, int a3);
FRACDLL int* subFrac(int a0, int a1, int a2, int a3);
FRACDLL int* multFrac(int a0, int a1, int a2, int a3);
FRACDLL int* divFrac(int a0, int a1, int a2, int a3);


class FractionException {
public:
	FractionException(const string&);
	string& what();
private:
	string message;
};

class Fraction {
public:
	// Constructs a fraction with numerator 0 and denominator 1.
	Fraction();

	// Constructs a fraction with numerator t and denominator 1.
	Fraction(int t);

	// Constructs a fraction with given numerator and denominator.
	Fraction(int t, int b);

	// Returns the numerator.
	int numerator() const;

	// Returns the denominator.
	int denominator() const;

	// Updates a fraction by adding in another fraction value.
	Fraction& operator+=(const Fraction& right);

	// Increment fraction by 1.
	Fraction& operator++(); 			// Preincrement form
	Fraction operator++(int unused); // Postincrement form

									 // Compare one fraction value to another.
									 // Result is negative if less than right, zero if equal, and
									 // positive if greater than right.
	int compare(const Fraction& right) const;

private:
	// Place the fraction in lowest common denominator form.
	void normalize();

	// Compute the greatest common denominator of two integer values.
	int gcd(int n, int m);

	int top;			// numerator
	int bottom;		// denominator
	int* answerToOutput;
};

// Non-member overloaded arithmetic operators
Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);
Fraction operator*(const Fraction& left, const Fraction& right);
Fraction operator/(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& value);

// Non-member overloaded boolean operators
bool operator<(const Fraction& left, const Fraction& right);
bool operator<=(const Fraction& left, const Fraction& right);
bool operator==(const Fraction& left, const Fraction& right);
bool operator!=(const Fraction& left, const Fraction& right);
bool operator>=(const Fraction& left, const Fraction& right);
bool operator>(const Fraction& left, const Fraction& right);

// Non-member stream operators
ostream& operator<<(ostream& out, const Fraction& value);
istream& operator>>(istream& in, Fraction& retFrac);