#include <iostream>
using namespace std;

int main()
{
   int sum = 0;
   int num = 0;

   cout << "1�Ԗڂ̐�������͂��Ă��������B\n";
   cin >> num;
   sum += num;
   cout << "2�Ԗڂ̐�������͂��Ă��������B\n";
   cin >> num;
   sum += num;
   cout << "3�Ԗڂ̐�������͂��Ă��������B\n";
   cin >> num;
   sum += num;

   cout << "3�̐��̍��v��" << sum << "�ł��B\n";

   return 0;
}
