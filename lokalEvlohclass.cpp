#include <iostream>

using namespace std;

class mage{
private:
	int helthe, armor, deamege;
public:
	class zaklinanie{
	public:
		zaklinanie(){
			cout << "Boom" <<endl;
		}
	};
};

int main(){
	mage::zaklinanie();

	int a; cin >>a;
	return 0;
}