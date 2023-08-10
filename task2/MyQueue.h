/* Assignment C++: 2
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include <vector>
#include <iostream>
#ifndef TASK2_MYQUEUE_H
#define TASK2_MYQUEUE_H
class MyQueue{
private:
    vector<int> v; //contain the element inside the queue
    int maxQ;
    //bool full;//the capacity of the queue
public:
    MyQueue(int maxQ = 0);
    bool enQueue(int val);
    bool deQueue();
    bool isEmpty()const;
    int peek();
    friend  ostream& operator<<(ostream& os,const MyQueue& q);
    ~MyQueue();
};
#endif //TASK2_MYQUEUE_H
