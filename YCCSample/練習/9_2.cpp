#include <iostream>
using namespace std;

//length�֐��̐錾
int length(char* c);

int main()
{
   char str[100];
   cout << "���������͂��Ă��������B\n";
   cin >> str;
   int ln = length(str);
   cout << "������̒�����" << ln << "�ł��B\n";

   return 0;
}

//length�֐��̒�`
int length(char* c)
{
   int i = 0;
   while(c[i]){
      i++;
   }
   return i;
}
