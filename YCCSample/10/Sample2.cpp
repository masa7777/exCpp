#include <iostream>
using namespace std;

//count�֐��̐錾
void count();

int a = 0;

//main�֐�
int main()
{
   for(int i=0; i<5; i++)
      count();

  return 0;
}

//count�֐��̒�`
void count()
{
   int b = 0;
   static int c = 0;

   cout << "�ϐ�a��" << a << "�ϐ�b��" << b << "�ϐ�c��" << c << "�ł��B\n";

   a++;
   b++;
   c++;
}
