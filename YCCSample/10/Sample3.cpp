#include <iostream>
using namespace std;

int main()
{
   int* pA;

   pA = new int;

   cout << "���I�Ƀ��������m�ۂ��܂����B\n";

   *pA = 10;

   cout << "���I�Ɋm�ۂ������������g����" << *pA << "���o�͂��Ă��܂��B\n";

   delete pA;

   cout << "�m�ۂ�����������������܂����B\n";

   return 0;
}
