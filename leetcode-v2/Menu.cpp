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