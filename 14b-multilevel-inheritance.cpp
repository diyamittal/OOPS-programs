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
class Puppy: public Dog{
    public:
        string breed;
};
int main(){
    Dog o1;
    Puppy o2;

    o1.age=24;
    o1.name="Tommy";

    o2.age=12;
    o2.name="Sheero";
    o2.breed="German-Shephard";
    cout<<"Dog age is "<<o1.age<<" name is "<<o1.name<<endl;
    cout<<"Puppy age is "<<o2.age<<" name is "<<o2.name<<" and breed is "<<o2.breed<<endl;
    return 0;
}