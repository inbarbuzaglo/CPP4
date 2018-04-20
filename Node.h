#include <iostream>


using namespace std;

class CNode
{
public:

int data;
CNode* next;
CNode* prev;

CNode(int data);
};

ostream& operator<<(ostream& os, const CNode& n);
