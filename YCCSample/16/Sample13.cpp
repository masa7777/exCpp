#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   ifstream fin("test1.txt");
   if(!fin){
      cout << "�t�@�C�����I�[�v���ł��܂���ł����B\n";
      return 1;
   }

   char str1[16];
   char str2[16];
   fin >> str1 >> str2;
   cout << "�t�@�C���ɏ������܂�Ă��镶�����\n";
   cout << str1 << "�ł��B\n";
   cout << str2 << "�ł��B\n";

   fin.close();

   return 0;
}
