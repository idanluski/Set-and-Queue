/* Assignment C++: 2
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
#include "iostream"
using namespace std;
#ifndef TASK2_SET_H
#define TASK2_SET_H
class Set{
private:
        int maxSize; //maximal number of elements
        int currentSize;//current number of elements.
        int *arr;
        void create_new_arr();
        bool is_in_the_group(const int a)const;

public:
    Set(); //– Initialize maxSize to 1000 and allocate memory for an integer array with the size maxSize.
    Set(int maxSize); //- Initialize maxSize and allocate memory for an integer array with the size maxSize.
    Set(const Set &other);
    ~Set();
    void incrementsize(){currentSize = currentSize+1;};//increament currentSize by 1.
    Set& operator=(const Set& other);
    Set& operator+=(const int a);
    Set operator+(const int a)const;
    friend Set operator+(int a ,const Set& set);
    Set operator+(const Set& other)const;
    bool operator>(const Set& other)const;
    int &operator[](int index)const;
    friend  ostream& operator<<(ostream& os,const Set& s);
    bool is_empty(int num)const;
    int Get_cuurent()const{return currentSize;};



};
#endif //TASK2_SET_H

