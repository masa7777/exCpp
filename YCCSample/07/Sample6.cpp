#include <iostream>
using namespace std;

//buy�֐��̒�`
int buy(int x, int y)
{
   int z;

   cout << x << "���~��" << y << "���~�̎Ԃ𔃂��܂����B\n";

   z = x+y;

   return z;
}

//buy�֐��̌Ăяo��
int main()
{
   int num1, num2, sum;

   cout << "������̎Ԃ𔃂��܂����H \n";
   cin >> num1;

   cout << "������̎Ԃ𔃂��܂����H \n";
   cin >> num2;

   sum = buy(num1, num2);

   cout << "���v��" << sum << "���~�ł��B\n";

   return 0;
}
