#include <iostream>

using namespace std;

class mage{
private:

public:
	mage(int p_x = 0, int p_y =0): x(p_x), y(p_y){}
	int x; int y;

};
mage operator+ (mage left, mage right){
	return mage(left.x + right.x, left.y + right.y);
}

int main(){
	mage Mage1;

	mage p1(10, 40);
	mage p2(-50 , -30);

	mage p3(p1.x + p2.x, p1.y + p2.y);

	mage p4 = p1 + p2;

	cout << p3.x << ' ' << p3.y <<endl;
	cout << p4.x << ' ' << p4.y <<endl;

	int a;
	cin >> a;
	return 0;
}
