#include <iostream>
#include <string>

void askCountryAndPrintMessage() {
    std::string country;  // 

   
    std::cout << "Which nation are you a resident of? ";

    
    std::getline(std::cin, country);

    
    std::cout << "Thats wonderful to hear! You live in " << country << "!" << std::endl;
}

int main() {
    askCountryAndPrintMessage();  
    return 0;
}