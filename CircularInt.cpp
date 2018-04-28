#include "CircularInt.hpp"
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int CircularInt::CurrentValue(int value)
{
    int current=((value - min1) % (range) + range) % (range) + min1;
	return current;
}
CircularInt::CircularInt(int low, int high)
{
	max1 = max(high, low);
    min1 = min(low, high);
    currentval = min1;
	range = abs(max1 - min1) + 1;
   
}
CircularInt::CircularInt(const CircularInt & other)
{
    this->max1 = other.max1;
	this->min1 = other.min1;
    this->range = other.range;
	this->currentval = other.currentval;
	
}

CircularInt & CircularInt::operator=(int c)
{
	this->currentval = CurrentValue(c);
	return *this;
}

CircularInt & CircularInt::operator+=(int const & value)
{
	int res = currentval + value;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt & CircularInt::operator+=(CircularInt const & value)
{
	int res = currentval + value.currentval;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt & CircularInt::operator-=(int const & value)
{
	int res = currentval - value;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt & CircularInt::operator-=(CircularInt const & value)
{
	int res = currentval - value.currentval;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt & CircularInt::operator++()
{
	int res = ++currentval;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt CircularInt::operator++(int)
{
	CircularInt temp(*this);
	++(*this);
	return temp;
}

CircularInt & CircularInt::operator--()
{
	int res = currentval-1;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt CircularInt::operator--(int)
{
	CircularInt temp(*this);
	--(*this);
	return temp;
}

CircularInt & CircularInt::operator*=(int const & value) 
{
	currentval = CurrentValue(currentval * value);
	return *this;
}

CircularInt & CircularInt::operator*=(CircularInt const & value)
{
	currentval = CurrentValue(currentval * value.currentval);
	return *this;
}

CircularInt & CircularInt::operator/=(int const & value)
{
	if (currentval % value != 0)
	{
		throw string(string("There is no numcer x in { ") + to_string(min1) + string(",") + to_string(max1) + " } such that x * " + to_string(value) + " = " + to_string(currentval));
	}
	int res = currentval / value;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt & CircularInt::operator/=(CircularInt const & value)
{
	if (currentval % value.currentval != 0)
	{
		throw string(string("There is no numcer x in { ") + to_string(min1) + string(",") + to_string(max1) + " } such that x * " + to_string(value.currentval) + " = " + to_string(currentval));
	}
	int res = currentval / value.currentval;
	currentval = CurrentValue(res);
	return *this;
}

CircularInt & CircularInt::operator%=(int const & value)
{
	currentval = CurrentValue(currentval % value);
	return *this;
}

CircularInt & CircularInt::operator%=(CircularInt const & value)
{
	currentval = CurrentValue(currentval % value.currentval);
	return *this;
}

bool CircularInt::operator==(CircularInt const & c)
{
	return (this->max1 == c.max1) && (this->min1 == c.min1) && (this->currentval == c.currentval);
}

bool CircularInt::operator!=(CircularInt const & c)
{
	return this->min1 != c.min1 || this->max1 != c.max1 || this->currentval != c.currentval;
}

bool CircularInt::operator==(int const & c)
{
	return (this->currentval) == c;
}

bool CircularInt::operator!=(int const & c)
{
	return (this->currentval) != c;
}

bool CircularInt::operator>(CircularInt const & c)
{
	return this->currentval < c.currentval;
}

bool CircularInt::operator<(CircularInt const & c)
{
	return this->currentval > c.currentval;
}

bool CircularInt::operator>(int const & c)
{
	return this->currentval > c;
}

bool CircularInt::operator<(int const & c)
{
	return this->currentval < c;
}

bool CircularInt::operator>=(CircularInt const & c)
{
	return this->currentval >= c.currentval;
}

bool CircularInt::operator<=(CircularInt const & c)
{
	return this->currentval <= c.currentval;
}

bool CircularInt::operator>=(int const & c)
{
	return this->currentval >= c;
}

bool CircularInt::operator<=(int const & c)
{
	return this->currentval <= c;
}
bool operator==(int val, const CircularInt & c)
{
	return val == c.currentval;
}

bool operator!=(int val, const CircularInt & c)
{
	return val != c.currentval;
}

bool operator>(int val, const CircularInt & c)
{
	return val > c.currentval;
}

bool operator<(int val, const CircularInt & c)
{
	return val < c.currentval;
}

bool operator>=(int val, const CircularInt & c)
{
	return val >= c.currentval;
}

bool operator<=(int val, const CircularInt & c)
{
	return val <= c.currentval;
}

CircularInt operator-(int val, const CircularInt & c)
{
	CircularInt res(c);
	int result = val - c.currentval;
	res.currentval = res.CurrentValue(result);
	return res;
}

CircularInt operator+(int val, const CircularInt & c)
{
	CircularInt res(c);
	int result = c.currentval + val;
	res.currentval = res.CurrentValue(result);
	return res;
}

CircularInt operator/(int val, const CircularInt & c)
{
	CircularInt res(c);
	int result = val / c.currentval;
	res.currentval = res.CurrentValue(result);
	return res;
}
CircularInt & CircularInt::operator+(int const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval + value;
	temp->currentval = CurrentValue(res);
	return *temp;
}

CircularInt & CircularInt::operator+(CircularInt const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval + value.currentval;
	temp->currentval = CurrentValue(res);
	return *temp;
}

CircularInt & CircularInt::operator-()
{
	CircularInt* res = new CircularInt(*this);
	int result = currentval * -1;
	res->currentval = CurrentValue(result);
	return *res;
}

CircularInt & CircularInt::operator-(int const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval - value;
	temp->currentval = CurrentValue(res);
	return *temp;
}

CircularInt & CircularInt::operator-(CircularInt const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval - value.currentval;
	temp->currentval = CurrentValue(res);
	return *temp;
}
CircularInt & CircularInt::operator*(int const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval * value;
	temp->currentval = CurrentValue(res);
	return *temp;
}

CircularInt & CircularInt::operator*(CircularInt const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval * value.currentval;
	temp->currentval = CurrentValue(res);
	return *temp;
}
CircularInt & CircularInt::operator/(int const & value)
{
	CircularInt* temp = new CircularInt(*this);
	if (currentval % value != 0)
	{
		throw string(string("There is no number x in { ") + to_string(min1) + string(",") + to_string(max1) + " } such that x * " + to_string(value) + " = " + to_string(currentval));
	}
	int res = currentval / value;
	temp->currentval = CurrentValue(res);
	return *temp;
}

CircularInt & CircularInt::operator/(CircularInt const & value)
{
	if (currentval % value.currentval != 0)
	{
		throw string(string("There is no number x in { ") + to_string(min1) + string(",") + to_string(max1) + " } such that x * " + to_string(value.currentval) + " = " + to_string(currentval));
	}
	CircularInt* temp = new CircularInt(*this);
	int res = currentval / value.currentval;
	temp->currentval = CurrentValue(res);
	return *temp;
}
CircularInt & CircularInt::operator%(int const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval % value;
	temp->currentval = CurrentValue(res);
	return *temp;
}
CircularInt & CircularInt::operator%(CircularInt const & value)
{
	CircularInt* temp = new CircularInt(*this);
	int res = currentval % value.currentval;
	temp->currentval = CurrentValue(res);
	return *temp;
}
ostream& operator<<(ostream& output, const CircularInt& o)
{
	output << o.currentval;
	return output;
}
istream& operator>>(istream & input, CircularInt &o)
{
	int n;
	input >> n;
	o.currentval = o.CurrentValue(n);
	return input;
}
