#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int num;
   vector<int> vt;

   cout << "���������f�[�^����͂��܂����H\n";
   cin >> num;

   for(int i=0; i<num;i++){
      int data;
      cout << "��������͂��Ă��������B\n";
      cin >> data;
      vt.push_back(data);
   }

   cout << "�\�����܂��B\n";
   vector<int>::iterator it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      cout << "-";
      it++;
   }
   cout << "\n";
}
