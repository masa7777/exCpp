#include <iostream>
using namespace std;

int main()
{
   int num1, num2;

   cout << "2�̐�������͂��Ă��������B\n";
   cin >> num1 >> num2;
   if (num1 < num2) {
      cout << num1 << "���" << num2 << "�̂ق����傫���l�ł��B\n";
   }
   else if(num1 > num2) {
      cout << num2 << "���" << num1 << "�̂ق����傫���l�ł��B\n";
   }
   else{
      cout << "2�̐��͓����l�ł��B\n";
   }

   return 0;
}
