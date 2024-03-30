#include <bits/stdc++.h>

using namespace std;

class Rectangle {
public:
    float length;
    float breadth;

    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }

};

int main() {
    
    float x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    Rectangle r(abs(x1 - x2), abs(y1 - y2));

    cout << fixed << setprecision(13) << r.area() << endl;

    return 0;
}
