#include <iostream>
using namespace std;

int main()
{
   int res;

   cout << "整数を入力してください。\n";
   cin >> res;
   
   if(res % 2)
      cout << res << "は奇数です。\n";
   else
      cout << res << "は偶数です。\n";

   return 0;
}
