#include "Mate.hpp"

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <print>
#include <array>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <queue>

// 2415. Reverse Odd Levels of Binary Tree
void Mate::solve(TreeNode* left, TreeNode* right, int level) {
    if (left == nullptr || right == nullptr) return; //

    if (level % 2 != 0) {
        std::swap(left->val, right->val); //
    }

    solve(left->left, right->right, level + 1); //
    solve(left->right, right->left, level + 1); //
}

TreeNode* Mate::reverseOddLevels(TreeNode* root) {
    solve(root->left, root->right, 1); //
    return root; //
}

void Mate::deleteTree(TreeNode* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// 3411. Maximum Subarray With Equal Products
int Mate::maxLength(std::vector<int>& nums) {
    int res = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        long long prod = 1;
        int common_gcd = nums[i];
        long long common_lcm = nums[i];

        for (size_t j = i; j < nums.size(); ++j) {
            prod *= nums[j];
            common_gcd = std::gcd(common_gcd, nums[j]);
            common_lcm = std::lcm(common_lcm, (long long)nums[j]);

            if (prod == common_gcd * common_lcm) {
                res = std::max(res, (int)(j - i + 1));
            }
        }
    }
    return res;
}

// 3417. Zigzag Grid Traversal With Skip
std::vector<int> Mate::zigzagTraversal(std::vector<std::vector<int>>& grid) {
    std::vector<int> res;
    bool skip = false;
    for (size_t i = 0; i < grid.size(); ++i) {
        if (i % 2 == 0) {
            for (size_t j = 0; j < grid[0].size(); ++j) {
                if (!skip) res.push_back(grid[i][j]);
                skip = !skip;
            }
        }
        else {
            for (int j = (int)grid[0].size() - 1; j >= 0; --j) {
                if (!skip) res.push_back(grid[i][j]);
                skip = !skip;
            }
        }
    }
    return res;
}

// 3423. Maximum Difference Between Adjacent Elements in a Circular Array
int Mate::maxAdjacentDistance(std::vector<int>& nums) {
    int res = std::abs(nums[0] - nums[nums.size() - 1]);
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        res = std::max(res, std::abs(nums[i] - nums[i + 1]));
    }
    return res;
}

// 3427. Sum of Variable Length Subarrays
int Mate::subarraySum(std::vector<int>& nums) {
    int res = 0;
    for (int i = 0; i < (int)nums.size(); ++i) {
        int start = std::max(0, i - nums[i]);
        for (int j = start; j <= i; ++j) {
            res += nums[j];
        }
    }
    return res;
}

// 3442. Maximum Difference Between Even and Odd Frequency I
int Mate::maxDifference(std::string s) {
    std::unordered_map<char, int> map;
    for (char c : s) map[c]++;

    int max_odd = INT_MIN;
    int min_even = INT_MAX;

    for (auto const& [key, val] : map) {
        if (val % 2 != 0) max_odd = std::max(max_odd, val);
        else min_even = std::min(min_even, val);
    }
    return max_odd - min_even;
}

// 3452. Sum of Good Numbers
int Mate::sumOfGoodNumbers(std::vector<int>& nums, int k) {
    int res = 0;
    int n = (int)nums.size();
    for (int i = 0; i < n; ++i) {
        bool good = true;
        if (i - k >= 0 && nums[i] <= nums[i - k]) good = false;
        if (i + k < n && nums[i] <= nums[i + k]) good = false;
        if (good) res += nums[i];
    }
    return res;
}