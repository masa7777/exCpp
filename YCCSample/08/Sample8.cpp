#include <iostream>
using namespace std;

int main()
{
   int a = 5;
   int& rA = a;

   cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
   cout << "�Q��rA�̒l��" << rA << "�ł��B\n";

   rA = 50;

   cout << "rA��50�������܂����B\n";
   cout << "�Q��rA�̒l��" << rA << "�ɕύX����܂����B\n";
   cout << "�ϐ�a�̒l��" << a << "�ɕύX����܂����B\n";
   cout << "�ϐ�a�̃A�h���X��" << &a << "�ł��B\n";
   cout << "�Q��rA�̃A�h���X��" << &rA << "�ł��B\n";

   return 0;
}
