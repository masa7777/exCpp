#include <iostream>
using namespace std;

//max�֐��̐錾
int max(int x, int y);


//max�֐��̌Ăяo��
int main()
{
   int num1, num2, ans;

   cout << "1�Ԗڂ̐�������͂��Ă��������B\n";
   cin >> num1;

   cout << "2�Ԗڂ̐�������͂��Ă��������B\n";
   cin >> num2;

   ans = max(num1, num2);

   cout << "�ő�l��" << ans << "�ł��B\n";

   return 0;
}

//max�֐��̒�`
int max(int x, int y)
{
   if (x > y)
      return x;
   else
      return y;
}
