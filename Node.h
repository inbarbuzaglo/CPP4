
#include <iostream>

using namespace std;

class Node
{
int data_m;
Node* next_m;
Node* prev_m;

public:

Node(int data);
Node* next();
int data();


};