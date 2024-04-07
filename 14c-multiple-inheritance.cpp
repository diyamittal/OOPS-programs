#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
        int age;
};
class Dog: public Animal{
    public:
        string name;
};
class Cat: public Animal{
    public:
        string meow;
};
int main(){
    Dog o1;
    Cat o2;

    o1.age=24;
    o1.name="Tommy";

    o2.age=15;
    o2.meow="sweet";
    cout<<"Dog age is "<<o1.age<<" and name is "<<o1.name<<endl;
    cout<<"Cat age is "<<o2.age<<" and meow is "<<o2.meow<<endl;
    return 0;
}