#include<iostream>
using namespace std;

class Circle
{ 
	private: 
		int r;
	 
	public: 
		void compute_area(double r){
			r = r;
			
			int area = 3.14*r*r;
			
			cout << "Radius is: " << r << endl;
			cout << "Area is: " << area;
		}
	
};

int main()
{ 
	Circle obj;
	
	obj.compute_area(1.5);
	
	
	return 0;
}
