#include <iostream>
using namespace std;

//Point�N���X�̐錾
class Point{
    private:
     int x;
     int y;
   public:
     void setX(int a);
     void setY(int b);
     int getX(){return x;}
     int getY(){return y;}
};

//Point�N���X�����o�֐��̒�`
void Point::setX(int a)
{
   if(a >= 0  && a <= 10)
      x = a;
   else
      x = 0;
}
void Point::setY(int b)
{
   if(b >= 0 && b <= 10)
      y = b;
   else
      y = 0;
}

int main()
{
   Point p;
   int x, y;

   cout << "X���W����͂��Ă��������B\n";
   cin >> x;
   cout << "Y���W����͂��Ă��������B\n";
   cin >> y;
   
   p.setX(x);
   p.setY(y);
   
   cout << "���W��(" << p.getX() << "," << p.getY() << ")�ł��B\n";

   return 0;
}
