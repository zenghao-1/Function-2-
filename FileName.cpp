#include <iostream>
float PI = 3.1415;
using namespace std;
class Point
{
private:
	int x, y, r;
public:
	Point();
	Point(int x,int y,int r);
	float S(int r);
	float V(int r);
};

int main()
{
	int x, y,r;
	cout << "输入球心：";
	cin >> x >> y;
	cout << "输入球半径：";
		cin >> r;
		Point A(x, y, r);
		cout << "球的表面积：" << A.S(r) << endl << "球的体积：" << A.V(r) << endl;
}

Point::Point()
{
	x = 0; y = 0; r = 0;
}

Point::Point(int x, int y,int r)
{
	cout << "圆心(" << x << "," << y << ")" << "半径：" << r << endl;
}

float Point::S(int r)
{
	return 4 * PI * (r ^ 2);
}

float Point::V(int r)
{
	return (static_cast<float>(4) / 3) * PI * (r ^ 3);
}
