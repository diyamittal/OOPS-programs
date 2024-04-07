#include<iostream>
using namespace std;
 
class Hello{
    public:
    void printData(){
        cout<<"Hello World";
    }
};
int main(){
    Hello h;
    h.printData();
    return 0;
}