#include <iostream>
using namespace std;

//buy�֐��̒�`
void buy(int x, int y)
{
   cout << x << "���~��" << y << "���~�̎Ԃ𔃂��܂����B\n";
}

//buy�֐��̌Ăяo��
int main()
{
   int num1, num2;

   cout << "������̎Ԃ𔃂��܂����H \n";
   cin >> num1;

   cout << "������̎Ԃ𔃂��܂����H \n";
   cin >> num2;

   buy(num1, num2);

   return 0;
}
