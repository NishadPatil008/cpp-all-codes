#include <iostream>
using namespace std;

class xyz {
public:
    int length, breadth, side, area;

    void calculateArea(int len, int br) {
        length = len;
        breadth = br;
        area = length * breadth;
    }

    void calculateArea(int s) {
        side = s;
        area = side * side;
    }
};

int main() {
    xyz a;
    cout << "Enter length and breadth of rectangle: ";
    cin >> a.length >> a.breadth;
    a.calculateArea(a.length, a.breadth);
    cout << "Area of rectangle: " << a.area << endl;

    xyz b;
    cout << "Enter side of square: ";
    cin >> b.side;
    b.calculateArea(b.side);
    cout << "Area of square: " << b.area << endl;

    return 0;
}