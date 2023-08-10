/* Assignment C++: 2
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include <iostream>
#include "MyQueue.h"

MyQueue::MyQueue(int maxQ )
{
    this->maxQ = maxQ;
}

bool MyQueue::enQueue(int val) {
    if (v.size() == maxQ)
        return false;

    v.push_back(val);
    return true;
}

bool MyQueue::deQueue() {
    if (isEmpty())
        return false;
    v.erase(v.begin());
    return true;



}
bool MyQueue::isEmpty()const
    {
        return v.empty();
    }
int MyQueue::peek() {
    //give the first element
    if(isEmpty()){
        cout<<"The queue is empty"<<endl;
        return -1;
    }
    cout<<v.front()<<endl;
    return v.front();
}

ostream& operator<<(ostream& os,const MyQueue& q)//print in format : 1st <- 2st <- 3st ...
{   if(q.v.size()==1)
    {
    cout<<q.v.front();
    return os;

    }
    if(q.v.empty())
        cout<<"Queue is empty"<<endl;
    for (auto i = q.v.begin(); i != q.v.end(); ++i)
    {
        cout << *i;
        if (i+1 != q.v.end())
            cout << " <- ";
    }

    return os;
}



MyQueue::~MyQueue() {
    v.~vector();
}
