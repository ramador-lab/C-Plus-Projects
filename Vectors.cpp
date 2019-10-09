#include <iostream>
#include <vector>


int main ()
{
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    std::cout << "Vector1: " << std::endl;
    std::cout << vector1.at(0) << std::endl;
    std::cout << vector1.at(1) <<std::endl;
    std::cout << "Vector1 contains " << vector1.size() << "elements" << std::endl;
    
    

    
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    
    std::cout << "Vector2: " << std::endl;
    std::cout << vector.at(0) << std::endl;
    std::cout << vector2.at(1) << std::endl;
    std::cout << " Vector2 contains " << vecror2.size() << "elements " << std::endl;
    
    vector <vector <int> > vector_2D;
    
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);
    
    
    std::cout "Vector_2D " << std::endl; 
    std::cout << vector_2D.at(0).at(0) << "  " << vector_2D.at(0).at(1) << st::endl;
    std::cout << vector_2D.at(1).at(0) << "    " << vector_2D.at(1).at(1) << std:: endl;
    
    
    vector.at(0) = 1000;
    
    std::cout "Vector_2D " << std::endl; 
    std::cout << vector_2D.at(0).at(0) << "  " << vector_2D.at(0).at(1) << st::endl;
    std::cout << vector_2D.at(1).at(0) << "    " << vector_2D.at(1).at(1) << std:: endl;
    
    
    std::cout << "Vector1: " << std::endl;
    std::cout << vector1.at(0) << std::endl;
    std::cout << vector1.at(1) <<std::endl;
    std::cout << "Vector1 contains " << vector1.size() << "elements" << std::endl;
    
    
}