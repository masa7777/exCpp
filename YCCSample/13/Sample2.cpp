#include <iostream>
using namespace std;

//Car�N���X�̐錾
class Car{
   private:
      int num;
      double gas;
   public:
      Car();
      Car(int n, double g);
      void show();
};

//Car�N���X�����o�֐��̒�`
Car::Car()
{
   num = 0;
   gas = 0.0;
   cout << "�Ԃ��쐬���܂����B\n";
}
Car::Car(int n, double g)
{
   num = n;
   gas = g;
   cout << "�i���o�[" << num << "�K�\������" << gas <<"�̎Ԃ��쐬���܂����B\n";
}
void Car::show()
{
   cout << "�Ԃ̃i���o�[��" << num << "�ł��B\n";
   cout << "�K�\�����ʂ�" << gas << "�ł��B\n";
}

int main()
{
   Car car1;
   Car car2(1234, 20.5);

   return 0;
}
