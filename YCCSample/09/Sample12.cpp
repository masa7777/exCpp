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

   cout << "�z��str1��" << str1 << "�ł��B\n"; 
   cout << "�z��str2��" << str2 << "�ł��B\n"; 

   cout << "�A�������" << str0 << "�ł��B\n"; 

   return 0;
}
