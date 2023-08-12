# Set-and-Queue

The Set class which will hold data about a set of numbers. A set is a collection which a value cannot
be in it more than once.

private members:\
int maxSize – maximal number of elements.\
int currentSize – current number of elements.\
int* arr\
Public members:\
Set() – Initialize maxSize to 1000 and allocate memory for an integer array with the size
maxSize.\
Set(int maxSize) - Initialize maxSize and allocate memory for an integer array with the size
maxSize.\
Copy constructor.\
~Set() .\

o = - receives an object of type Set and performs a placement to the operator object.\
o = + - takes an integer and adds it to the set.\
o + - accepts an integer and returns a new group that contains the members of the group and the number.\
o + - accepts another group and returns a new group which is the union of the two groups.\
o < - returns TRUE if the operator object's set has more members than the parameter's set.\
o – ][ returns the member in the ith position in the group. It can be assumed that i is an index within the group boundaries.\
o >> - print\


**Queue**
A queue is an abstract data structure defined by the following operations:\
Insertion - (enqueue (adding one new object at the end of the queue\
Output - (dequeue) the output of the object at the top of the queue\
Checking if the queue is empty (isEmpty)\
Checking value at the top of the queue (peek)\
The input and output operations in the queue are based on the first in - first out FIFO principle\

private members:\
vector<int> – contain the element inside the queue.\
int maxQ – the capacity of the queue.\
Public members:\
myQueue (int maxQ).\
enQueue(int val) - insert a new element at the end of the queue. Return true if succeed and
false otherwise.\
deQueue() – remove the next element in the queue. Return true if succeed and false
otherwise.\
isEmpty() – return true if the queue is empty and false otherwise.\
peek() – returns the value of the first element in the queue (return int by value). If the
Queue is empty, return -1.\

**class menu**
This department will manage the system. This class must perform input/output operations from the user except for methods
which have been explicitly defined for this purpose in other departments. The menu must be displayed in a loop until the user chooses
finish it

**mainMenu()** – this method will print the following menu:\
The user taps the action name Notes\
1 Entering the set menu After tapping this, the system will activate a set menu method\
2 Entering the queue menu after tapping this, the system will activate a menu method
turn\
3 Exiting the program After tapping this, the system will print Goodbye! and exit\

   <img width="145" alt="image" src="https://github.com/idanluski/Set-and-Queue/assets/129895992/9accfad9-7ba6-419a-8e0e-ef69e012f314">


**(setMenu)** - when running this method, the program will create two sets (diplotives) and allow the user to perform
Actions on them.\
The user taps the action name Notes\
1 Printing the first set The operations were carried out using operators\
2 Print the second set that were defined.\
3 Adding an element to the first set\
4 Adding an element to the second set\
5 Showing the union of the sets\
6 Exit Exit this menu and return to the main menu\

<img width="178" alt="image" src="https://github.com/idanluski/Set-and-Queue/assets/129895992/fea6e1f3-2e81-4715-b6c9-2af6bfc3ab6a">


**()queueMenu** - When running this method the program will let the user choose the size of the queue.\
The user will then be able to perform actions on the queue.\
the main -\
Creates a menu type object and runs the "main menu" method and that's it.\
<img width="231" alt="image" src="https://github.com/idanluski/Set-and-Queue/assets/129895992/cf5227a2-f04d-4935-9bfd-dbd8edb4151f">

1 Print the queue\
2 Adding a member to the queue\
3 Removing a member from the queue\
4 Print the first element in the queue\
5 Exiting the program Exiting this menu and returning to the main menu\

<img width="194" alt="image" src="https://github.com/idanluski/Set-and-Queue/assets/129895992/c28923c9-33ef-4aa0-8c31-fe7ffb254132">
