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

    CircularInt::CircularInt( int start_input,  int end_input)
     {
        CNode first(start_input);
        this->current=&first; 
        this->start=start_input;
        this->end=end_input;
        this->head=&first;
        this->tail=&first;
        CNode temp=first;
        for(int i=start_input;i<end_input+1;i++)
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

    CircularInt& CircularInt::operator++(int value)       // postfix increment
   {
    CNode num((value+(this->current)->data+1)%(end));
    CNode temp=*this->current;
    num.prev=&temp;
    temp.next=&num;
    num=*this->current;
    
    return *this;
     
  } 

   CircularInt& CircularInt::operator--(int data)
    {
     (this->current)->data--;
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
    
    CircularInt& CircularInt::operator+(int value) {
    CNode num((value+(this->current)->data)%(end));
    CNode temp=*this->current;
    num.prev=&temp;
    temp.next=&num;
    num=*this->current;
    
    return *this;
    }

    CircularInt& CircularInt::operator+=(int value) {
    CNode num((value+(this->current)->data)%(end));
    CNode temp=*this->current;
    num.prev=&temp;
    temp.next=&num;
    num=*this->current;
    
    return *this;
    }
   CircularInt& CircularInt::operator-=(int value) {
    CNode num((value-(this->current)->data)%(end));
    CNode temp=*this->current;
    num.prev=&temp;
    temp.next=&num;
    num=*this->current;
    
    return *this;
    }

   CircularInt& CircularInt::operator*=(int value) 
   {
   CNode num((value*(this->current)->data)%(end));
    CNode temp=*this->current;
    num.prev=&temp;
    temp.next=&num;
    num=*this->current;
    
    return *this;

    }

 CircularInt& CircularInt::operator/(int value) 
   {
    CNode num((((this->current)->data)/(value))%(end));
    CNode temp=*this->current;
    num.prev=&temp;
    temp.next=&num;
    num=*this->current;
     return *this;

    }
    const CircularInt& CircularInt::operator=(int data)
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
