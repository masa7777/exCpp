#include <iostream>
using namespace std;

int main()
{
   int a = 1;
   int b = 0;

   cout << "short int�^�̃T�C�Y��" << sizeof(short int) << "�o�C�g�ł��B\n";
   cout << "int�^�̃T�C�Y��" << sizeof(int) << "�o�C�g�ł��B\n";
   cout << "long int�^�̃T�C�Y��" << sizeof(long int) << "�o�C�g�ł��B\n";
   cout << "float�^�̃T�C�Y��" << sizeof(float) << "�o�C�g�ł��B\n";
   cout << "double�^�̃T�C�Y��" << sizeof(double) << "�o�C�g�ł��B\n";
   cout << "long double�^�̃T�C�Y��" << sizeof(long double) << "�o�C�g�ł��B\n";
   cout << "�ϐ�a�̃T�C�Y��" << sizeof(a) << "�o�C�g�ł��B\n";
   cout << "��a+b�̃T�C�Y��" << sizeof(a+b) << "�o�C�g�ł��B\n";

   return 0;
}
