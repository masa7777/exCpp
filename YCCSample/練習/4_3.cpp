#include <iostream>
using namespace std;

int main()
{
   int sum=0, num=0;

   cout << "�Ȗ�1�̓_������͂��Ă��������B\n";
   cin >> num;
   sum += num;
   cout << "�Ȗ�2�̓_������͂��Ă��������B\n";
   cin >> num;
   sum += num;
   cout << "�Ȗ�3�̓_������͂��Ă��������B\n";
   cin >> num;
   sum += num;
   cout << "�Ȗ�4�̓_������͂��Ă��������B\n";
   cin >> num;
   sum += num;
   cout << "�Ȗ�5�̓_������͂��Ă��������B\n";
   cin >> num;
   sum += num;
   cout << "5�Ȗڂ̍��v�_��" << sum << "�_�ł��B\n";
   cout << "5�Ȗڂ̕��ϓ_��" << (double)sum/5 << "�_�ł��B\n";

   return 0;
}
