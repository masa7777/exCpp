#include <iostream>
using namespace std;

//square�֐��̐錾
int square(int x);

//sqr�֐��̌Ăяo��
int main()
{
   int num1;
   int sq1;
   cout << "��������͂��Ă��������B\n";
   cin >> num1;
   sq1 = square(num1);
   cout << num1 << "��2���" << sq1 << "�ł��B\n";

   return 0;
}

//square�֐��̒�`
int square(int x)
{
   return x * x;
}
