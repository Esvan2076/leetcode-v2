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
};