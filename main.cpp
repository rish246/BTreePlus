#include <iostream>
#include <string>
#include "tree.h"

// Struct
int main()
{

    TreeNode *head = new StringNode("head node");

    TreeNode *leftNode = new IntNode(1);

    TreeNode *rightNode = new StringNode("Right node");

    head->left = leftNode; // Both are of type TreeNode
    head->right = rightNode;

    // Lets give some children to leftNode
    TreeNode *leftLeftNode = new StringNode("Extremely Left");
    TreeNode *leftRightNode = new IntNode(2);
    leftNode->left = leftLeftNode;
    leftNode->right = leftRightNode;
    // head->printTree();

    std::vector<std::vector<TreeNode *>> levels = head->levelOrderTraversal();

    std::string padding(10, ' ');
    for (auto level : levels)
    {
        for (auto node : level)
        {
            std::cout << padding;

            if (node)
                node->dump();

            // TypeCast the ptr to StringNode or IntNode
        }
        std::cout << std::endl;
    }
}
// Internal left and right ptrs can point to
// Look at the faults
// Make a dump Function for Each Class and make it compulsory
// For each ptr call dump
// Function is working
// Hail runtime polymorphism