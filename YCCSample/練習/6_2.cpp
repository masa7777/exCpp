#include <iostream>
using namespace std;

int main()
{
   int num, sum = 0;
   do{
      cout << "�e�X�g�̓_������͂��Ă�������(0�ŏI��)�B\n";
      cin >> num;
      sum += num;
   }while(num);

   cout << "�e�X�g�̍��v�_��" << sum << "�_�ł��B\n";

   return 0;
}
