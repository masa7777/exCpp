#include <iostream>
using namespace std;

//�񋓌^Week�̐錾
enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main()
{
   Week w;
   w = SUN;

   switch(w){
      case SUN: cout << "���j�ł��B\n"; break;
      case MON: cout << "���j�ł��B\n"; break;
      case TUE: cout << "�Ηj�ł��B\n"; break;
      case WED: cout << "���j�ł��B\n"; break;
      case THU: cout << "�ؗj�ł��B\n"; break;
      case FRI: cout << "���j�ł��B\n"; break;
      case SAT: cout << "�y�j�ł��B\n"; break;
      default: cout << "���j�������킩��܂���B\n"; break;
   }

   return 0;
}
