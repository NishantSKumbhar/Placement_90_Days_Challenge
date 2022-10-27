#include<iostream>

using namespace std;


class Phone{
public:
	int price;
	Phone(int a){

	}
private:
	void prifun(){
		cout << "This is Private Function of Phone" << endl;
	}

protected:
	void profun(){
		cout << "This is Protected Function of Phone" << endl;
	}
public:
	void pubfun(){
		cout << "This is Public Function of Phone" << endl;
	}

};

class Mobile : public Phone{
public:
	Mobile():Phone(2){

	}
private:
	
	void prifunM(){
		cout << "This is Private Function of Mobile" << endl;
	}

protected:
	void profunM(){
		cout << "This is Protected Function of Mobile" << endl;
	}
public:
	void pubfunM(){
		cout << "This is Public Function of Mobile" << endl;
		pubfun();
		profun();
		// p.prifun();
	}
};
int main(){
	
	// Phone p1;
	// p1.prifun(); 
	// p1.profun();	
	// p1.pubfun();

	Mobile m1;
	m1.pubfunM();
	return 0;
}