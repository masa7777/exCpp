#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   ofstream fout("test2.txt");
   if(!fout){
      cout << "�t�@�C�����I�[�v���ł��܂���ł����B\n";
      return 1;
   }

   const int num = 5;
   int test[num];
   cout << num <<"�l�̓_������͂��Ă��������B\n";
   for(int i=0; i<num; i++){
      cin >> test[i];
   }

   for(int j=0; j<num; j++){
      fout << "No." << j+1 << setw(5) << test[j] << '\n';
   }

   fout.close();

   return 0;
}
