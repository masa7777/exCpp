#include <iostream>
using namespace std;

//func�֐��̐錾
void func();

int a = 0; 

//main�֐�
int main()
{
   int b = 1;

   cout << "main�֐��ł͕ϐ�a��b���g���܂��B\n";
   cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
   cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
   //cout << "�ϐ�c�̒l��" << c << "�ł��B\n";

   func();

   return 0;
}

//func�֐��̒�`
void func()
{
   int c = 2;

   cout << "func�֐��ł͕ϐ�a��c���g���܂��B\n";
   cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
   //cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
   cout << "�ϐ�c�̒l��" << c << "�ł��B\n";
}
