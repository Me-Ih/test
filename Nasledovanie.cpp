#include <iostream>
#include <cstring>

using namespace std;
class mage{
public:
	int health, deamege, armor;
protected:
	mage(){
		health = 10;
		deamege = 10;
		armor = 10;
	}
};
class spec : public mage {
private:
	int hel, dem, arm;

public: 
	spec(){
		hel = health;
		dem  = deamege;
		arm = armor;
	}
	void first(){
		cout << "hel = " << hel << endl;
		cout << "dem = " << dem << endl;
		cout << "arm = " << arm << endl;
	}

};

int main(){
	spec objSpec;
	objSpec.first();
	
	int a;
	cin >> a;
	return 0;
}