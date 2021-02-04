#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>

class TreeNode
{
public:
    TreeNode *left, *right;

    TreeNode()
        : left(nullptr), right(nullptr) {}

    // Prints tree generated from this node
    virtual void printTree();
};

class StringNode : public TreeNode
{
public:
    std::string value;

    StringNode(const std::string &v)
        : value(v)
    {
    }

    std::string getValue()
    {
        return value;
    }

    void printTree();
};

class IntNode : public TreeNode
{
    int value;

public:
    IntNode(int v)
        : value(v) {}

    int getValue()
    {
        return value;
    }

    void printTree();
};

#endif
// TreeNode
// GETVALU