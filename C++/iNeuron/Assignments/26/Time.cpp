#include<iostream>

using namespace std;

class Time{
	int h,m,s;
public:
	void setTime(int a, int b, int c){
		h = a;
		m = b;
		s = c;
	}

	void normalize(){
		m = m + s/60;
		s = s % 60;
		h = h + m/60;
		m = m % 60;
	}	

	Time add(Time obj){
		Time newObj;
		newObj.h = h + obj.h;
		newObj.m = m + obj.m;
		newObj.s = s + obj.s;
		newObj.normalize();
		return newObj;
	}

	void showTime(){
		cout<<h<<" hrs : "<<m<<" min : "<<s<<" sec"<<endl;
	}

};

int main(){
	Time t1, t2;
	t1.setTime(2,34, 45);
	t1.showTime();
	t2.setTime(5, 120, 130);
	t2.showTime();
	t2.normalize();
	t2.showTime();

	Time t4 = t1.add(t2);
	t4.showTime();
	return 0;
}