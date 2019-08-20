//
// Created by BPanther on 2019/8/19.
//

#ifndef ALGO_MAIN_H
#define ALGO_MAIN_H

#include <vector>
#include <array>

#define OPTIMAL_VALUE_AND_SOLUTION 2
#define OPTIMAL_VALUE 0
#define OPTIMAL_SOLUTION 1

int cut_rod(std::vector<int> &p, int n);
std::vector<int> cut_rod_aux(std::vector<int> &p, int n);
std::array<std::vector<int>, OPTIMAL_VALUE_AND_SOLUTION> bottom_cut_rod(std::vector<int> &p, int n);

#endif //ALGO_MAIN_H
