#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   ofstream fout("test1.txt");
   if(!fout){
      cout << "�t�@�C�����I�[�v���ł��܂���ł����B\n";
      return 1;
   }
   else
      cout  << "�t�@�C�����I�[�v�����܂����B\n";

   fout << "Hello!\n";
   fout << "Goodbye!\n";
   cout << "�t�@�C���ɏ������݂܂����B\n";

   fout.close();

   return 0;
}
