#include <iostream>
using namespace std;

int main()
{
   char res; 

   cout << "���Ȃ��͒j���ł����H\n";
   cout << "Y�܂���N����͂��Ă��������B\n";

   cin >> res;

   if (res == 'Y' || res == 'y'){
      cout << "���Ȃ��͒j���ł��ˁB\n";
     }
   else if(res == 'N' || res == 'n'){
      cout << "���Ȃ��͏����ł��ˁB\n";
   }
   else{
      cout << "Y��N����͂��Ă��������B\n";
   }

   return 0;
}
