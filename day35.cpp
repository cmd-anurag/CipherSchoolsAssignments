#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Ques 1. There is a road, which can be represented as a number line. You are located in the point 0 of the number line, and you want to travel from the point 0 to the point 𝑥, and back to the point 0.

// You travel by car, which spends 1 liter of gasoline per 1 unit of distance travelled. When you start at the point 0, your car is fully fueled (its gas tank contains the maximum possible amount of fuel).

// There are 𝑛 gas stations, located in points 𝑎1,𝑎2,…,𝑎𝑛. When you arrive at a gas station, you fully refuel your car. Note that you can refuel only at gas stations, and there are no gas stations in points 0 and 𝑥.

// You have to calculate the minimum possible volume of the gas tank in your car (in liters) that will allow you to travel from the point 0 to the point 𝑥 and back to the point 0.

// Input
// The first line contains one integer 𝑡 (1≤𝑡≤1000) — the number of test cases.

// Each test case consists of two lines:

// the first line contains two integers 𝑛 and 𝑥 (1≤𝑛≤50; 2≤𝑥≤100);
// the second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (0<𝑎1<𝑎2<⋯<𝑎𝑛<𝑥).
// Output
// For each test case, print one integer — the minimum possible volume of the gas tank in your car that will allow you to travel from the point 0 to the point 𝑥 and back.    Input :- 3
// 3 7
// 1 2 5
// 3 6
// 1 2 5
// 1 10
// 7
// Output :- 4
// 3
// 7


int q1(int n, int x, const vector<int>& gasStations) {
    int maxDistance = max(gasStations[0], x - gasStations[n - 1]);
    for (int i = 1; i < n; ++i) {
        maxDistance = max(maxDistance, gasStations[i] - gasStations[i - 1]);
    }
    return maxDistance;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> gasStations(n);
        for (int i = 0; i < n; ++i) {
            cin >> gasStations[i];
        }
        cout << q1(n, x, gasStations) << endl;
    }
    return 0;
}
