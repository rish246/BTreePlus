#include "tree.h"

// template <class T>
void TreeNode::printTree()
{
    std::cout << "Print called on TreeNode" << std::endl;
}

void StringNode::printTree()
{
    if (this->left)
        this->left->printTree();

    std::cout << this->getValue() << std::endl;

    if (this->right)
        this->right->printTree();
}

void IntNode::printTree()
{
    if (this->left)
        this->left->printTree();

    std::cout << this->getValue() << std::endl;

    if (this->right)
        std::cout << this->getValue() << std::endl;
}

std::vector<std::vector<TreeNode *>> TreeNode::levelOrderTraversal()
{
    std::vector<std::vector<TreeNode *>> result;

    std::vector<TreeNode *> initialLevel = {this};
    result.emplace_back(initialLevel);

    int nLevels = 1;
    int iLevel = 0;

    while (iLevel < nLevels)
    {
        std::vector<TreeNode *> curLevel = result[iLevel];
        bool canContinueTraversal = false;

        std::vector<TreeNode *> newLevel;

        for (TreeNode *curLevelNode : curLevel)
        {
            if (curLevelNode)
            {
                canContinueTraversal = true;

                newLevel.emplace_back(curLevelNode->left);

                newLevel.emplace_back(curLevelNode->right);
            }
        }

        if (canContinueTraversal)
        {
            nLevels++;
        }
        iLevel++;
        result.emplace_back(newLevel);
    }

    return result;
}

// Default Tree Should be given only structural powers
// getValue() ->