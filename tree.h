#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>
#include <vector>

#define STRING_NODE 0
#define INT_NODE 1

class TreeNode
{

    int Type;

    typedef std::vector<TreeNode *> Level;

public:
    TreeNode *left, *right;

    TreeNode(int _Type)
        : Type(_Type), left(nullptr), right(nullptr) {}

    // Prints tree generated from this node
    virtual void printTree();

    std::vector<Level> levelOrderTraversal();

    int getType()
    {
        return this->Type;
    }

    virtual void dump()
    {
        std::cout << "Vanilla TreeNode" << std::endl;
    }
};

class StringNode : public TreeNode
{
public:
    std::string value;

    StringNode(const std::string &v)
        : value(v), TreeNode(STRING_NODE)
    {
    }

    std::string getValue()
    {
        return value;
    }

    void printTree();

    void dump()
    {
        std::cout << getValue();
    }
};

class IntNode : public TreeNode
{
    int value;

public:
    IntNode(int v)
        : value(v), TreeNode(INT_NODE) {}

    int getValue()
    {
        return value;
    }

    void printTree();

    void dump()
    {
        std::cout << getValue();
    }
};

#endif
// TreeNode
// GETVALU
