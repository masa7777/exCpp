#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   ofstream fout("test0.txt");
   if(!fout){
      cout << "�t�@�C�����I�[�v���ł��܂���ł����B\n";
      return 1;
   }
   else
      cout  << "�t�@�C�����I�[�v�����܂����B\n";

   fout.close();
   cout  << "�t�@�C�����N���[�Y���܂����B\n";

   return 0;
}
