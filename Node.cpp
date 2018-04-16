    
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(int data)
{
this->data_m=data;
}
Node*Node::next()
{
return next_m;
}
int Node::data()
{
return data_m;
}
