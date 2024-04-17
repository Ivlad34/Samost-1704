#include <iostream>
#include <vector>
using namespace std;

void Fier(vector <int> n, int v ) {
    for (int i = 0; i < n.size(); i++) {
        n[i] += v;
    }
    for (auto i : n) {
        cout << i << "\n";
    }
}

int main()
{
    vector <int> i = { 1,2,3,4 };
    int n = 1;
    Fier(i, n);
}
