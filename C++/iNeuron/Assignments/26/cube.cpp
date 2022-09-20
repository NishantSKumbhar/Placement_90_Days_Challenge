#include<iostream>

using namespace std;

class Cube{
	int a;
public:
	Cube(int x) : a(x){
	}

	int getCubeVolume(){
		return a*a*a;
	}
};

int main(){
	Cube c1(2);
	int a = c1.getCubeVolume();
	cout<<"Volume of Cube : "<<a<<endl;
	return 0;
}