#include <iostream>

// Задание №1

#define COMPARE(a,b) (((a > b) && (a <= 0)) || ((a < b) && (a >= 0)))

// Задание №2

#define elementArr(arr) (*(*(arr+3)+ 5))

using namespace std;
int main(int argc, const char * argv[]) {
  
   // Задание №1
    
    int a = 0;
    int b = 9;
    
    cout << COMPARE(a,b) << endl;

  
    // Задание №2
    
    int rows = 6;
    int cols = 10;
    
    // создание массива
    
    int **arr = new int* [rows];
    
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 25;
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << elementArr(arr) << endl;
    
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    
}
