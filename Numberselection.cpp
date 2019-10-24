#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


int main()

{
	char item_selection{};
	std::vector <int> number_list{};
	int add;

	do
	{
		std::cout << "\nP- Print numbers" << std::endl;
		std::cout << "\nA- Add a number" << std::endl;
		std::cout << "\nM- Display mean of the numbers" << std::endl;
		std::cout << "\nS- Display the smallest number" << std::endl;
		std::cout << "\nL- Display the largest number" << std::endl;
		std::cout << "\nQ- Quit " << std::endl;



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
		else if (item_selection == 'a' || item_selection == 'A')
		{
			std::cout << "\nChoose a number to add to the vector list: ";

			std::cin >> add;
			number_list.push_back(add);
			std::cout << "The number " << add << "has been added to the vector list of numbers";
			std::cout << std::endl;

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
