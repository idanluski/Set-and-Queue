/* Assignment C++: 2
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include <iostream>
#include "Set.h"

Set::Set() {
    maxSize =1000;
    arr =new int[maxSize];
    currentSize = 0;
}

Set::Set(int maxSize){
    this->maxSize =maxSize;
    arr =new int[maxSize];
    currentSize = 0;
}

Set::Set(const Set &other) {
    //copy constructor using assighn operand
    *this =other;

}

Set::~Set() {delete []arr;}

Set &Set::operator=(const Set &other) {
    //assigh operand
    if (this != &other)
    {
        maxSize = other.maxSize;
        currentSize = other.currentSize;
        arr = new int[maxSize];
        int i ;
        for(i=0;i<maxSize;i++)
            arr[i] = other.arr[i];
    }
    return  *this;

}

Set &Set::operator+=(int a){
    //get num and add it to the group if he not here yet.

    if(this->is_in_the_group(a))
        return *this;

    if (currentSize == maxSize )
    {
        create_new_arr();
    }
    arr[currentSize]= a;
    currentSize++;
    return *this;
}

bool Set::is_in_the_group(const int a) const
{
    int i;
    for (i=0;i<this->currentSize;i++)
    {
        if(arr[i] == a)
            return true;
    }
    return false;
}
void Set::create_new_arr()
{
    int* temp = new int[this->maxSize+1];
    std::copy(arr,arr+maxSize,temp);
    delete []arr;
    arr = temp;
    maxSize = maxSize +1;
}//create new array in seep copy and assighn it to obeject
Set Set::operator+(const int a)const
{   int new_max_size = maxSize;
    int i ;
    if (is_in_the_group(a))
    {
        Set new_Si = *this;
        return new_Si;
    }

    if (currentSize == maxSize )
        new_max_size++;

    Set new_Set = Set(new_max_size);
    for(i=0;i<currentSize;i++)
    {
        new_Set.arr[i] = this->arr[i];
        new_Set.incrementsize();
    }
    new_Set.arr[i] = a;
    return new_Set;

} // Set + integer
Set operator+(const int a ,const Set& set){
    Set new_set = set;
    return new_set + a;

} // + integer + Set

Set Set::operator+(const Set &other)const
{
    int j;
    Set new_set;
    new_set = *this;
    for(j=0;j<other.currentSize;j++)
    {
        new_set += other[j];
    }
    return new_set;
}

bool Set::operator>(const Set &other)const
{
    if(currentSize>other.currentSize)
        return true;
    return false;
}
int &Set::operator[](int index) const
{
    return arr[index];
}

ostream& operator<<(ostream& os,const Set& s){
    os<<"{";
    int i;
    for(i=0;i<s.currentSize;i++)
    {
        os<<s[i];
        if(i+1<s.currentSize)
            cout<<",";
    }
    os<<"}"<<endl;
    return os;
}

bool Set::is_empty(int num) const {
    if(currentSize == 0)
    {
        cout<<"Set "<<num<<" is empty"<<endl;
        return true;
    }
    return false;

}






//
// Created by luski on 30/12/2022.
//
