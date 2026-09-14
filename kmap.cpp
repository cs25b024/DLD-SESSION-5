#include <iostream>
using namespace std;
class kmap {
private:
    int a[4][4];
public:
    void input();
    void solve();
};
void kmap::input() {
    cout << "Enter K-map:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
}
void kmap::solve() {
    int row[4] = {0, 1, 3, 2};
    int col[4] = {0, 1, 3, 2};
    cout << "Output column matrix" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int m = row[i] * 4 + col[j];
            int A = (m / 8) % 2;
            int B = (m / 4) % 2;
            int C = (m / 2) % 2;
            int D = m % 2;
            int A1 = 1 - A;
            int B1 = 1 - B;
            int C1 = 1 - C;
            int D1 = 1 - D;
            int t1 = A1 * B1 * D;
            int t2 = A1 * B * C1 * D1;
            int t3 = A * B1 * C;
            int t4 = A * B1 * D1;
            int F = t1 + t2 + t3 + t4;
            if (F >= 1){
                cout << "1" << endl;
	    	}
            else{
				cout << "0" << endl;
	    	}
        }
    }
}
int main() {
    kmap k;
    k.input();
    k.solve();
    return 0;
}
