#include <iostream>
using namespace std;

//Car�N���X�̐錾
class Car{
   private:
      int num;
      double gas;
   public:
      void show();
      void setNumGas(int n, double g);
};

//Car�N���X�����o�֐��̒�`
void Car::show()
{
   cout << "�Ԃ̃i���o�[��" << num << "�ł��B\n";
   cout << "�K�\�����ʂ�" << gas << "�ł��B\n";
}
void Car::setNumGas(int n, double g)
{
   if(g > 0 && g < 1000){
      num = n;
      gas = g;
      cout << "�i���o�[��" << num << "�ɃK�\�����ʂ�" << gas << "�ɂ��܂����B\n";
   }
   else{
      cout << g << "�͐������K�\�����ʂł͂���܂���B\n";
      cout << "�K�\�����ʂ�ύX�ł��܂���ł����B\n";
   }
}

int main()
{
   Car car1;

   //���̂悤�ȃA�N�Z�X�͂ł��Ȃ��Ȃ�܂��B
   //car1.num = 1234;
   //car1.gas = 20.5;

   car1.setNumGas(1234, 20.5);
   car1.show();

   cout << "�������Ȃ��K�\�����ʂ��i-10.0�j���w�肵�Ă݂܂��c�B\n";
   car1.setNumGas(1234, -10.0);
   car1.show();

   return 0;
}
