#include <iostream>
using namespace std;

int main()
{
   int num;
   cout << "1�`9�܂ł̐�����͂��Ă��������B\n";
   cin >> num;

   try{
      if(num <= 0)
         throw "0�ȉ�����͂��܂����B";
      if(num >= 10)
         throw "10�ȏ����͂��܂����B";
      cout << num << "�ł��B\n";
   }

   catch(char* err){
      cout << "�G���[:" << err << '\n';
      return 1;
   }

   return 0;
}
