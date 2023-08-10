/* Assignment C++: 2
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include "Set.h"
#ifndef TASK2_MENU_H
#define TASK2_MENU_H
class Menu {
public:
    Menu() {};//ctor
    void setMenu(); //ctor of menu
    void mainMenu();
    void queueMenu();
    void add_elem(Set &s);
    void print_example();
    ~Menu() {};
};
#endif //TASK2_MENU_H
