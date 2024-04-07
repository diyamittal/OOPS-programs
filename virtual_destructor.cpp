#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"This is base constructor"<<endl;
    }
    virtual ~Base(){
        cout<<"This is base class destructor"<<endl;
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"This is derived constructor"<<endl;
    }
    ~Derived(){
        cout<<"This is derived class destructor"<<endl;
    }
};
int main(){
    Base* ptr;
    ptr=new Derived;
    delete ptr;
}