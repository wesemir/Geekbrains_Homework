#include<iostream>
#include <cstdio>
#include <fstream>
#include <cstdlib> 

using namespace std;

void func(char myString1[], char myString2[],const int c) {
    int a = sizeof(myString1)+ sizeof(myString2);
    const int e = 160;

    char arrr[e];

    char *ap = new char[e];
    *ap = arrr[0];

    for (int i = 0; i < 93; i++)
    {
        arrr[i] = myString1[i];

    }
    for (int i = 93; i <159 ; i++)
    {

        arrr[i] = myString2[i-93];

    }
    for (int i = 0; i < 159; i++)
    {
        cout << arrr[i]; // проверка того, что он выведет

    }

    ofstream fin3("text3.txt");
    fin3 << arrr << endl;
    fin3.close();
}



int main(int argc, char** argv[])
{

   // Написать программу, которая создаст два текстовых файла, примерно по 50 - 100 символов в каждом(особого значения не имеет);
   // * Написать программу, которая проверяет присутствует ли указанное пользователем при запуске программы слово в указанном пользователем файле(для простоты работаем только с латиницей).
    const int a = 94;
   const  int b = 66;

    ofstream fin1("text1.txt");
    char myString1[a] ="urayasozdalfileagggggggggggggggggggggtgaaaaaaaaaagggggggggafyussaafaffafafafafafafallllllllll";
    fin1 << myString1 << endl;
    fin1.close();
    
    ofstream fin2("text2.txt");
    char myString2 [b] = "urayasozdalfilefafafafafaffywwwwwwwwwwwwwwwwwwwwwwyyyyaafafafdone";
    fin2 << myString2 << endl;
    fin2.close();
    
   const int c = a + b;
    //Написать функцию, «склеивающую» эти файлы, предварительно буферизуя их содержимое в динамически выделенный сегмент памяти нужного размера.
   
    func(myString1, myString2, c);



}
