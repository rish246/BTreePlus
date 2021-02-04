#include <iostream>
#include <string>
#include "tree.h"
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
    head->printTree();
}