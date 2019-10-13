#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


int main()

{
    char item_selection{};
    vector <int> number_list {};
    int add;
    
    do
    {
    std::cout << "P- Print numbers" << std::endl;
    std::cout << "A- Add a number" << std::endl;
    std::cout << "M- Display mean of the numbers" << std::endl;
    std::cout << "S- Display the smallest number" <<std::endl;
    std::cout << "L- Display the largest number" << std::endl;
    std::cout << "Q- Quit" << std::endl;
    } while (item_selection != 'q' || item_selection != 'Q')
    
    
    
    std::cout << "Choose Item from the list: ";
    std:: cin >> item_selection
  
    
    if (item_selection == 'p' || item_selection == 'P')
    {
        if (number_list.size == 0)
        {
            std:: cout << "Sorry, there have not been any numbers added to the vector list";
            std:: endl;
            
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
            std::endl;
            
    } else if (item_selection == 'm' || item_selection == 'M')
    {
        std::cout << "Mean of list: " ;
        int mean {};
            while (number_list.size() != 0)
            {
                int total {};
                total+=number_list.at(0);
                    for (int val {}; val >0; val++)
                    {
                        total+=number_list.at(val);
                        
                    }
            }
        mean = total / number_list.size();
        
    } else if (item_selection == 's' || otem_selection == 'S')
    {
        std::cout << "the smallest number is " std::endl;
            for (int val: number_list)
            {
             int small;
             while (number_list.at(small) < number_list.at(val))
                 std::cout << number_list.at(small) << std::endl;
                 break;
                
            }
    } else if (item_selection == 'L' || item_selection == 'l')
    {
        for (int val: number_list)
            {
             int large;
             while (number_list.at(large) > number_list.at(val))
                 std::cout << number_list.at(large) << std::endl;
                 break;
                
            }
        
    } else (item_selection == 'q' || item_selection == 'Q')
    {
      std::cout << "Goodbye Closing Program......." std:: endl;  
    }
    
    
    
    
    
    std::cout << std::endl;
    
    return 0;
}
