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
    CircularInt& operator++();
    CircularInt& operator++(int value);
    CircularInt& operator+(int value);
    CircularInt& operator+(const CircularInt other);
    CircularInt& operator+=(int value); 
    CircularInt& operator*=(int value); 
     CircularInt& operator/(int value);
    bool operator==(const CircularInt other)const;
    bool operator!=(const CircularInt other)const;
    const CircularInt& operator=(int value);
     operator bool();
    CircularInt& operator-(); 
    CircularInt& operator--(value);
    CircularInt& operator-=(int value);
 
  
    
        
        ~CircularInt();

};

ostream &operator<<(ostream &output, const CircularInt& ci);
 
 
