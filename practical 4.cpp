#include <iostream.h>
#include <conio.h>
class person
{
public :
virtual void print ()
{
cout << " \n Name of the person assigned through base object is BOB" << endl;
}
};
class student: public person 
{
public:
void print ()
{
cout << "\n Name of the person assign through derived class is TOM" << endl;
}
};
void main()
{
clrsce ();
person *p, x;
p=&x;
p->print ();
getch ();
}