/*
modularize this Program
refactor solution that so that it uses functions

decide how to modularize Program
create function for eachy major functions keep the function small
remember the boss/worker strategy
keep the vector declaration in the main function and pass the vector to any funbction it requires

Do not move the vector object outside main and make it global variable

define a function that displays the menu
define a function that reads the selection from the user and returns the uppercase
create functions for each menu option
function that displays the list of numbers, calculates the mean and so forth

Take one function at a time

input function prototypes





*/

//

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void display_menu();
// thiis string function prints out out the available selection to the user 

int add(std::vector <int> number_list);
//function that adds a number to the vector and returns a print out of the list 

int showing_numbers(std::vector <int> number_list);

int mean_list();
//function that returns the mean of the vector

int small_number();
//returns small number of the vector 

int large_number();

//returns large number of the vector
string uppercase_letter();
//returns uppercase command of user


int main()

{
	char item_selection{};
	std::vector <int> number_list{};

	do
	{
		

		// for print out of the the item selection list
		display_menu();
		//std::cin >> item_selection;

	//printing out the vector of numbers
		if (item_selection == 'p' || item_selection == 'P')
		{

			int show_numbers(std::vector <int> number_list);

		}
		//set up adding a number by paaing the integer through the function
		else if (item_selection == 'a' || item_selection == 'A')
		{
			int add(std::vector<int>number_list);
		}
		// getting the mean from the vector of numbers
		else if (item_selection == 'm' || item_selection == 'M')
		{
			std::cout << "\nMean of list: ";
			if (number_list.size() == 0)
				std::cout << "\nUanble to calculate mean - no data" << std::endl;
			else {
				double total{};
				double mean;
				for (auto val : number_list)
				{
					total += val;

				}

				mean = total / number_list.size();
				std::cout << "\nThe mean is " << mean;
				std::cout << "\n  " << std::endl;
			}


		}

		//returning the smallest number from the number of vectors
		else if (item_selection == 's' || item_selection == 'S')
		{
			if (number_list.size() == 0)
			{
				std::cout << "\nUnable to determine the smallest number - list is empty";
				std::cout << std::endl;
			}
			else {
				std::cout << "\nThe smallest number is " << std::endl;
				std::cout << "\n   " << std::endl;
				int smallest = number_list.at(0);
				for (auto val : number_list)
				{
					if (val < smallest)
					{
						smallest = val;
					}
				}
				std::cout << smallest << std::endl;
				std::cout << "\n  " << std::endl;
			}
		}

		//returning the largest number from the numbers listed in the vector
		else if (item_selection == 'L' || item_selection == 'l')
		{
			if (number_list.size() == 0)
			{
				std::cout << "Unable to determine the largest number - list is empty";
				std::cout << std::endl;
			}

			std::cout << "\nThe largest number is " << std::endl;
			std::cout << "\n " << std::endl;
			int largest = number_list.at(0);
			for (auto val : number_list)
			{
				if (val > largest)
				{
					largest = val;
				}
			}
			std::cout << largest << std::endl;
			std::cout << "\n   " << std::endl;



		}

		//User Option seleccted to quit
		else if (item_selection == 'q' || item_selection == 'Q')
		{
			std::cout << "\nGoodbye Closing Program......." << std::endl;
		}
		else {
			"\nSorry, not a valid menu selction. Please choose from the list above with the following letters";
			std::cout << std::endl;
		}
	} while (item_selection != 'q' && item_selection != 'Q');

	/*std::cout << "Passing a function through another function" << std::endl;
	std::cout << "Pass by value" << std::endl;
	std::cout << "passing anything thorugh by value" << std::endl;
	std::cout << "Assign a value to the following vectors" << std::endl;
	std::cout << "By assigning a value to the given number" << std::endl;*/




	std::cout << std::endl;

	return 0;
}


void display_menu ()
{

	std::cout << "\nP- Print numbers" << std::endl;
	std::cout << "\nA- Add a number" << std::endl;
	std::cout << "\nM- Display mean of the numbers" << std::endl;
	std::cout << "\nS- Display the smallest number" << std::endl;
	std::cout << "\nL- Display the largest number" << std::endl;
	std::cout << "\nQ- Quit " << std::endl;


	//print funtion takes in vector
	//goes through for loop of each index and prints out the string of ecah index
	// double check the prototype declaration
	
}


int add(std::vector <int> number_list)
{
	int added_number;

	std::cout << "\nChoose a number to add to the vector list: ";

	std::cin >> added_number;
	number_list.push_back(added_number);
	std::cout << "The number " << added_number << "has been added to the vector list of numbers";
	std::cout << std::endl;
	std::cout << "Please refer back to the menu to select another item selection with the letter characters provided";


		return added_number;
}


int showing_numbers(std::vector <int> number_list)
{
	if (number_list.size() == 0)
	{
		std::cout << "\nSorry, there have not been any numbers added to the vector list";
		std::cout << std::endl;

	}
	else {
		for (auto val : number_list)
		{
			std::cout << val << "" << std::endl;
			std::cout << "" << std::endl;
			return val;
		}
	}
}


int mean_list()
{
	int mean{};

	return mean;
}
