#include <bits/stdc++.h>

using namespace std;

double maxAreaQuadrilateral(int s1, int s2, int s3, int s4) {
    double s = (s1 + s2 + s3 + s4) / 2.0;
    double area = sqrt((s - s1) * (s - s2) * (s - s3) * (s - s4));
    return area;
}

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    double maxArea = maxAreaQuadrilateral(s1, s2, s3, s4);
    cout << fixed << setprecision(13) << maxArea << endl;
    return 0;
}