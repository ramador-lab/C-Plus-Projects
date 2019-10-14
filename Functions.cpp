// When function is called ->L data may be passed into the function
// In function call-> the data is called arguments 
// In funciton definition they are called parameters
//Pass data to function -> passed-by-value
// Copy of data is passed to the funciton
// Chages in parameter does not change the argument that was passed in 
 //////////- Formal Parameters -> parameters defined in the function header
/////////////- Actual Parameters -> the parameter used in the function call, the agruments 


// return statement immediately exits a function 
// more than one return statement may exist in a function 
// return value is the return of the function call 

// default values may be provided in the prototype or definition, not both 
// Can have multiple default values- must appear consecutively at the tail end of the parameter list 

//Fucntion Overloading -> can have different parameter lists that have the same name 
// A type of polymorphism 

//Passing Arrays to functions

// Pass by reference-> change the actual parameter from within the function body and no copy of the parameter 
//Can use refererence parameters to tell the compiler to pass in a reference to the actual parameter
//Formal parameter will now be in alias to the actual parameter 


//Scope RUles -> determine where an identifier can be used 
// C++ uses static or lexical scoping 
// Local or Block Scope 
// Global Scope 
//Function parameters have block scope 
//Function local variables are only active while the function is executing 
//Local variables are not preserved between function calls
// With nested bloacks inner blocks can 'see' but other outer blocks cannot 'see' in 

//Static local varialbles keep value of its old value and does not reinitialize 
// Declared with staic qualifier 
//Value IS preserved between function calls
//Only initialized the first time the function is called 


//Function Call stack-> last in first out
//Stack Frame or Activation record
// functions must return control to function that called it 
// Each time a function is called new activation record is created and pushed onto stack
//When function terminates we pop the actuivation record and return
//Local variables and function parameters are allocated on the stack 
//Stack size is finite 


//What typically happens when main calls func1 (or any function calls another)?
//There are other ways to achieve the same results 
/*

push space to the return value 
push space for the parameters 
push the return address
transfer control to func1 (jmp)

func1:
push the address of the previous activation record 
push any register values that will need to be restored before returning to the caller 
//perform the codde in func1
restore the register values 
restore the previous activation record  (move the stack pointer)

store any function result 
transfer control to the return address(jmp)

main:
pop the parameters 
pop the return value 



*/

#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <fstream>

int solution(std::vector<int> A)
{
	// Your solution goes here.


	return 0;
}

std::vector<int> toIntVector(std::string str)
{
	std::vector<int> out;
	std::string i;
	std::istringstream tokenStream(str);
	while (getline(tokenStream, i, ' '))
	{
		out.push_back(atoi(i.c_str()));
	}
	return out;
}

int main()
{
	// Read in from stdin, solve the problem, and write answer to stdout.
	std::string AS;
	std::cin >> AS;
	std::vector<int> A = toIntVector(AS);
	std::cout << solution(A);
}
