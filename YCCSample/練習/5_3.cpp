#include <iostream>
using namespace std;

int main()
{
   int res;

   cout << "���т���͂��Ă��������B\n";
   cin >> res;
   
   cout << "���т�" << res <<"�ł��B";
   
   switch(res){
   case 1:
      cout << "�����Ƃ���΂�܂��傤�B\n";
      break;
   case 2:
      cout << "������������΂�܂��傤�B\n";
      break;
   case 3:
      cout << "����ɏ���߂����܂��傤�B\n";
      break;
   case 4:
      cout << "�����ւ�悭�ł��܂����B\n";
      break;
   case 5:
      cout << "�����ւ�D�G�ł��B\n";
      break;
   }

   return 0;
}
