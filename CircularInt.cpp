
#include <iostream>
#include "Node.h"
#include "CircularInt.h"

using namespace std;

    CircularInt::CircularInt(int start_m,int end_m)
    {
        this->head=NULL;
        this->start=start_m;
        this->end=end_m;

    }

    void CircularInt::insert(int x)
    {
        Node temp(x);
        if(((this->start) == (this->end)) && (start==NULL))//list is empty
        {
            *(this->head)=temp;
            (this->head)->next=NULL;
            &((this->head)->prev)=NULL;

        }
        else
        {
            (this->end)->next=temp;
            temp->prev=end;
            end=temp;
            start->prev=end;
            end->next=start;
        }
    }
}
