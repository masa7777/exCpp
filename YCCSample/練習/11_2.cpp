#include <iostream>
using namespace std;

//�\���̌^Person�̐錾
struct Person{
   int age;
   double weight;
   double height;
};

//aging�֐��̒�`
void aging(Person* p)
{
   p->age++;
}

int main()
{
   Person ps;

   cout << "�N�����͂��Ă��������B\n";
   cin >> ps.age;
   cout << "�̏d����͂��Ă��������B\n";
   cin >> ps.weight;
   cout << "�g������͂��Ă��������B\n";
   cin >> ps.height;

   cout << "�N��" << ps.age << "�̏d" << ps.weight << "�g��" << ps.height << "�ł��B\n";

   aging(&ps);
   cout << "1�N�o�߂��܂����B\n";

   cout << "�N��" << ps.age << "�̏d" << ps.weight << "�g��" << ps.height << "�ł��B\n";

   return 0;
}
