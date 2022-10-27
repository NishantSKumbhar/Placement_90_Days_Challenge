#include<iostream>

using namespace std;

class Flight{
public:
	void serach(){
		cout << "seraching flight ..." << endl;
	}

	virtual void book(){
		cout << "Flight booked !\n" << endl;
	}
};

class AirIndia : public Flight{
public:
	void book(){
		cout << "AirIndia Flight booked !\n" << endl;
	}
};


class SpiecJet : public Flight{
public:
	void book(){
		cout << "SpiecJet Flight booked !\n" << endl;
	}

};

class Indigo : public Flight{
public:
	void book(){
		cout << "Indigo Flight booked !\n" << endl;
	}

};

int main(){
	
	Flight *f1, *f2, *f3;

	AirIndia a1;
	SpiecJet s1;
	Indigo i1;
	// f1->serach();
	// f1->book();
	
	f1 = &a1;
	f1->serach();
	f1->book();

	f2 = &s1;
	f2->serach();
	f2->book();

	f3 = &i1;
	f3->serach();
	f3->book();

	return 0;
}