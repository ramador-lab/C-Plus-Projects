/*
Function calls use an area of memory called the program stack
- Stack Fram or activation record
-> Functions must return control to function that called it
-> Each time a function is called we create a new activation record and push it on stack
-> When a function terminates activation record pops and returns
->Local variables and function parameters are allocated 
-> Stack size is finite - Stack Overflow ( When calling to many function calls)

main:
push space for the retirn value 
push space for the parameters
push the return address
transfer control to func 1(jmp)

func 1:
push the address of the previous activation record
push any register values that will need to be restored before returning to the caller 
perform the code in func 1
restore the register values 
restore the previous activation record (move the stack pointer)
store any function result 
transfer controlo to the return address (jmp)

main:
pop the parameters 
pop the return value

 ---------------->>>>>>>>>>>>>>>>>>>>>>>>> Program execution starts at main 
										   Runs stop and then allocates memory 
										   Allocates memory for any function that is called in the int main
										   at the stack the statements in the function are performed 
										   pass by reference use alias
										   when function is done execuitng it is returned back to the main function
Inline Functions 
- Function calls have a certain amount of overhead 
- Can suggest to the compiler to compile them 'inline'
- avois function call overhead 
- generate inline assembly code 
- generally faster 
- could cause code bloat

Compilers optimizations are very sophisticated 
- will likely inline even without your suggestion 

Inlines are usually declared in header files 


Recursive Functions 
- A recursive function is a function that calls itself -> either directly or indierectly through another function 

Reccursive problem solving 
-base case 
- divide the rest of problem into subproblem and do recursive solutions
Mathematic - factorial, Fionaccim, fractals....
Searching and sorting - bianry search , search trees 

- Base case helps avoid any stack overflow errors . Helps allocate memory for function calls 

Important notes:
-If recursion doesn't eventually stop you will have infinite recursion 
-recursion can be resource intensive 
-Remember that base cases terminate the recursion 
- Only use recursive solutions when it makes sense 
- Anything that can be done recursively can be done iteratively 
- stack overflow error 


unsigned long long factorial (unsigned long long n) - return n* factorial(n-1) -----> to get the factorial of a number 

main always on stack-> perpetuates to send the return address of the function that is being executed
Recursive helps unwind inorder to allocate some memory 




Section challenge:


Redo Menu from section 9

- create functions for each major function 
- keep the functions small
- Remember the boss/workere analogy
- keep the vector declaration in the main function and pass the vector object to any function that declares it 



Points of direction:

Define a function that defines and displays the menu 
define a function that reads the selection from the user and returns it in uppper case
create functions for each menu option 
create functions that display the list of numbers, calculates the mean and so forth 



Use function prototypes 

*/


#include <iostream>
#include <vector>
#include <string>



std::string display_graph();
std::string user_choice();



int main()
{
	std::string Menu;
	char item_selection{};
	std::string display_graph(Menu);

	std::cin >> item_selection;

	





















}


std::string display_graph(std::string Menu)
{
	char item_selection;
	do {
		char item_selection{};

		Menu = "\nChoose one of the following menu items:  \nP- Print numbers \nA- Add numbers \nS- Display smallest number \nL- Display largest number \nM- Display the mean of the vector \nQ- quit the program";
		
	} while (item_selection != 'q' && item_selection != 'Q');

	return Menu;

}

