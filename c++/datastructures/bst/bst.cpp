#include "bst.h"
#include "node.h"

bst::bst(): root(nullptr) {}

bst::~bst() {
    clear_tree();
}

void bst::insert(const int& id) {
    insert_aux(root, id);
}

void bst::insert_aux(node*& top, const int& id) {
    if (top == nullptr) {
        node* new_node = new node(id);
        top = new_node;
        return;
    }
    if (contains(id))
        return;
    if (top->id > id)
        insert_aux(top->l_child, id);
    if (top->id < id)
        insert_aux(top->r_child, id);
}

bool bst::contains(const int& id) const {
    return contains_aux(root, id);
}

bool bst::contains_aux(node* root, const int& id) const {
    if (root == nullptr)
        return false;
    if (root->id == id)
        return true;
    if (root->id > id)
        return contains_aux(root->l_child, id);
    return contains_aux(root->r_child, id);
}

void bst::clear_tree() {
    clear_tree_aux(root);
}

void bst::clear_tree_aux(node *&root) {
    if (root != nullptr) {
        clear_tree_aux(root->l_child);
        clear_tree_aux(root->r_child);
        delete root;
        root = nullptr;
    }
}

bool bst::is_empty() const {
    return root == nullptr;
}

int bst::size() const {
    return size_aux(root);
}

int bst::size_aux(node* root) const {
    if (root == nullptr)
        return 0;
    return 1 + size_aux(root->l_child) + size_aux(root->r_child);
}
