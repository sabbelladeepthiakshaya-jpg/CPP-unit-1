#include <iostream> 
// Global variable 
int var = 100; 
// Namespace declaration 
namespace FirstSpace { 
    int var = 1; 
    void display() { 
        std::cout << "Inside FirstSpace, var = " << var << std::endl; 
    } 
} 
namespace SecondSpace { 
    int var = 2; 
    void display() { 
        std::cout << "Inside SecondSpace, var = " << var << std::endl; 
    } 
} 
// Function defined outside a class using scope resolution 
class Sample { 
public: 
    void show(); 
}; 
void Sample::show() { 
    std::cout << "Inside Sample::show() function." << std::endl; 
} 
int main() { 
    int var = 10;  
    std::cout << "Local var = " << var << std::endl; 
    std::cout << "Global var = " << ::var << std::endl;   
    FirstSpace::display();   
    SecondSpace::display();
	   Sample obj; 
    obj.show(); 
    return 0; 
} 
