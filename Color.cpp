#include <iostream>
#include <string>

// ANSI Escape-коды для цветов
#define RESET   "\033[0m"

#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#define LIGHT_BLACK   "\033[30;1m"
#define LIGHT_RED     "\033[31;1m"
#define LIGHT_GREEN   "\033[32;1m"
#define LIGHT_YELLOW  "\033[33;1m"
#define LIGHT_BLUE    "\033[34;1m"
#define LIGHT_MAGENTA "\033[35;1m"
#define LIGHT_CYAN    "\033[36;1m"
#define LIGHT_WHITE   "\033[37;1m"

int main() 
{
    std::cout << BLACK    << "Черный текст"    << RESET << std::endl;
    std::cout << RED    << "Красный текст"    << RESET << std::endl;
    std::cout << GREEN  << "Зеленый текст"    << RESET << std::endl;
    std::cout << YELLOW << "Желтый текст"     << RESET << std::endl;
    std::cout << BLUE   << "Синий текст"      << RESET << std::endl;
    std::cout << MAGENTA << "Пурпурный текст" << RESET << std::endl;
    std::cout << CYAN   << "Бирюзовый текст"  << RESET << std::endl;

    std::cout << std::endl;

    std::cout << LIGHT_BLACK    << "Ярко черный текст"    << RESET << std::endl;
    std::cout << LIGHT_RED    << "Ярко красный текст"    << RESET << std::endl;
    std::cout << LIGHT_GREEN  << "Ярко зеленый текст"    << RESET << std::endl;
    std::cout << LIGHT_YELLOW << "Ярко желтый текст"     << RESET << std::endl;
    std::cout << LIGHT_BLUE   << "Ярко синий текст"      << RESET << std::endl;
    std::cout << LIGHT_MAGENTA << "Ярко пурпурный текст" << RESET << std::endl;
    std::cout << LIGHT_CYAN   << "Ярко бирюзовый текст"  << RESET << std::endl;
    
    std::cout << std::endl;

    // Пример с комбинированием цветов и стилей
    std::cout << "\033[1;33;44mЖирный желтый текст на синем фоне" << RESET << std::endl;
    
    std::cout << std::endl;

    std::string S0 = "\033[38;5;";
    std::string sColor, sNum;

    for( int j = 0; j < 16; j++ )
    {        
        for( int i = 0; i < 16; i++ )
        {
            int nColor = ( j << 4 ) | i;
            sNum = std::to_string( nColor ); 
            sColor = S0 + sNum;
            sColor += "m";
            std::cout << sColor.c_str() << sNum.c_str() << RESET << "\t";
        }
        std::cout << std::endl;          
    } 

    std::cout << std::endl; 

    return 0;
}