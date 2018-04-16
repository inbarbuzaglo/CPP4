
#include <iostream>

using namespace std;

class CircularInt
{
    int start;
    int end;
    Node *head;

    public:

    CircularInt(int start_m,int end_m);
    void insert(int x);
};
