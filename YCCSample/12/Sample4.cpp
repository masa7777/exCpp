#include <iostream>
using namespace std;

//Car�N���X�̐錾
class Car{
   private:
      int num;
      double gas;
   public:
      int getNum(){return num;}
      double getGas(){return gas;}
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

//buy�֐��̐錾
void buy(Car* pC);

int main()
{
   Car car1;

   car1.setNumGas(1234, 20.5);

   buy(&car1);

   return 0;
}

//buy�֐��̒�`
void buy(Car* pC)
{
    int n = pC->getNum();
    double g = pC->getGas();
    cout << "�i���o�[" << n << "�K�\������" << g << "�̎Ԃ��w�����܂����B\n";
}
