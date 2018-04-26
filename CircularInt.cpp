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
       CNode num(((this->current)->data+1)%(end));
        return *this; 
    }


    CircularInt& CircularInt::operator++(int value)       // postfix increment
   {
    CNode num((value+(this->current)->data+1)%(end));
    
    return *this;
     
  } 


     CircularInt& CircularInt::operator+(int value) 
    {
    CNode num((value+(this->current)->data)%(end));
    
    return *this;
    }

   CircularInt& CircularInt::operator+=(int value) {
    CNode num((value+(this->current)->data)%(end));
    
    return *this;
    }

    CircularInt& CircularInt::operator+(const CircularInt other)       // postfix increment
   {
    CNode num(((this->current)->data+(other.current)->data)%(end));
    
    return *this;
     
  } 

    CircularInt& CircularInt::operator*=(int value) 
   {
   CNode num((value*(this->current)->data)%(end));
 
    return *this;

    }

 CircularInt& CircularInt::operator/(int value) 
   {
    if(((double)(this->current->data)/value)<(double)start)
    {
    cout<<"There is no number x in {1,12}"<<endl;

    }
  
    this->current->data=(((this->current->data)/(value))%(end));

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

    const CircularInt& CircularInt::operator=(int value)
    {
        return *this;
    }

   CircularInt::operator bool() 
    {
    return (this->current)!=0;
    }
    



   CircularInt& CircularInt::operator-()
    {
    this->current->data=(this->current->data)-(end);

    while(this->current->data < start)
    {
        if(this->current->data < 0)
        {
            this->current->data=  ((this->current->data)-((this->current->data)*2))%(end);
        }
        else
        {
            this->current->data=(this->current->data)%(end);
        }
    }
    return *this;
    }

    CircularInt& CircularInt::operator--(int data)
    {
        return *this;
    }

  
   CircularInt& CircularInt::operator-=(int value) {

   {
    while ((this->current->data - value) < start)
    {
        this->current->data = (this->current->data - value) % start;
    }
    this->current->data = this->current->data - value;
    if (this->current->data < start) // check if number is viable.
    {
        this->current->data = start;
    }
    return *this;
   }
    }

    ostream &operator<<(ostream &output, const CircularInt& ci)
    {      
        return output<<(ci.current)->data;
    }

    CircularInt::~CircularInt()
    {
       cout<<"";
    }
