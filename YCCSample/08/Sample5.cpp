#include <iostream>
using namespace std;

int main()
{
   int a;
   int* pA;

   a = 5;
   pA = &a;

   cout << "�ϐ�a�̒l��" << a << "�ł��B\n";

   *pA = 50;

   cout << "*pA��50�������܂����B\n";
   cout << "�ϐ�a�̒l��" << a << "�ł��B\n";

   return 0;
}
