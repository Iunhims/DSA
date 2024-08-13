#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
   
    std::srand(std::time(0));

    
    
    int random_value = std::rand() % 2;

  
    char result = (random_value == 0) ? 'T' : 'X';

    std::cout  << result << std::endl;

    return 0;
}
