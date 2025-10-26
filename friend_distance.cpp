#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}
    friend double distance(Point, Point);
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1(0, 0), p2(3, 4);
    cout << "Distance: " << distance(p1, p2) << endl;
    return 0;
}