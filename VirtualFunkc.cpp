#include <iostream>

using namespace std;

class mage{
private:

public:
	virtual void ware(){
		cout << "Use zaklinaney" <<endl;
	}


};

class fireboll : public mage{
private:

public:
	void ware(){
		cout << "Use fireboll" <<endl;
	}
};

class icebolt : public mage{
private:

public:
	void ware(){
		cout << "Use icebolt" <<endl;
	}
};

class lightning : public mage{
private:

public:
	void ware(){
		cout << "Use lightning" <<endl;
	}
};


int main(){
	mage* mag;

	fireboll* fire = new fireboll;
	icebolt* ice = new icebolt;
	lightning* light = new lightning;

	mage* mas[3];
	mas[0] = fire;
	mas[1] = ice;
	mas[2] = light;

	for(int i =0 ; i<3 ; i++){
		mas[i] -> ware();
	};

	int a; cin >> a;
	return 0;
}