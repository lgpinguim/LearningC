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


now with constants:

#include <iostream>

using namespace std;

int main(){

cout << "Hello, welcome to Penguim's Carpet Cleaning Service!" << endl;

cout << "\nHow many rooms would you like cleaned? ";

int number_of_rooms{0};
cin >> number_of_rooms;

const double price_per_room{30};
const double sales_tax{0.06};
const int estimate_expiry{30};

cout << "\nEstimate for carpet cleaning service" << endl;

cout << "Number of Rooms:" << number_of_rooms << endl;

cout << "Price per room: $" << price_per_room << endl;

cout << "Cost: $" << price_per_room * number_of_rooms << endl;

cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;

cout <<"=======================================" << endl;

cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;

cout << "this estimate is valid for " << estimate_expiry << " days" << endl;

return 0;
}

now as you can see, the code is much cleaner and understandable.

--------------------------------------------------------------------------------------------------------------------------------------- 

Arrays and Vectors:

Array:
	compound data type \ data structure.
	is made of other data types, for example a collection of test scores, where each score is an integer ( array of integers).
	all elements are of the same type.
	Each element can be accessed directly.

why we use them?
	When we need to work with a collection of items that have the same type, for example working with 100 student grades, insted of creating 100 variables we can create an array that can store 100 elements.
	
Characteristics o an array:

	Fixed size, once created the size can't change.
	all elements are the same type.
	individual elements can be accessed by their position or index.
	first element is 0.
	last element is at index size -1.
	there is no check to see if you are out of bounds.
	always initialize.
	very efficent.

Declaring and initializing

Declaring:
	Element_type array_name[Constant number of elements];
	
	int test-scores[5]; // array of 5 integers

	int high_score_per_level[10]; // array of 10 integers

	const double days_in_year{365};
	double hi_temperature [days_in_year]; //array of 365 doubles
	
Initialization

		Element_type array_name[number of elements] {init list};
		
		int test-scores[5] {100,95,99,87,88};
		
		int high_score_per_level[10] {3,5};
		
		const double days_in_year{365};
		double hi_temperature [days_in_year] {0};
		
		int another_array [] {1,2,3,4,5} // declaring in a way where the compiler creates the array according to the number of variables in the initialization.
		
		
Accessing:

	array_name[number of elements]
	test-scores[5]; // will access the value in brakets
	
	int test-scores[5] {100,95,99,87,88};
	cout << "Value at index 0: " << test_scores[0] << endl;
	cout << "Value at index 1: " << test_scores[1] << endl;
	cout << "Value at index 2: " << test_scores[2] << endl;
	cout << "Value at index 3: " << test_scores[3] << endl;
	cout << "Value at index 4: " << test_scores[4] << endl;

Changing Values:

	int test-scores[5] {100,95,99,87,88};

	cin >> "Value at index 0: " << test_scores[0] << endl;
	cin >> "Value at index 1: " << test_scores[1] << endl;
	cin >> "Value at index 2: " << test_scores[2] << endl;
	cin >> "Value at index 3: " << test_scores[3] << endl;
	cin >> "Value at index 4: " << test_scores[4] << endl;
	
How does it work?

	The name of the array represent the location of the first element in the array (index 0).
	The [Index] represents the offset from the beginning of the array.
	C++ simply performs a calculation to find the correct element.

11/07/2019 

	//introduction to arrays
	include<iostream>
	using namespace std;
	
	int main(){
    char vowels[] {'a','e','i','o','u'}; //here we're letting the compiler figure out how many items we're going to have in our array.

    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "\nThe last vowel is: " << vowels[4] << endl;
    //cin >> vowels[5]; out of bounds error example 

    //overriding a value
    double hi_temps[] {90.1,89.8,77.5,81.6}; // array creation and initialization

     cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

     hi_temps[0] = 100.7;

    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    return 0;
    }

------------------------------------------------------------------------------------------------------------------------------------

Multi dimensional arrays 

Element_Type array_name [dim1_size1] [dim1_size2]

Works like a matrix.
X 0 1 2 3
0
1
2

---------------------------------------------------------------------------------------------------------------------------------------

02/26/2020
Declaring and initializing Vectors.

A vector is a container in the C++ Standard Template Library.

Can grow and shrink in size at execution time with similar semantics and syntax as arrays.

very efficient and can use functions like sort, reverse, find and more.

	#include<vector>
	using namespace std;

	vector <char> vowels; //vector of chars
	vector <int> test_scores; //vector of strings

	vector <char> vowels (5); //vector of 5 chars
	
	vector <char> vowels ('a','e','i','o','u'); //vector of 5 chars

Recap
Dynamic size.
Elements are all the same type.
stored contiguously in memory.
individual elements can be accessed by their position or index.

	vector_name.push_back(element) is used to add new elemnts to the vector


	\\here we have an exemple of vector declaration and manipulation
	#include <vector>
	using namespace std;
	
	vector<int> use_vector()
		{
     		std::vector<int> vec {10, 20, 30, 40, 50};
    		vec.at(0) = 100;
    		vec.at(4) = 1000;
   		 return vec;
		}
	
	
	
	
	






