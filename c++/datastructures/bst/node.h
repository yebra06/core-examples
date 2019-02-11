#pragma once

class node {
public:
    node();
    node(int id);
    int id;
    node* l_child;
    node* r_child;
};
