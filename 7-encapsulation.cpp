#include <iostream>
using namespace std;
class cal{
    int a;
    int b;
    public:
        int solve(int n){
          a=n;
          b=a*2;
          return b;
      }
};
 
int main() {
  int n;
  cin>>n;
  cal m;
  int ans=m.solve(n);
  cout<<ans<<endl;
    
}