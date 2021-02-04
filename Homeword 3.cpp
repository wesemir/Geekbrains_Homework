#include <iostream>
#include "Header.h"



int main()
{
    setlocale(LC_ALL, "ru");
// Задание №1
   std::cout << "Задание №1" << std::endl;
    const int a = 3;
    const int b = 4;
    const int c = 5;
    const int d = 6;
    float ResultOfTheFirstTask = (float)a * ((float)b + ((float)c / (float)d));
    std::cout << ResultOfTheFirstTask << std::endl;


    // Задание №2
    std::cout << "Задание №2" << std::endl;
    int e;
    int ResultOfTheSecondTask;
    std::cout << "Пожалуйста, введите целочисленное число - /n" << std::endl;
    std::cin >> e;
    ResultOfTheSecondTask = (e < 21) ? e - 21 : 2 * (e - 21);
    std::cout << ResultOfTheSecondTask << std::endl;
   
    
    // Задание №3
    std::cout << "Задание №3" << std::endl;
  
    float ResultOfTheThirdTask = (float)Constants::f * ((float)Constants::g + ((float)Constants::h / (float)Constants::l));
    std::cout << ResultOfTheThirdTask << std::endl;

    // Задание 4....
    std::cout << "Задание №4, к сожалению, не успел..." << std::endl;


}

