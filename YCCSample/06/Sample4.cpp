#include <iostream>
using namespace std;

int main()
{
   int num;
   int sum = 0;

   cout << "�����܂ł̍��v�����߂܂����H\n";

   cin >> num;

   for(int i=1; i<=num; i++){
      sum += i; 
   }

   cout << "1����" << num << "�܂ł̍��v�l��" << sum << "�ł��B\n";

   return 0;
}
