#pragma once
#include "node.h"

class bst {
public:
    // Constructors & Destructor
    bst();
    ~bst();

    // Mutators
    void insert(const int& id);
    void clear_tree();

    // Accessors
    bool is_empty() const;
    bool contains(const int& id) const;
    int size() const;
private:
    node* root;

    // Aux Accessors
    bool contains_aux(node* root, const int& id) const;
    int size_aux(node* root) const;

    // Aux Mutators
    void insert_aux(node*& root, const int& id);
    void clear_tree_aux(node*& root);
};
