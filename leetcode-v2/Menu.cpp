#include "Menu.hpp"

#include <iostream>
#include <vector>
#include "Mate.hpp"

void Menu::menuReverseOddLevels() {
    std::cout << "--- 2415. Reverse Odd Levels ---" << std::endl;
    std::cout << "Creando arbol de ejemplo [2,3,5,8,13,21,34]..." << std::endl;

    // Construcción manual del árbol perfecto del ejemplo
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(3, new TreeNode(8), new TreeNode(13));
    root->right = new TreeNode(5, new TreeNode(21), new TreeNode(34));

    std::cout << "Arbol original (Level order): 2 | 3 5 | 8 13 21 34" << std::endl;

    root = m.reverseOddLevels(root);

    std::cout << "Arbol revertido (Niveles impares): ";
    // El nivel 1 (3 y 5) debería intercambiarse
    std::cout << root->val << " | " << root->left->val << " " << root->right->val
        << " | " << root->left->left->val << "..." << std::endl;

    m.deleteTree(root);
    std::cout << std::endl;
}

void Menu::menuMaxLength() {
    int n, v; std::vector<int> nums;
    std::cout << "--- 3411. Max Subarray Equal Products ---" << std::endl;
    std::cout << "Cant. elementos: "; std::cin >> n;
    for (int i = 0; i < n; i++) { std::cin >> v; nums.push_back(v); }
    std::cout << "Resultado: " << m.maxLength(nums) << std::endl << std::endl;
}

void Menu::menuZigzag() {
    int r, c, v;
    std::cout << "--- 3417. Zigzag Grid Traversal ---" << std::endl;
    std::cout << "Filas y Columnas: "; std::cin >> r >> c;
    std::vector<std::vector<int>> grid(r, std::vector<int>(c));
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) std::cin >> grid[i][j];
    std::vector<int> res = m.zigzagTraversal(grid);
    std::cout << "Resultado: ";
    for (int x : res) std::cout << x << " ";
    std::cout << std::endl << std::endl;
}

void Menu::menuMaxAdjDist() {
    int n, v; std::vector<int> nums;
    std::cout << "--- 3423. Max Circular Difference ---" << std::endl;
    std::cout << "Cant. elementos: "; std::cin >> n;
    for (int i = 0; i < n; i++) { std::cin >> v; nums.push_back(v); }
    std::cout << "Resultado: " << m.maxAdjacentDistance(nums) << std::endl << std::endl;
}

void Menu::menuSubarraySum() {
    int n, v; std::vector<int> nums;
    std::cout << "--- 3427. Sum Variable Length Subarrays ---" << std::endl;
    std::cout << "Cant. elementos: "; std::cin >> n;
    for (int i = 0; i < n; i++) { std::cin >> v; nums.push_back(v); }
    std::cout << "Resultado: " << m.subarraySum(nums) << std::endl << std::endl;
}

void Menu::menuMaxFreqDiff() {
    std::string s;
    std::cout << "--- 3442. Max Diff Even/Odd Freq ---" << std::endl;
    std::cout << "String: "; std::cin >> s;
    std::cout << "Resultado: " << m.maxDifference(s) << std::endl << std::endl;
}

void Menu::menuSumGoodNumbers() {
    int n, k, v; std::vector<int> nums;
    std::cout << "--- 3452. Sum of Good Numbers ---" << std::endl;
    std::cout << "Cant. elementos y k: "; std::cin >> n >> k;
    for (int i = 0; i < n; i++) { std::cin >> v; nums.push_back(v); }
    std::cout << "Resultado: " << m.sumOfGoodNumbers(nums, k) << std::endl << std::endl;
}