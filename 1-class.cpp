#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
        string ch;
        int salary;
        int age;
        public:
            int getage(int age){
                return age;
            }
            void getname(string ch){
                cout<<"Name of employee is ";
                for(int i=0;i<ch.length();i++){
                    cout<<ch[i];
                }
            }
            int getsalary(int salary){
                return salary;
            }
            
};
int main(){
    Employee emp;
    emp.getname("Diya");
    cout<<endl;
    cout<<"Age is "<<emp.getage(20)<<endl;
    cout<<"Salary is "<<emp.getsalary(200000)<<endl;
}