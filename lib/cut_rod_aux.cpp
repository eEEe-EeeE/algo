//
// Created by someone on 2019/8/20.
//
#include <vector>
#include <limits>
#include <algorithm>

using std::vector;

int cut_rod_mem(vector<int> &p, int n, vector<int> &r) {

    if (r.at(n) >= 0)
        return r.at(n);
    int q = std::numeric_limits<int>::min();
    for (int i = 1; i <= n; ++i) {
        q = std::max(q, p.at(i - 1) + cut_rod_mem(p, n - i, r));
    }
    r.at(n) = q;
    return q;
}

vector<int> cut_rod_aux(vector<int> &p, int n) {
    vector<int> r(n + 1, -1);
    r.front() = 0;
    cut_rod_mem(p, n, r);
    return r;
}

