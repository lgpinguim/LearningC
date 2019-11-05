# LearningC
C++ code repository
-----------------------------------------------------------------------------------------------------------------------------------------

16/10/2019
I played a little with the cout and cin operators, manipulating the exhibition and entry of variables.
see program FavoriteNumber for reference.

------------------------------------------------------------------------------------------------------------------------------------------
29/10/2019 
I learned today that we can use cin to receive multiple values in one line, while also practicing the use of namespaces. Example:

#include <iostream>
using namespace std; 


int main()
{
	int num1, num2;
	cout << "Write one number: ";
	cin >> num1;
	cout << "Write another number: ";
	cin >> num2;
	cout << "The numbers are " << num1 << " and " << num2;

}

If you write 10 and 7 for example the cin will read the first number and store it and after that it will read the second number and store it immediately, so you will need to input the numbers just one time instead of two: 

For reference  use the MultipleCin repository

------------------------------------------------------------------------------------------------------------------------------------------

30/10/2019
Reviewing variables and constants:
binding - associate a name with a variable memory location

but what is a variable ?
A variable is a abstraction for a memory location, allowing programmers to use meaningful names and not memory addresses. 
they have type (int, bool, string....) and value (10, "Hello there", 3.14).
THEY MUST BE DECLARED BEFORE THEY ARE USED.
a variable value may change.

---------------------------------------------------------------------------------------------------------------------------------------

31/10/2019
Declaring and Initializing Variables.
Structure - VariableType VariableName;

Rules:
Can contain letters, numbers and underscores.
must begin with a letter or underscore - NEVER a number.
Can't use C++ Reserved words. (https://pt.cppreference.com/w/cpp/keyword)
Cannot redeclare a name in the same scope
and remember, C++ is case sensitive.

This is IMPORTANT:
-- Remember to keep the consistency with your naming conventions.
-- Use Meaningful names.
-- Never use variables before initializing them. 
-- Declare the variables close to when you are going to use it.

int age; //unitialized
int age = 21; //initialization
int age (21); // constructor initialization
int age {21} //C++11 list initialization sintax

As I'm lacking a c++ compiler at the moment the code will be written below:

#include <iostream>
	
using namespace std;

//this program will calculate the area of a room in square feet

int main(){

//int x;
//cout << x; // here lies the danger of not initializing your variables, cout will print a random value from memory. 

cout << "Enter the length of the room";
int room_width{0}; 
cin >> room_width;

cout << "Enter the length of the room";
int room_length{0};
cin >> room_width;

cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------

01/11/19

Local vs Global variables:

Local - scope or visibility is limited on the scope that the variable is declared

Global - Can be accessed anywhere on the program - automatically initialized to 0

Primitive data types (fundamental):
char \ int \ float \ bool - size and precision is compiler dependent.

char - single characters.

int - whole numbers (signed and unsigned) 
unsigned = 0 and positive.

float - floating point, represents non-integer numbers.

bool - true or false.
0 is false.

---------------------------------------------------------------------------------------------------------------------------------------

04/11/2019
sizeof operator - determines the size in bytes of a type or variable.

examples

sizeof(int)
sizeof(double)
sizeof some_variable

Gets information from <climits> (integral types) and <cfloat> (floating point types). 
also we can use some interesting functions:
	
	CHAR_MIN - MINIMUM value that can be stored
	...._MIN - you can use it with integers, chars, and etc
	
	CHAR_MAX - MAXIMUM value that can be stored
	
----------------------------------------------------------------------------------------------------------------------------------

04/11/2019 
Constants:

Have names.
Occupy storage.
Are usually typed.

HOWEVER, THEIR VALUE CANNOT CHANGE ONCE DECLARED!!!!!

if  const age {21} - we can't change it. 

consts are good for meaningful things that should be changed with caution.

Literal - used to express specific values:
x = 12;

to declare a literal contant you should declare it and initialize it:
const double pi {3.14};

----------------------------------------------------------------------------------------------------------------------------------
 05/11/2019
 learning my ropes with visual studio code, here is a program to study constants: 
 
Before constants:

\\Here we have a problem if someone replace all the values of 30, we could mess um the amount of time the estimate is valid.

#include <iostream>

using namespace std;

int main(){

cout << "Hello, welcome to Penguim's Carpet Cleaning Service!" << endl;

cout << "\nHow many rooms would you like cleaned? ";

int number_of_rooms{0};
cin >> number_of_rooms;

cout << "\nEstimate for carpet cleaning service" << endl;

cout << "Number of Rooms:" << number_of_rooms << endl;

cout << "Price per room: $" << 30 << endl;

cout << "Cost: $" << 30 * number_of_rooms << endl;

cout << "Tax: $" << 30 * number_of_rooms * 0.06 << endl;

cout <<"=======================================" << endl;

cout << "Total estimate: $" << (30* number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;

cout << "this estimate is valid for " << 30 << " days" << endl;

return 0;
}

-- will continue soon --












