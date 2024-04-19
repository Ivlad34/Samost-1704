#include <iostream>
#include <vector>
using namespace std;

vector <int> Fier(vector <int> n, int v) {
    vector<int> res(n.size());
    for (int i = 0; i < n.size(); i++)
        res[i] = n[i];

    for (int i = 0; i < n.size(); i++) {
        res[i] += v;
    }
    return res;
}

int main()
{
    vector <int> i = { 1,2,3,4 };
    int n = 1;
    vector <int> i2 = Fier(i, n);
    // vector <int> proverka = { 2,3,4,5 }; 
    // ASSERT_EQ(i2, actual); 
}