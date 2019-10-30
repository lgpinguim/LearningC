# LearningC
C++ code repository
16/10/2019
I played a litte with the cout and cin operators, manipulating the exibition and entry of variables.
see program favorite number for reference.
------------------------------------------------------------------------------------------------------------------------------------------
29/10/2019 
I learned today that we can use cin to recieve multiple values in one line, while also practicing the use of namespaces. Example:

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

\\ If you write 10 and 7 for example the cin will read the first number and store it and after that it will read the second number and store it imediately, so you will need to input the numbers just one time instead of two: 

Wrtie one number: 10 20
