#include <iostream>
using namespace std;

//���p�̌^Year�̐錾
union Year{
   int ad;
   int gengo; 
};

int main()
{
   Year myyear;

   cout << "����N����͂��Ă��������B\n";
   cin >> myyear.ad;

   cout << "�����" << myyear.ad << "�ł��B\n";
   cout << "������" << myyear.gengo << "�ł��B\n";

   cout << "��������͂��Ă��������B\n";
   cin >> myyear.gengo;

   cout << "������" << myyear.gengo << "�ł��B\n";
   cout << "�����" << myyear.ad << "�ł��B\n";

   return 0;
}
