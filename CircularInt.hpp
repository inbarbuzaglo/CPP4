#pragma once
#include <iostream>  
using namespace std;

class CircularInt {
private:
	int min1;
	int max1;
	int currentval;
	int range;
	int CurrentValue(int value);

public:
	CircularInt(int min1, int high);
	CircularInt();
	CircularInt(const CircularInt& other);

	CircularInt& operator=(int c);
	CircularInt& operator+=(int const &value);
	CircularInt& operator+=(CircularInt const &value);
    CircularInt& operator++();
	CircularInt operator++(int);
    CircularInt& operator+(int const &value);
	CircularInt& operator+(CircularInt const &value);
	CircularInt& operator-=(int const &value);
	CircularInt& operator-=(CircularInt const &value);
	CircularInt& operator--();
	CircularInt operator--(int);
	CircularInt& operator-();
	CircularInt& operator-(int const &value);
	CircularInt& operator-(CircularInt const &value);
	CircularInt& operator*(int const &value);
	CircularInt& operator*(CircularInt const &value);
    CircularInt& operator*=(int const &value);
	CircularInt& operator*=(CircularInt const &value);
	CircularInt& operator/(int const &value);
	CircularInt& operator/(CircularInt const &value);
    CircularInt& operator/=(int const &value);
	CircularInt& operator/=(CircularInt const &value);
	CircularInt& operator%(int const &value);
	CircularInt& operator%(CircularInt const &value);
	CircularInt& operator%=(int const &value);
	CircularInt& operator%=(CircularInt const &value);

	bool operator ==(CircularInt const& c);
	bool operator !=(CircularInt const& c);
	bool operator ==(int const& c);
	bool operator !=(int const& c);
	bool operator >(CircularInt const& c);
	bool operator <(CircularInt const& c);
	bool operator >(int const& c);
	bool operator <(int const& c);
	bool operator >=(CircularInt const& c);
	bool operator <=(CircularInt const& c);
	bool operator >=(int const& c);
	bool operator <=(int const& c);

    friend bool operator==(int val, const CircularInt& c);
	friend bool operator!=(int val, const CircularInt& c);
    friend bool operator>(int val, const CircularInt& c);
	friend bool operator<(int val, const CircularInt& c);
	friend bool operator>=(int val, const CircularInt& c);
	friend bool operator<=(int val, const CircularInt& c);

    friend CircularInt operator-(int val, const CircularInt& c);
	friend CircularInt operator+(int val, const CircularInt& c);
    friend CircularInt operator/(int val, const CircularInt& c);
    friend ostream& operator<<(ostream& output, const CircularInt& o);
	friend istream& operator>>(istream & input, CircularInt &o);
};
