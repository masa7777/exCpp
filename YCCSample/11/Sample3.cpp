#include <iostream>
using namespace std;

//�\���̌^Car�̐錾
struct Car{
   int num;
   double gas;
};

int main()
{
   Car car1 = {1234, 25.5};
   Car car2 = {4567, 52.2};

   cout << "car1�̎Ԃ̃i���o�[��" << car1.num << "�K�\�����ʂ�" << car1.gas << "�ł��B\n";
   cout << "car2�̎Ԃ̃i���o�[��" << car2.num << "�K�\�����ʂ�" << car2.gas << "�ł��B\n";

   car2 = car1;

   cout << "car1��car2�ɑ�����܂����B\n";

   cout << "car2�̎Ԃ̃i���o�[��" << car2.num << "�K�\�����ʂ�" << car2.gas << "�ł��B\n";

   return 0;
}
