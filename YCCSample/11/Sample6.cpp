#include <iostream>
using namespace std;

//�\���̌^Car�̐錾
struct Car{
   int num;
   double gas;
};

//show�֐��̐錾
void show(Car& c);

int main()
{
   Car car1 = {0, 0.0};

   cout << "�i���o�[����͂��Ă��������B\n";
   cin >> car1.num;

   cout << "�K�\�����ʂ���͂��Ă��������B\n";
   cin >> car1.gas;

   show(car1);

   return 0;
}

//show�֐��̒�`
void show(Car& c)
{
   cout << "�Ԃ̃i���o�[��" << c.num << "�K�\�����ʂ�" << c.gas << "�ł��B\n";
}
