#include <iostream>
using namespace std;

int main()
{
   int res;

   cout << "���Ԗڂ̏������΂��܂����H�i1�`10�j\n";

   cin >> res;

   for(int i=1; i<=10; i++){
      if(i == res)
         continue;
      cout << i << "�Ԗڂ̏����ł��B\n";
   }

   return 0;
}
