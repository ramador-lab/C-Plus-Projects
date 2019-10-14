#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>


using namespace std;


int main()
{
	vector<int> A{1,2,3,4,5};
	// Put your solution here
	int difference{};
	int load_1{};
	int load_2{};
	int Total{ 0 };
	for (auto num : A)
	{
		Total += num;

	}
	std::cout << Total << std::endl;

	int remainder = Total / 2;
	std::cout << remainder << std::endl;
	load_2 = remainder;
	std::cout << load_2 << std::endl;
	load_1 = Total - load_2;
	std::cout << load_1 << std::endl;

	//difference = load_1 - load_2;
	//std::cout << difference << std::endl;
	int x;
	std::cin >> x;
	//return difference;

}
