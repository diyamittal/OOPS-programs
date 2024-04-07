#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void show(){
        cout<<"Base class"<<endl;
    }
};
class Derived1: public Base{
    public:
    void show(){
        cout<<"derived1 class"<<endl;
    }
};
class Derived2: public Base{
    public:
    void show(){
        cout<<"derived2 class"<<endl;
    }
};
int main(){
    Base* ptr;
    Base d;
    ptr = &d;
    ptr->show();
    Derived1 d1;
    Derived2 d2;
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
}