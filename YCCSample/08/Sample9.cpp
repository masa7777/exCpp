#include <iostream>
using namespace std;

//swap�֐��̐錾
void swap(int& x, int& y);

int main()
{
   int num1 = 5;
   int num2 = 10;

   cout << "�ϐ�num1�̒l��" << num1 << "�ł��B\n";
   cout << "�ϐ�num2�̒l��" << num2 << "�ł��B\n";
   cout << "�ϐ�num1��num2�̒l���������܂��B\n";

   swap(num1, num2);

   cout << "�ϐ�num1�̒l��" << num1 << "�ł��B\n";
   cout << "�ϐ�num2�̒l��" << num2 << "�ł��B\n";

   return 0;
}

//swap�֐��̒�`
void swap(int& x, int& y)
{
   int tmp;

   tmp = x;
   x = y;
   y = tmp;
}
