#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
    int area() {
        return (abs(x2 - x1) * abs(y2 - y1));
    }
};

int intersection(struct Rect r1, struct Rect r2) {
    int x_overlap = max(0, min(r1.x1 + r1.x2, r2.x1 + r2.x2) - max(r1.x1, r2.x1));
    int y_overlap = max(0, min(r1.y1 + r1.y2, r2.y1 + r2.y2) - max(r1.y1, r2.y1));
    int overlapArea = x_overlap * y_overlap;
    return overlapArea;
}

int main() {
    struct Rect billboard1, billboard2, truck;
    cin >> billboard1.x1 >> billboard1.y1 >> billboard1.x2 >> billboard1.y2;
    cin >> billboard2.x1 >> billboard2.y1 >> billboard2.x2 >> billboard2.y2;
    cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;

    int billboard1_area = billboard1.area();
    int billboard2_area = billboard2.area();
    int intersection_tr_b1 = intersection(billboard1, truck);
    int intersection_tr_b2 = intersection(billboard2, truck);
    int area = billboard1_area + billboard2_area - (intersection_tr_b1 + intersection_tr_b2);
    cout << area;

}