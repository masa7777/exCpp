#include <iostream>
using namespace std;

//add�֐��̐錾
void add(int* x1, int* x2, int a);

int main()
{
   int num1 = 0;
   int num2 = 0;
   int ad = 0;

   cout << "2�Ȗڕ��̓_������͂��Ă��������B\n";
   cin >> num1 >> num2;
   cout << "���Z����_������͂��Ă��������B\n";
   cin >> ad;
   add(&num1,&num2,ad);
   cout << ad << "�_���Z���܂����̂�\n";
   cout << "�Ȗ�1��" << num1 << "�_�ƂȂ�܂����B\n";
   cout << "�Ȗ�2��" << num2 << "�_�ƂȂ�܂����B\n";

   return 0;
}

//add�֐��̒�`
void add(int* x1, int* x2, int a)
{
   *x1 += a;
   *x2 += a;
}
