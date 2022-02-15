#include <iostream.h>
#include <conio.h>
class circle
{
private :
float x, y, pi, rad; public:
circle ()
{ pi=3.14;
}
void accept ()
{
cout <<"enter x co-ordinates \n";
cin >> y;
cout << "enter radius \n";
cin >> rad;
}
void display ()
{
cout << "X-co-ordinate of circle is: " << x << endl;
cout << "Y-co-ordinate of circle is: " << y << endl;
}
void area ()
{
float ar=pi*rad*rad;
cout << " \n Area of the circle is " << cr ;
}
void circum ()
{
float cr=2*pi*rad;
cout << " \n Circuference of the circle is " << cr;
}
};
void main ()
{
clrscr ();
circle c;
c.accept ();
c.display ();
c.area ();
c.circum ();
getch ();
}