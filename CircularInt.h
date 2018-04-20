#include <iostream>
#include "CNode.h"

using namespace std;

class CircularInt
{
    private:
    int start;
    int end;

    public:
    CNode* head; 
    CNode* current;

    void insert(int x);
    CircularInt(int start_input,int end_input);
    CircularInt& operator++();
    CircularInt& operator++(int);
    CircularInt& operator--(int);
    CircularInt& operator+=(int value); 
    CircularInt& operator-=(int value);
    CircularInt& operator*=(int value); 
     CircularInt& operator/=(int value);
    const CircularInt& operator= (int value);
    bool operator==(const CircularInt other)const;
    bool operator!=(const CircularInt other)const;
    int& operator*();
    operator bool() ;
        
        ~CircularInt();

};
 
 ostream &operator<<( ostream &output, const CircularInt& ci);
