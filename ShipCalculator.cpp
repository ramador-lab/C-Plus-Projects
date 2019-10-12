#include <iostream>
#include <iomanip>


int main()
{
    int length{}, width{}, heigth{};
    double base_cost{2.50};
    
    const int tier1_threshold{100};
    const int tier2_threshold{500};
    
    int max_dimension_length {10};
    
    double tier1_subcharge{0.10};
    double tier2_subcharge{0.25};
    
    
    int package_volume{};
    
    std::cout << "Welcome to the package cost calculator" <<std::endl;
    std::cout << "Enter length, width, and height of the package separated by spaces: ";
    std::cin >> length >> width >> height;
    
    if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        std::cout << "Sorry, package rejected - dimension exceeded" << std::endl;
        
    } else{
        
        double package_cost{};
        package_volume = length * width * height;
        packege_cost = base_cost;
        
        if { package_volume > tier2_threshold)
        {
            package_cost+= package_cost*tier2_subcharge;
            std::cout << "adding tier 2 subcharge" << std::endl;
            
        } else if (package_volume > tier1_threshold)
            { 
                package_cost += package_cost * tier1_subcharge;
                std::cout << " adding tier 1 subcharge" << std::endl;
            
            }
            
            std::cout << fixed << setprecision(2);
            std::cout << "The volume of your package is: " << package_volume << std::endl;
            std::cout << "Your package will cost $" << package_cost << "to ship" << std::endl;
        
    }
    
    
    return 0;
}