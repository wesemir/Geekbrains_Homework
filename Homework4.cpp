
#include <iostream>

int main()
{
    std::cout << "First task" << std::endl;


    // Задание № 1. Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 (включительно), 
    //если да – вывести true, в противном случае – false;

    int Value1;
    std::cout << "Please, indicate the value" << std::endl;
    std::cin >> Value1;
    if ((Value1 >= 10) && (Value1 <= 20)) {

        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }



    // Задание №2. Написать программу, проверяющую, является ли некоторое число - натуральным простым. 
    // Простое число - это число, которое делится без остатка только на единицу и себя само.

    std::cout << "Second task" << std::endl;
    int Value2;




    std::cout << "Please, indicate the value" << std::endl;

    std::cin >> Value2;

    for (int i = 2; i < sqrt(Value2); i++)
    {
        if (Value2 % i == 0)
        {
            std::cout << "This is a prime number" << std::endl;



        }
        if (Value2 % i != 0)
        {
            std::cout << "This is not a prime number" << std::endl;

        }
        break;
    }




    // Задание № 3. Написать программу, выводящую на экран “истину”, если две целочисленные константы, объявленные в её начале либо равны десяти сами по себе, либо их сумма равна десяти

    std::cout << "Third task" << std::endl;
    const int Value3_1 = 3;
    const int Value3_2 = 7;
    bool Answer_3 = ((((Value3_1 == 10))|| (Value3_2 == 10)) || ((Value3_1+Value3_2)==10));
    std::cout << std::boolalpha << Answer_3<<std::endl;
    std::cout << "Alternative way, We can use 'if' statement. " << std::endl;

    if ((((Value3_1 == 3)) || (Value3_2 == 10)) )
    {
        std::cout << "true" <<std:: endl;
       
        
    }
     else if (((Value3_1 + Value3_2) == 10))
    {
        std::cout << "true" << std::endl;

        
    }
     else
    {
        std::cout << "false" << std::endl;

    }

    // Задание №4. * Написать программу, которая определяет является ли год високосным. Каждый 4-й год является високосным, кроме каждого 100-го, при этом каждый 400-й – високосный.
    // Для проверки работы вывести результаты работы программы в консоль
    unsigned int year;

    std::cout << "Enter year: " << std::endl;
    std::cin >> year;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        std::cout << "This year is a leap year" << std::endl;
    }
    else
    {
        std::cout << "This year is not a leap year";
    } 
    return 0;


}

