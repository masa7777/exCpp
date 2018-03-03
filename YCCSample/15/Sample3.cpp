#include <iostream>
#include <string>
using namespace std;

//Car�N���X�̐錾
class Car{
   private:
      int num;
      double gas;
      char* pName;
   public:
      Car(char* pN ,int n, double g);
      ~Car();
      Car(const Car& c);
      Car& operator=(const Car& c);
};

//Car�N���X�����o�֐��̒�`
Car::Car(char* pN ,int n, double g)
{
   pName = new char[strlen(pN)+1];
   strcpy_s(pName, strlen(pN)+1, pN);
   num = n;
   gas = g;
   cout << pName << "���쐬���܂����B\n";
}
Car::~Car()
{
   cout << pName << "��j�����܂��B\n";
   delete[] pName;
}
Car::Car(const Car& c)
{
   cout << c.pName << "�ŏ��������܂��B\n";
   pName = new char[strlen(c.pName) + strlen("�̃R�s�[1")+1];
   strcpy_s(pName, strlen(c.pName)+1, c.pName);
   strcat_s(pName, strlen(c.pName) + strlen("�̃R�s�[1")+1, "�̃R�s�[1");
   num = c.num;
   gas = c.gas;
}
Car& Car::operator=(const Car& c)
{
   cout << pName << "��" << c.pName << "�������܂��B\n";
   if(this != &c){
      delete [] pName;
      pName = new char[strlen(c.pName)+strlen("�̃R�s�[2")+1];
      strcpy_s(pName, strlen(c.pName)+1, c.pName);
      strcat_s(pName, strlen(c.pName) + strlen("�̃R�s�[2")+1, "�̃R�s�[2");
      num = c.num;
      gas = c.gas;
   } 
   return *this;
}

int main()
{
   Car mycar("mycar", 1234, 25.5);

   Car car1 = mycar;

   Car car2("car2", 0, 0);
   car2 = mycar;

   return 0;
}
