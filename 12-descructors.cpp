#include <iostream>
using namespace std;
 
class CheckDestr {
public:
    CheckDestr(){
        cout << "Constructor executed"<<endl;
    }
 
    ~CheckDestr() { cout << "Destructor executed"; }
};
main()
{
    CheckDestr t;
 
    return 0;
}