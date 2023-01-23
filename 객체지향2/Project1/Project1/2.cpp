#include <iostream>
#include <string>
using namespace std;

class Shape {
private:
	int x, y;
public:
	Shape() {
		cout << "Shape 생성자" << endl;
	}
	~Shape() {
		cout << "Shape 소멸자" << endl;
	}
	Shape(int xloc, int yloc) {
		xloc = x;
		yloc = y;
		cout << "Shape 생성자" << endl;
	}
};

class Rectangle : public Shape {
private:
	int width, height;
public:
	Rectangle(int x, int y, int w, int h) : Shape(x, y) {
		width = w;
		height = h;
		cout << "Rectangle 생성자" << endl;
	}
	~Rectangle() {
		cout << "Rectangle 소멸자" << endl;
	}
};

int main()
{
	Rectangle r(0, 0, 100, 100);
	return 0;
}