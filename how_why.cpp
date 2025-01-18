	#include <iostream>
	using namespace std;

	class Point
	{
	private:
		int* x;
		int* y;
	public:
		Point(int x, int y) : x(&x), y(&y) {};
		friend const void print(Point  *point);
		friend ostream& operator <<(ostream& print, Point* point);

		~Point() { delete x; delete y; }
	};

	const void print(Point *point) { cout << "(" << *point->x << ", " << *point->y << ")" << endl; }
	ostream& operator <<(ostream& print, Point* point)
	{
		print << "(" << *point->x << ", " << *point->y << ")" << endl;
		return print;
	}

	int main()
	{
		Point* point = new Point(1, 2);
		print(point);
		cout << point;
		print(point);
	}