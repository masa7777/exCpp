#include <iostream>
using namespace std;

//squaret�֐��e���v���[�g�̒�`
template <class T>
T squaret(T x)
{
   return x * x;
}

//squaret�֐��̌Ăяo��
int main()
{
   int num1;
   int sq1;
   cout << "��������͂��Ă��������B\n";
   cin >> num1;
   sq1 = squaret(num1);
   cout << num1 << "��2���" << sq1 << "�ł��B\n";

   double num2;
   double sq2;
   cout << "��������͂��Ă��������B\n";
   cin >> num2;
   sq2 = squaret(num2);
   cout << num2 << "��2���" << sq2 << "�ł��B\n";

   return 0;
}
