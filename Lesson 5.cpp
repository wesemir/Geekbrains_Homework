#include <iostream>

// Задание № 1.

void Change(int Massiv[4])
{
    for (int i = 0; i < 4; i++)
    {
        switch (Massiv[i])
        {
        case 1:
            Massiv[i] = 0;
            break;

        case 0:
            Massiv[i] = 1;
            break;
        }
    }
}


void Change2(int Arr[], int Arr2[], const int Length)
{
    for (int i = 0; i < Length; i++)
    {
        {Arr[i] = Arr2[i]; };
    }
}

int main() {

    int Massiv[4] = { 1,0,1,0 };

    for (int i = 0; i < 4; i++)
    {
        std::cout << Massiv[i] << std::endl;
    }

    Change(Massiv);

    for (int i = 0; i < 4; i++)
    {
        std::cout << Massiv[i] << std::endl;
    }


    // Задание № 2

    const int Length = 8;
    int Arr[Length]{};

    for (int i = 0; i < Length; i++)
    {
        std::cout << Arr[i] << std::endl;
    }

    int Arr2[]{ 1,4,7,10,13,16,19,22 };

    for (int j = 0; j < 8; j++)
    {
        std::cout << Arr2[j] << std::endl;
    }

    Change2(Arr, Arr2, Length);

    for (int i = 0; i < Length; i++)
    {
        std::cout << Arr[i] << std::endl;
    }
}

