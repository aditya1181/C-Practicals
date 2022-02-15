#include <iostream.h>
#include <conio.h>
void swap (int *x, int *y);
void main ()
{
clrscr ();
int a=10, b=20;
cout << "Before swap \n";
cout << "a=" << a << "b=" << b << endl;
swap (&a, &b);
cout << "After swap \n";
cout << "a=" << a << "b=" << b << endl;
getch ();
}
void swap (int *x, int *y)
{int temp = *x;
*x = *y;
*y = temp;
}