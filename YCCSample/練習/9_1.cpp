#include <iostream>
using namespace std;

//max�֐��̐錾
int max(int x[]);

int main()
{
   int test[5];
   cout << "�e�X�g�̓_������͂��Ă��������B\n";
   for(int i=0; i<5; i++){
      cin >> test[i];
   }
   int m = max(test);
   cout << "�ō��_��"<< m << "�_�ł��B\n";

   return 0;
}

//max�֐��̒�`
int max(int x[])
{
   int m = x[0];
   for(int i=1; i<5; i++){
      if(m < x[i])
         m = x[i];
   }

   return m;
}
