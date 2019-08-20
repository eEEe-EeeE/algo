//
// Created by BPanther on 2019/8/19.
//

#include <limits>
#include <algorithm>
#include <vector>

using std::vector;

int cut_rod(vector<int> &p, int n) {
    if (n == 0)
        return 0;
    int q = std::numeric_limits<int>::min();
    for (int i = 1; i <= n; ++i) {
        q = std::max(q, p.at(i - 1) + cut_rod(p, n - i));
    }
    return q;
}