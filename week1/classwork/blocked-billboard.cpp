#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
    int area() {
        return (abs(x2 - x1) * abs(y2 - y1));
    }
};

int intersection(struct Rect *p, struct Rect *q) {
	int x = abs(abs(q->x1) - abs(p->x2));
    int y = abs(abs(q->y2) - abs(p->y1));
}

int main() {
    struct Rect billboard1, billboard2, truck;
    cin >> billboard1.x1 >> billboard1.y1 >> billboard1.x2 >> billboard1.y2;
    cin >> billboard2.x1 >> billboard2.y1 >> billboard2.x2 >> billboard2.y2;
    cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;
    int a = billboard1.area();
    int b = billboard2.area();
    int int_b1_tr = intersection(&billboard1, &truck);
    int int_b2_tr = intersection(&billboard2, &truck);
    cout << a + b - int_b1_tr - int_b2_tr << endl;
}