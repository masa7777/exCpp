#include <iostream>
using namespace std;

//Car�N���X�̐錾
class Car{
   public:
      int num;
      double gas;
      void show();
};

//Car�N���X�����o�֐��̒�`
void Car::show()
{
   cout << "�Ԃ̃i���o�[��" << num << "�ł��B\n";
   cout << "�K�\�����ʂ�" << gas << "�ł��B\n";
}

int main()
{
   Car car1;

   car1.num = 1234;
   car1.gas = 20.5;

   car1.show();

   return 0;
}
