#include <iostream>
using namespace std;

int main()
{
   int a = 5;
   int b = 10;
   int* pA;

   pA = &a;

   cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
   cout << "�|�C���^pA�̒l��" << pA << "�ł��B\n";	
   cout << "*pA�̒l��" << *pA << "�ł��B\n";

   pA = &b;

   cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
   cout << "�|�C���^pA�̒l��" << pA << "�ɕύX����܂����B\n";
   cout << "*pA�̒l��" << *pA << "�ł��B\n";

   return 0;
}
