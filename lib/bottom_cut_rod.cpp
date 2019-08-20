//
// Created by someone on 2019/8/20.
//

#include <vector>
#include <array>
#include <algorithm>
#include <limits>
#include <main.h>

using std::vector;
using std::array;

array<vector<int>, OPTIMAL_VALUE_AND_SOLUTION> bottom_cut_rod(vector<int> &p, int n) {
    vector<int> r(n + 1, -1);
    vector<int> s(n + 1, -1);

    r.front() = 0;
    int q = std::numeric_limits<int>::min();
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= i - 1; ++j) {
            if (q < p.at(i - j - 1) + r.at(j)) {
                q = p.at(i - j - 1) + r.at(j);
                r.at(i) = q;
                s.at(i) = j;
            }
        }
    }

    array<vector<int>, 2> res;
    res.at(OPTIMAL_VALUE) = r;
    res.at(OPTIMAL_SOLUTION) = s;
    return res;
}