#include <iostream>
using namespace std;

int main()
{
   int res;

   cout << "���ԖڂŃ��[�v�𒆎~���܂����H�i1�`10�j\n";

   cin >> res;

   for(int i=1; i<=10; i++){
      cout << i << "�Ԗڂ̏����ł��B\n";
      if(i == res)
         break;
   }

   return 0;
}

