#include<iostream>

using namespace std;

class Date{
	int dd,mm,yy;
public:
	Date(int day, int month, int year){
		dd = day;
		mm = month;
		yy = year;		
	}

	void DisplayDate(){
		cout<<"Date : "<<dd<<" / "<<mm<<" / "<<yy<<endl;
	}

};



int main(){
	Date d1(23,3,2022);
	d1.DisplayDate();
	return 0;
}