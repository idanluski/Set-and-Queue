/* Assignment C++: 2
   Author: Idan Luski, ID: 209203751
           Ohav Tabul  ID: 207691262
*/
using namespace std;
#include <iostream>
#include "Menu.h"
#include "MyQueue.h"

void Menu::print_example() {
    std::cout <<"hello"<<endl;
}

void Menu::mainMenu() {
    int choose=0;
    while (choose != 3) {
        //    Menu build(int choose;)
        std::cout << "(1) Set Menu\n"
                     "(2) Integer Queue Menu\n"
                     "(3) Exit"<<endl;

        cin >> choose;
        switch (choose) {
            case 1: {
                setMenu();
                break;
            }
            case 2: {
                queueMenu();
                break;
            }
            case 3: {
                cout << "Goodbye!";
                break;

            }
            default:
                cout << "Invalid selection." << endl;
        }
    }
}

void Menu::add_elem(Set &s)
{   int num;
    cout<<"Give a number:";
    cin>>num;
    s += num;
}
void Menu::setMenu()
{   Set s1;
    Set s2;
    int choose=0;


    while(choose!=6) {
        cout << "*** Welcome to Set Menu ***\n"
                "To select an item, enter\n"
                "1 Show set 1\n"
                "2 Show set 2\n"
                "3 add element to set 1\n"
                "4 add element tp set 2\n"
                "5 Show set1 U set 2 (union)\n"
                "6 to exit"<< endl;
        cin >> choose;
        switch (choose)
        {
            case 1:
            {
                if (!s1.is_empty(1))
                    cout<<s1;
                break;
            }
            case 2:
            {
                if (!s2.is_empty(2))
                    cout<<s2;
                break;
            }
            case 3://add element s1
            {

                add_elem(s1);
                break;
            }
            case 4://add element s2
                add_elem(s2);
                break;

            case 5:
            {
                if(s1.Get_cuurent() == 0 && s2.Get_cuurent()==0)
                    //check if the union is empty;
                    cout<<"The union is empty"<<endl;
                else
                    cout<<s1+s2;
                break;
            }
            case 6:
                break;
            default:
            {
                cout<<"Invalid selection."<<endl;
            }

        }

    }


}


void Menu::queueMenu() {
    cout<<"Enter the size of the queue: ";
    int size=0;
    cin>> size;
    MyQueue m(size);
    int choose=0;


    while (choose != 5) {
        cout << "*** Welcome to Queue Menu ***\n"
                "To select an item, enter\n"
                "1 Show Queue\n"
                "2 Insert new element\n"
                "3 Remove element\n"
                "4 Check the first element\n"
                "5 to exit" << endl;
        cin >> choose;

        switch (choose) {
            case 1: {
                if(m.isEmpty())
                {
                    cout<<"The queue is empty"<<endl;
                    break;
                }

                cout<<m<<endl;
                break;



            }
            case 2: {
                int new_elem;
                cout<<"insert new element: "<<endl;
                cin>>new_elem;
                if(m.enQueue(new_elem))
                {
                    cout << "The new queue:" << endl;
                    cout << m << endl;
                }
                else
                    cout<<"Queue is full"<<endl;

                break;
            }
            case 3: {

                m.deQueue();
                if(m.isEmpty())
                {
                    cout<<"The queue is empty"<<endl;
                    break;
                }
                cout<<"The new queue:"<<endl;
                cout<<m<<endl;
                break;

            }
            case 4:
            {
                m.peek();
                break;

            }
            case 5:
                break;

            default: {
                cout << "Invalid selection." << endl;
            }
        }
    }
}

