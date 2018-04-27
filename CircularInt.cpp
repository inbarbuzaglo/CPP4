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

    CircularInt& CircularInt::operator++(int)       // +1 check
   {
    if(this->current->data % end == 0) // check if its on 12 , if it does then 12+1 = 1
    {
        this->current->data=start;
    }
    else
    {
        this->current->data= this->current->data+1; 
    }
    return *this;
     
  } 

     CircularInt& CircularInt::operator+() //check
    {
    this->current->data += (this->current->data)%end;
    return *this;
    }

   CircularInt& CircularInt::operator+=(int value)//check
  {
    if (this->current->data+value<=end)
    {
        this->current->data = this->current->data+value;
    }
    else
    {
        this->current->data = (this->current->data+value)%end;
    }
    return *this;
    }
    CircularInt& CircularInt::operator+(const CircularInt other)//check
   {
    if ((this->current->data+other.current->data)<=end)
    {
        this->current->data = this->current->data+other.current->data;
    }
    else
    {
    this->current->data = (this->current->data+other.current->data)%end;

    }
    return *this;
     
  } 

    CircularInt& CircularInt::operator*(const CircularInt other)//check
    {
    if ((this->current->data*other.current->data)>end) //if its bigger then 12 then do %12
    {
    this->current->data = (this->current->data*other.current->data)%(end);
    }
    else 
    {
    this->current->data = this->current->data *other.current->data; 
    }
    return *this;
    }
    
    CircularInt& CircularInt::operator*=(int value) //check
   {
     if (this->current->data*value<=end)
    {
        this->current->data=this->current->data*value;
    }
    else
    {
        this->current->data=(this->current->data*value)%end;

    }
    return *this;
    }

    CircularInt& CircularInt::operator=(int value)
    {
        if(value<=end)
        {
          this->current->data= value;
        }
        else
        {
          this->current->data= value%end;
        }
        return *this;
    }

CircularInt& CircularInt::operator/(const CircularInt other)//needs to be completed
{
    
    return *this;
}

 CircularInt& CircularInt::operator/(int value) //needs to be completed
   {
      double d=(this->current->data)/value;
      int x=d;
      if(d-x==0) //the number is int
      {
          this->current->data=value%end;
          return *this;
      }
      else //this number is double
      {
           cout<<"There is no number x in {1,12}"<<endl;
      }
   }

   CircularInt::operator bool() //check
    {
    return (this->current)!=0;
    }

   CircularInt& CircularInt::operator-()//check
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

    CircularInt& CircularInt::operator--(int) // -1 check 
{
    if (this->current->data == start)//if it on 1 a hour before that is 12
    {
        this->current->data = end;
    }
    else
    {
        this->current->data = this->current->data - 1;
    }
    return *this;
}

  
   CircularInt& CircularInt::operator-=(int value) //check
   {
    while ((this->current->data - value)<start)
    {
    this->current->data=(this->current->data-value)%start;
    }
    this->current->data = this->current->data-value;
    if (this->current->data<start) 
    {
        this->current->data=start;
    }
    return *this;
    }

 CircularInt& CircularInt::operator-(int value)
 { 
    int m=(this->current->data)%end; 
    if(((value)-m)>start)
     {
         this->current->data=value-m;     
     }
     else
     {
       int r=value-m;
       this->current->data= end+(value-m);
     }
   return *this;
 }


 bool CircularInt::operator==(const CircularInt other) const//compare two objects -check
   {
   return (this->current->data)==(other.current)->data;
    
  }

  bool CircularInt::operator==(int value)
   {
   return (this->current->data)==value;   
  }


   bool CircularInt::operator!=(const CircularInt other) const//compare as well if they difference-check
   {   
       return (this->current)->data!=(other.current)->data;
   }

       bool CircularInt::operator!=(int value)
   {   
       return (this->current)->data!=value;
   }


    bool CircularInt::operator>(const CircularInt other)
    {
          return (((this->current)->data)>((other.current)->data));
    }

    bool CircularInt::operator<(const CircularInt other)
    {   
         return (((this->current)->data)<((other.current)->data));
    }

    bool CircularInt::operator>(int value)
    {
        return ((this->current)->data)>value;
    
    
    }

	bool CircularInt::operator<(int value)
    {
    return ((this->current)->data)<value;
    }

    bool CircularInt::operator>=(const CircularInt other)
    {
          return (((this->current)->data)>=((other.current)->data));
    }

    bool CircularInt::operator<=(const CircularInt other)
    {   
         return (((this->current)->data)<=((other.current)->data));
    }

       bool CircularInt::operator>=(int value)
    {
          return ((this->current)->data)>=value;
    }

    bool CircularInt::operator<=(int value)
    {   
         return ((this->current)->data)<=value;
    }

    bool operator==(int value, const CircularInt other)//compare two objects -check
    {
        return (value)==(other.current)->data;
    }

     bool operator!=(int value, const CircularInt other)//compare two objects -check
    {
        return (value)!=(other.current)->data;
    }

    bool operator<(int value, const CircularInt other)
    {   
         return value<(other.current)->data;
    }

   bool operator>(int value, const CircularInt other)
    {   
         return value>(other.current)->data;
    }




    bool operator<=(int value, const CircularInt other)
    {   
         return value<=(other.current)->data;
    }

   bool operator>=(int value, const CircularInt other)
    {   
         return value>=(other.current)->data;
    }

    ostream &operator<<(ostream &output, const CircularInt& ci)//printing
    {      
        return output<<(ci.current)->data;
    }

    istream &operator>>(istream &input, const CircularInt& ci)
    {
        input>>(ci.current)->data;
        return input;
    }

    CircularInt::~CircularInt()
    {
       cout<<"";
    }
