#pragma once
#include "Mate.hpp"

class Menu
{
private:
	Mate m;
	void printLevelOrder(TreeNode* root);
public:
	void menuReverseOddLevels();
    void menuMaxLength();
    void menuZigzag();
    void menuMaxAdjDist();
    void menuSubarraySum();
    void menuMaxFreqDiff();
    void menuSumGoodNumbers();
};