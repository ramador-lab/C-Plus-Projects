//section 11 challenge 
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



#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

string show_list (std::vector <std::string> item_selection2);
// thiis string function prints out out the available selection to the user 

int add (std::vector <int> number_list);
//function that adds a number to the vector and returns a print out of the list 
int mean_list();
//function that returns the mean of the vector

int small_number();
//returns small number of the vector 

int large_number ();

//returns large number of the vector
string uppercase_letter();
//returns uppercase command of user


int main()

{
	char item_selection{};
	std::vector <int> number_list{};


  std::cout << "\nSelect one of the items from the menu selction" << std::endl;
  std::cout << "\nThe items go along with the letter characters with the description what each character soes in terms of functionality " << std::endl;
	do
	{
    // for print out of the the item selection list
    std::vector <std::string> item_selection2 {};
   string show_list (item_selection2);

		std::cout << "\nChoose Item from the list: ";
		std::cin >> item_selection;


		if (item_selection == 'p' || item_selection == 'P')
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

				}
			}


		}
    //set up adding a number by paaing the integer through the function
		else if (item_selection == 'a' || item_selection == 'A')
		{
	       int add(std::vector<int>number_list);
		}
		else if (item_selection == 'm' || item_selection == 'M')
		{
			std::cout << "\nMean of list: ";
			if (number_list.size() == 0)
				std::cout << "\nUanble to calculate mean - no data" << std::endl;
			else {
				double total{};
				double mean;
				for (auto val:number_list)
				{
					total += val;

				}

				mean = total / number_list.size();
				std::cout << "\nThe mean is " << mean;
				std::cout << "\n  " << std::endl;
			}


		}
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
				for (auto val:number_list)
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


string show_list(std::vector <std::string>  item_selection2)
{
  item_selection2 = {		
    "\nP- Print numbers",
  	  "\nA- Add a number", 
  	   "\nM- Display mean of the numbers",
  		"\nS- Display the smallest number",
  		"\nL- Display the largest number",
  		"\nQ- Quit ",
    }
  for (auto list : item_selection2)
  {
    std::cout << list << std::endl;
  }

//print funtion takes in vector
//goes through for loop of each index and prints out the string of ecah index
// double check the prototype declaration 

  return list;
}


int add (std:: vector <int> number_list)
{
  int added_number;
  
  std::cout << "\nChoose a number to add to the vector list: ";

  std::cin >> added_number;
  number_list.push_back(added_number);
  std::cout << "The number " << added_number << "has been added to the vector list of numbers";
  std::cout << std::endl;
  std::cout << "Please refer back to the menu to select another item selection with the letter characters provided"


  return added_number;
}
