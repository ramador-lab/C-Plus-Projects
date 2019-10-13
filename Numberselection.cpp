#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


int main()

{
    char item_selection{};
    std::vector <int> number_list {};
    int add;
    
    do
    {
    std::cout << "P- Print numbers" << std::endl;
    std::cout << "A- Add a number" << std::endl;
    std::cout << "M- Display mean of the numbers" << std::endl;
    std::cout << "S- Display the smallest number" <<std::endl;
    std::cout << "L- Display the largest number" << std::endl;
    std::cout << "Q- Quit" << std::endl;
    
    
    
    std::cout << "Choose Item from the list: ";
    std:: cin >> item_selection;
  
    
    if (item_selection == 'p' || item_selection == 'P')
    {
        if (number_list.size() == 0)
        {
            std:: cout << "Sorry, there have not been any numbers added to the vector list";
            std::cout << std::endl;
            
        } else {
            for(auto val: number_list)
            {
            std::cout << val << "" << std::endl;
            std::cout << "" <<std::endl;
            
            }
        }
        
        
} else if (item_selection == 'a' || item_selection == 'A')
    {
        std::cout << "Choose a number to add to the vector list: ";
    
            std::cin >> add;
            number_list.push_back(add);
            std::cout << "The number " << add << "has been added to the vector list of numbers";
            std::cout << std::endl;
            
    } else if (item_selection == 'm' || item_selection == 'M')
    {
        std::cout << "Mean of list: " ;
        if(number_list.size == 0)
            std::cout << "Uanble to calculate mean - no data" <<std::endl;
       else{ 
        int total {};
         for (auto val :: number_list)
                    {   int mean;
                        total+=val;
                        mean = total / number_list.size();
                        std::cout << "The mean is " << mean;
                        
                    }
            }
        
        
    } else if (item_selection == 's' || item_selection == 'S')
    {
        if (number_selection.size() == 0)
        {
            std::cout << "Unable to determine the smallest number - list is empty";
            std::cout << std::endl;
        } else{
         std::cout << "The smallest number is "<< std::endl;
            int smallest = number_list.at(0);
            for (auto val:: number_list)
            {
                if(val < smallest);
                {
                    smallest = val;
                }
            }
            std::cout << val << std::endl;
        }
    } else if (item_selection == 'L' || item_selection == 'l')
    {
        if (number_list.size() == 0)
        {
            std::cout << "Unable to determine the largest number - list is empty";
            std::cout << std::endl;
        }
        for (int val: number_list)
            {
            std::cout << "The largest number is "<< std::endl;
            int largest = number_list.at(0);
            for (auto val:: number_list)
            {
                if(val > largest);
                {
                    largest = val;
                }
            }
            std::cout << val << std::endl;
                
            }
        
    } else if(item_selection == 'q' || item_selection == 'Q')
    {
      std::cout << "Goodbye Closing Program......."<< std:: endl;  
    }
        else{
            "Sorry, not a valid menu selction. Please choose from the list above with the following letters";
            std::cout << std::endl;
        }
   } while (item_selection != 'q' || item_selection != 'Q');
    
    
    
    
    
    std::cout << std::endl;
    
    return 0;
}

