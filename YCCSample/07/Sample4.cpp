#include <iostream>
using namespace std;

//buy�֐��̒�`
void buy(int x)
{
   cout << x << "���~�̎Ԃ𔃂��܂����B\n";
}

//buy�֐��̌Ăяo��
int main()
{
   int num;

   cout << "1��ڂ͂�����̎Ԃ𔃂��܂����H \n";
   cin >> num;

   buy(num);

   cout << "2��ڂ͂�����̎Ԃ𔃂��܂����H \n";
   cin >> num;

   buy(num);

   return 0;
}
