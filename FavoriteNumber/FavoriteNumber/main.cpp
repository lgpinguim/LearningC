//A simple program to practice read and write operations

#include<iostream>;
#include "main.h"


int main()
{
	int favoriteNumber = 0;



	FavoriteNumberInput(favoriteNumber);

	while ((favoriteNumber >= 100 || favoriteNumber <= 0))
	{
		std::cout << "Incorrect entry, please write a number between 1 and 100" << std::endl;
		std::cin >> favoriteNumber;
	}


	std::cout << "Awesome, that's my favorite number too !" << std::endl;
	std::cout << "No really!!," << favoriteNumber << " is my favorite Number! " << std::endl;

return 0;
}

void FavoriteNumberInput(int& favoriteNumber)
{
	std::cout << "What is your favorite number between 1 and 100 ?" << std::endl;

	std::cin >> favoriteNumber;
}





