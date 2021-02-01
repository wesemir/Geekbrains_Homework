#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	// 1. ������� � ���������������� ���������� ���������� ����� ������
	int a1 = 1;
	short int a2 = 1;
	unsigned short int a3 = 123;
	long int a4 = 111111111;
	unsigned long int a5 = 3333333;
	unsigned int a6 = 1000000;
	char b1 = 'a';
	float c1 = 1.2;
	double d1 = 1.3;
	long double d2 = 2.23;
	bool f1 = true;


	// 2. ������� ������������ � ���������� ���������� �������� ��� ���� � ��������-������

	enum ZeroCross { O, X };


	// 3. ������� ������, ��������� ��������� �������� ������ ������������ � ���������������� ���.

	int Elements[2];
	Elements[0] = O;
	Elements[1] = X;



	// 4. * ������� ��������� ������ ����� ��� ���� � ��������-������ � �������� ��� ����� ������������ ����������

	struct {
		string title="���� ��� ���� � ��������-������";
		char GameBoard[3][3];
		string Player1;
		string Player2;
		string Winner;
	}Game;




	// 5. ** ������� ����������� � ��������� � �������� ������� ������������ ������ ���� �������� � ������ ������ ���������� � �����������

	struct Info {
		union LastTask {
			int V;
			int B;
			int M;
		};
		int is_char : 1;
		int is_upp : 1;
		int is_low : 1;
		int is_dig : 1;
		int is_spc : 1;
	};

}