#include <iostream>
using namespace std;

//count�֐��̐錾
int count(char str[], char c);

int main()
{
   char str[100];
   char ch;

   cout << "���������͂��Ă��������B\n";
   cin >> str;
   cout << "�����񂩂�T����������͂��Ă��������B\n";
   cin >> ch;
   int c = count(str, ch);
   cout << str << "�̒���" << ch << "��" << c << "����܂��B\n";

   return 0;
}

//count�֐��̒�`
int count(char str[], char ch)
{
   int i = 0;
   int c = 0;
   while(str[i]){
      if(str[i] == ch)
        c++;
      i++;
   }
   return c;
}
