#include <iostream>
using namespace std;

//max�֐��̐錾
int max(int x, int y);
double max(double x, double y);

int main()
{
   int a, b;
   double da, db;

   cout << "2�̐�������͂��Ă��������B\n";
   cin >> a >> b;

   cout << "2�̏�������͂��Ă��������B\n"; 
   cin >> da >> db;

   int ans1 = max(a, b);
   double ans2 = max(da, db);

   cout << "�����l�̍ő�l��" << ans1 << "�ł��B\n";
   cout << "�����l�̍ő�l��" << ans2 << "�ł��B\n";

   return 0;
}

//max�iint�^�j�֐��̒�`
int max(int x, int y)
{
   if (x > y)
      return x;
   else 
      return y;
}

//max�֐��idouble�^�j�̒�`
double max(double x, double y)
{
   if (x > y)
      return x;
   else 
      return y;
}
