#include <iostream>
using namespace std;

//�\���̌^Person�̐錾
struct Person{
   int age;
   double weight;
   double height;
};

int main()
{
   Person ps[2];

   for(int i=0; i<2; i++){
      cout << "�N�����͂��Ă��������B\n";
      cin >> ps[i].age;
      cout << "�̏d����͂��Ă��������B\n";
      cin >> ps[i].weight;
      cout << "�g������͂��Ă��������B\n";
      cin >> ps[i].height;
   }

   for(int j=0; j<2; j++){
      cout << "�N��" << ps[j].age << "�̏d" << ps[j].weight << "�g��" << ps[j].height << "�ł��B\n";
}
   return 0;
}
