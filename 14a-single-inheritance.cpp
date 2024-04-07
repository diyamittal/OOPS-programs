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
int main(){
    Dog o1;

    o1.age=24;
    o1.name="Tommy";
    cout<<"Dog age is "<<o1.age<<" and name is "<<o1.name;
    return 0;
}