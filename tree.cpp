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

// Default Tree Should be given only structural powers
// getValue() ->