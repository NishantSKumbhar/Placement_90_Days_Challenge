#include<iostream>

using namespace std;

class Box{
	int len, bdt, hgt;
	
public:
	Box(int l, int b, int h){
		len = l;
		bdt = b;
		hgt = h;
	}
	

	int getBoxVolume(){
		return len*bdt*hgt;
	}

};



int main(){

	int l,b,h;
	cout<<"Enter the length, breadth, height : ";
	cin>>l>>b>>h;

	Box b1(l,b,h);
	int v = b1.getBoxVolume();
	cout<<"Volume of Box : "<<v<<endl;

	
	
	return 0;
}