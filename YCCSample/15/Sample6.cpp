#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   vector<int> vt;
   for(int i=0; i<10; i++){
      vt.push_back(i);
   }

   cout << "���בւ��O��";
   vector<int>::iterator it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "�ł��B\n";

   cout << "�t���ɂ����";
   reverse(vt.begin(), vt.end());
   it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "�ł��B\n";

   cout << "���בւ����";
   sort(vt.begin(), vt.end());
   it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "�ł��B\n";
}
