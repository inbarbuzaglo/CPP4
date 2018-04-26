#include <iostream>
#include "CNode.hpp"

using namespace std;

class CircularInt
{
    private:
    int start;
    int end;

    public:
    CNode* current;

    void insert(int x);
    CircularInt(int start_input,int end_input);
    CircularInt& operator++(int);//check
    CircularInt& operator+();//check
    CircularInt& operator+=(int value); //check
    CircularInt& operator*=(int value); //check
    CircularInt& operator/(int value);//needs to be completed+add /=
    operator bool();//check
    CircularInt& operator-();//check //needs to be added -(const circularint other)
    CircularInt& operator--(int);//check
    CircularInt& operator-=(int value);
    CircularInt& operator-(int value); //number-object   
    CircularInt& operator/(const CircularInt other);//needs to be completed
    CircularInt& operator*(const CircularInt other); //check
    CircularInt& operator=(int value);
    bool operator==(const CircularInt other)const;//check
    bool operator!=(const CircularInt other)const;//check
    bool operator>(const CircularInt other);
    bool operator<(const CircularInt other);
    bool operator>=(const CircularInt other);
    bool operator<=(const CircularInt other);
    CircularInt& operator+(const CircularInt other);//check

  
    
        
        ~CircularInt();

};

ostream &operator<<(ostream &output, const CircularInt& ci);
istream &operator>>(istream &input, const CircularInt& ci);
 
