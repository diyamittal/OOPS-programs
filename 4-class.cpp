#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
        public:
            string ch;
            int salary;
            int age;
            Employee(){
                this->age=25;
                this->salary=200000;
                this->ch="ABC";
            }
            Employee (int x, int y, string name){
                this->ch=name;
                this->age=x;
                this->salary=y;
            }
            ~Employee(){

            }
            void showData(){
                cout<<"Name of employee "<<ch<<endl;
                cout<<"Age is "<<age<<endl;
                cout<<"and Salary is "<<salary<<endl;
            }
};
int main(){
    Employee emp(20, 100000, "Diya");
    Employee emp1;
    emp.showData();
    cout<<endl;
    emp1.showData();
    cout<<endl;
    
}