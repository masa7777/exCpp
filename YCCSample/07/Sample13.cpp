#include <iostream> 
using namespace std;

//�֐��e���v���[�g
template <class T>
T maxt(T x, T y)
{
   if(x > y)
      return x;
   else
      return y;
}

//�֐��e���v���[�g�̗��p
int main()
{
   int a, b;
   double da, db;

   cout << "2�̐�������͂��Ă��������B\n";
   cin >> a >> b;

   cout << "2�̏�������͂��Ă��������B\n"; 
   cin >> da >> db;

   int ans1 = maxt(a, b);
   double ans2 = maxt(da, db);

   cout << "�����l�̍ő�l��" << ans1 << "�ł��B\n";
   cout << "�����l�̍ő�l��" << ans2 << "�ł��B\n";

   return 0;
}
