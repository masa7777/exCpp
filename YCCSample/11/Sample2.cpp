#include <iostream>
using namespace std;

//�\���̌^Car�̐錾
struct Car{
   int num;
   double gas;
};

int main()
{
   Car car1;

   cout << "�i���o�[����͂��Ă��������B\n";
   cin >> car1.num;
   cout << "�K�\�����ʂ���͂��Ă��������B\n";
   cin >> car1.gas;
   cout << "�Ԃ̃i���o�[��" << car1.num << "�F�K�\�����ʂ�" << car1.gas << "�ł��B\n";

   return 0;
}
