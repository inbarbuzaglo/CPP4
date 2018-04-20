#include <iostream>
#include "CircularInt.h"
#include <string>

using namespace std;

    void CircularInt::insert(int x)
    {
        
      cout<< "insert";
    }


    CircularInt::CircularInt(int start_input,int end_input)
    {
        CNode first(start_input);
        this->current=NULL; //SHOULD BE FIRST
        this->start=start_input;
        this->end=end_input;
        this->head=NULL;
        for(int i=start;i<end+1;i++)
        {


        }

    }
    CircularInt& CircularInt::operator++() // prefix increment
    {       
        this->current =(this->current)->next; 
        return *this;
    }


CircularInt& CircularInt::operator++(int value)       // postfix increment
    { 

    }

   CircularInt& CircularInt::operator--(int)
    {
        this->current =(this->current)->prev; 
        return *this;
    }

    bool CircularInt::operator==(const CircularInt other) const
    {
    return (this->current->data)==(other->current)->data;
    
    }

    bool CircularInt::operator!=(const CircularInt other) const
    {   
        return (this->current)->data!=(other->current)->data;
    }

    int& CircularInt::operator*() 
    { 
    return (this->current)->data;
    }

   CircularInt::operator bool() 
    {
    return (this->current)!=0;
    }

    CircularInt& CircularInt::operator+=(int value) {
    (this->current)->data += value;
    return *this;
    }

   CircularInt& CircularInt::operator-=(int value) {
    (this->current)->data -= value;
    return *this;
    }

   CircularInt& CircularInt::operator*=(int value) 
   {
    (this->current)->data *= value;
    return *this;

    }

 CircularInt& CircularInt::operator/=(int value) 
   {
    (this->current)->data /= value;
    return *this;

    }
    const CircularInt& CircularInt::operator= (int value)
    {
        return *this;
    }

    ostream &operator<<( ostream &output, const CircularInt& ci)
    {
        CNode *p; 
        return output;
    }

    CircularInt::~CircularInt()
    {
       cout<<"";
    }


