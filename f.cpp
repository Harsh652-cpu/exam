#include<iostream>
using namespace std;
class parent
{
    public:int id_p;
    void parentfunc();
};
void parent :: parentfunc()
{
    cout<<"Parent id is:-"<<id_p;
}
class child:public parent
{
    public:int id_c;
    void childfunc();
};
void child :: childfunc()
{
    cout<<"\nChild id is:-"<<id_c;
}
int main()
{
    child obj;
    obj.id_p=45;
    obj.id_c=32;
    obj.parentfunc();
    obj.childfunc();
}
