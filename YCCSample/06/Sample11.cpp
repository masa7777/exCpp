#include <iostream>
using namespace std;

int main()
{
   int res; 

   cout << "���т���͂��Ă��������B�i1�`5�j\n";

   cin >> res;

   switch(res){
      case 1:
      case 2:
         cout << "������������΂�܂��傤�B\n";
         break;
      case 3:
      case 4:
         cout << "���̒��q�ł���΂�܂��傤�B\n";
         break;
      case 5:
         cout << "�����ւ�D�G�ł��B\n";
         break;
      default:
         cout << "1�`5�܂ł̐��т���͂��Ă��������B\n";
         break;
   }
   
   return 0;
}
