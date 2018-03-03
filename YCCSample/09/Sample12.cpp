#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char str0[20];
   char str1[10];
   char str2[10];

   strcpy_s(str1, 10, "Hello");
   strcpy_s(str2, 10, "Goodbye");
   strcpy_s(str0, 20, str1);
   strcat_s(str0, 20, str2);

   cout << "配列str1は" << str1 << "です。\n"; 
   cout << "配列str2は" << str2 << "です。\n"; 

   cout << "連結すると" << str0 << "です。\n"; 

   return 0;
}
