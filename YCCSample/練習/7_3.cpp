#include <iostream>
using namespace std;

//square�֐��̐錾
int square(int x){return x*x;};
double square(double x){return x*x;};

//square�֐��̌Ăяo��
int main()
{
   int num1;
   int sq1;
   cout << "��������͂��Ă��������B\n";
   cin >> num1;
   sq1 = square(num1);
   cout << num1 << "��2���" << sq1 << "�ł��B\n";

   double num2;
   double sq2;
   cout << "��������͂��Ă��������B\n";
   cin >> num2;
   sq2 = square(num2);
   cout << num2 << "��2���" << sq2 << "�ł��B\n";

   return 0;
}
