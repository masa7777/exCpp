#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
   if(argc!=2){
      cout << "�p�����[�^�̐����Ⴂ�܂��B\n";
      return 1;
}

   ifstream fin(argv[1]);
   if(!fin){
      cout << "�t�@�C�����I�[�v���ł��܂���ł����B\n";
      return 1;
   }

   const int num = 8;
   int test[num];
    for(int i=0; i<num; i++){
      fin >> test[i];
   }
   int max = test[0];
   int min = test[0];
   for(int j=0; j<num; j++){
      if(max < test[j])
            max = test[j];
      if(min > test[j])
            min = test[j];
      cout << "No." << j+1 << setw(5) << test[j] << '\n';
   }

   cout << "�ō��_��" << max << "�ł��B\n";
   cout << "�Œ�_��" << min << "�ł��B\n";

   fin.close();

   return 0;
}

