#include <iostream>
#include "CircularInt.hpp"

#include <string>

using namespace std;

    CNode::CNode(int data)
    {
    this->data=data;
    }

    ostream& operator<<(ostream& os, const CNode& n)
    {
        return os;
    }

    void CircularInt::insert(int x)
    {      
      cout<< "insert";
    }

    CircularInt::CircularInt(int start_input,int end_input)
    {
        CNode first(start_input);
        this->current=&first; 
        this->start=start_input;
        this->end=end_input;
        this->head=&first;
        this->tail=&first;
        CNode temp=first;
        for(int i=start_input+1;i<end_input+1;i++)
        {
            CNode n(i);
            n.prev=&temp;
            temp.next=&n;
            temp=n;
        }
     
    }

    CircularInt& CircularInt::operator++() // prefix increment
    {       
        this->current=(this->current)->next;
        return *this; 

    }

    CircularInt& CircularInt::operator++(int)       // postfix increment
    { 
        return *this;
    }

   CircularInt& CircularInt::operator--(int)
    {
       // this->current =(this->current)->prev; 
        return *this;
    }

    bool CircularInt::operator==(const CircularInt other) const
    {
    return (this->current->data)==(other.current)->data;
    
    }

    bool CircularInt::operator!=(const CircularInt other) const
    {   
        return (this->current)->data!=(other.current)->data;
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

    ostream &operator<<(ostream &output, const CircularInt& ci)
    {      
        return output<<(ci.current)->data;
    }

    CircularInt::~CircularInt()
    {
       cout<<"";
    }

