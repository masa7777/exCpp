#include <iostream>
using namespace std;

int main()
{
   double pi = 3.141592;
   int num;

   cout << "�~�������o�͂��܂��B\n";
   cout << "�L���������ŏo�͂��܂����H(1�`7)\n";
   cin >> num;

   cout.precision(num);

   cout << "�~������" << pi << "�ł��B\n";

   return 0;
}

