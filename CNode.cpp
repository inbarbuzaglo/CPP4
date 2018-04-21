#include <iostream>
#include "CNode.hpp"

using namespace std;

CNode::CNode(int data)
{
this->data=data;
}

ostream& operator<<(ostream& os, const CNode& n)
{
    return os;
}
