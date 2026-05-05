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