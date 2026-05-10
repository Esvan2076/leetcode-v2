#pragma once
#include "TreeNode.hpp"
#include <string>
#include <vector>

class Mate
{
public:
    // 2415. Reverse Odd Levels of Binary Tree
    void solve(TreeNode* left, TreeNode* right, int level);
    TreeNode* reverseOddLevels(TreeNode* root);

    // Auxiliares para el nuevo repo
    void deleteTree(TreeNode* root);

    // 3411. Maximum Subarray With Equal Products
    int maxLength(std::vector<int>& nums);

    // 3417. Zigzag Grid Traversal With Skip
    std::vector<int> zigzagTraversal(std::vector<std::vector<int>>& grid);

    // 3423. Maximum Difference Between Adjacent Elements in a Circular Array
    int maxAdjacentDistance(std::vector<int>& nums);

    // 3427. Sum of Variable Length Subarrays
    int subarraySum(std::vector<int>& nums);

    // 3442. Maximum Difference Between Even and Odd Frequency I
    int maxDifference(std::string s);

    // 3452. Sum of Good Numbers
    int sumOfGoodNumbers(std::vector<int>& nums, int k);
};