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
#include <cmath>
using namespace std;



void display_menu();
// thiis string function prints out out the available selection to the user

char item_input();
//Separate function for user to inpit their choice from the given menu

void clear_list (std::vector <int> &c);

void add(std::vector <int> &a);
//function that adds a number to the vector and returns a print out of the list

int showing_numbers(std::vector <int> &p);

int mean_list(std::vector <int> &m);
//function that returns the mean of the vector

int small_number(std::vector <int> &s);
//returns small number of the vector

int large_number(std::vector <int> &l);





int main()

{
	
	std::vector <int> number_list{};
	char item_selection{};

	do
	{
		
	
		 display_menu();

		 item_selection = item_input();
		
		//printing out the vector of numbers
		if (item_selection == 'P')
		{
			 showing_numbers(number_list);

		}
		//set up adding a number by paaing the integer through the function
		else if (item_selection == 'A')
		{
		  add(number_list);
		}
		// getting the mean from the vector of numbers
		else if (item_selection == 'M')
		{
			 mean_list(number_list);

		}

		//returning the smallest number from the number of vectors
		else if (item_selection == 'S')
		{
			 small_number(number_list);
		}

		//returning the largest number from the numbers listed in the vector
		else if (item_selection == 'L')
		{
			
			large_number(number_list);
			

		}

		else if (item_selection = 'C')
		{

			clear_list(number_list);


		}

		//User Option seleccted to quit
		else if (item_selection == 'Q')
		{
			std::cout << "\nGoodbye Closing Program......." << std::endl;
		}
		else {
			"\nSorry, not a valid menu selction. Please choose from the list above with the following letters";
			std::cout << std::endl;
		}
	} while (item_selection != 'Q');

	std::cout << std::endl;

	return 0;
}


void display_menu()
{
	std::cout << "\nP- Print numbers" << std::endl;
	std::cout << "\nA- Add a number" << std::endl;
	std::cout << "\nM- Display mean of the numbers" << std::endl;
	std::cout << "\nS- Display the smallest number" << std::endl;
	std::cout << "\nL- Display the largest number" << std::endl;
	std::cout << "\nQ- Quit " << std::endl; 

	

	//print funtion takes in vector
	//goes through for loop of each index and prints out the string of ecah index
	// double check the  declaration
	

}


char item_input()
{
	char item_selected{};
	std::cout << "\nEnter a choice from the menu above" << std::endl;
	std::cin >> item_selected;

	return toupper(item_selected);
	

}


void add(std::vector <int> &a)
{
	int added_number;

	std::cout << "\nChoose a number to add to the vector list: ";

	std::cin >> added_number;
	a.push_back(added_number);
	std::cout << "\nThe number " << added_number << " has been added to the vector list of numbers";
	std::cout << std::endl;
	std::cout << "\nPlease refer back to the menu to select another item selection with the letter characters provided";
	std::cout << "" << std::endl;

}


int showing_numbers(std::vector <int> &p)
{
	if (p.size() == 0)
	{
		std::cout << "\nSorry, there have not been any numbers added to the vector list";
		std::cout << std::endl;

	}
	else {
		for (auto val : p)
		{
			std::cout << "\n  " << val << "    " << std::endl;
			std::cout << "" << std::endl;
			return val;
		}
	}
}


 int mean_list(std::vector <int> &m)
{
	int mean{};
	std::cout << "\nMean of list: ";
	if (m.size() == 0)
		std::cout << "\nUanble to calculate mean - no data" << std::endl;
	else {
		double total{};
		double mean;
		for (auto val : m)
		{
			total += val;

		}

		mean = total / m.size();
		std::cout << "\nThe mean is " << mean;
		std::cout << "\n  " << std::endl;

		return mean;
	}
}


	int small_number(std::vector <int> &s)
	{
		int smallest{};
		if (s.size() == 0)
		{
			std::cout << "\nUnable to determine the smallest number - list is empty";
			std::cout << std::endl;
		}
		else {
			std::cout << "\nThe smallest number is " << std::endl;
			std::cout << "\n   " << std::endl;
			int smallest = s.at(0);
			for (auto val : s)
			{
				if (val < smallest)
				{
					smallest = val;
				}
			}
			std::cout << smallest << std::endl;
			std::cout << "\n  " << std::endl;
			return smallest;

		}
	}
		int large_number(std:: vector <int> &l)
		{
			int largeNumber{};

			if (l.size() == 0)
			{
				std::cout << "Unable to determine the largest number - list is empty";
				std::cout << std::endl;
			}

			std::cout << "\nThe largest number is " << std::endl;
			std::cout << "\n " << std::endl;
			int largest = l.at(0);
			for (auto val : l)
			{
				if (val > largest)
				{
					largest = val;
				}
			}
			std::cout << largest << std::endl;
			std::cout << "\n   " << std::endl;

			
			return largeNumber;
		}
		


		void clear_list(std::vector <int>& c)
		{

			c.clear();
			std::cout << "\nThe list of numbers has been cleared." << std::endl;
		}





