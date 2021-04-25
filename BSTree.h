//
//  BSTree.h
//  AFRIDI2421PROJECT2
//
//  Created by ahmad afridi on 4/18/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

//To be used in conjunction with Node.h and BSTree<DATATYPE, KEYTYPE>.cpp
//If you modify this, please add your name and list any changes that you made
#ifndef BSTREEINT_H
#define BSTREEINT_H
#include <iostream>
#include <vector>
using namespace std;
#include "Node.h"

// Binary Search Tree class
template <typename DATATYPE, typename KEYTYPE>
class BSTree {
private:
    Node<DATATYPE, KEYTYPE> * root;
    void addNode(KEYTYPE key, Node<DATATYPE, KEYTYPE> * leaf, DATATYPE& data);
    Node<DATATYPE, KEYTYPE> * deleteNode(Node<DATATYPE, KEYTYPE> * node, KEYTYPE key);
    void freeNode(Node<DATATYPE, KEYTYPE> * leaf);
    void printInorder(Node<DATATYPE, KEYTYPE> * node);
    Node<DATATYPE, KEYTYPE> * findNode(KEYTYPE key, Node<DATATYPE, KEYTYPE> * node);
    
public:
    BSTree<DATATYPE, KEYTYPE>();
    ~BSTree<DATATYPE, KEYTYPE>();
    Node<DATATYPE, KEYTYPE> * Root() { return root; }
    void setRoot(Node<DATATYPE, KEYTYPE> * _root) {root = _root;}
    void addNode(KEYTYPE key, DATATYPE &data);
    Node<DATATYPE, KEYTYPE> * findNode(KEYTYPE key);
    Node<DATATYPE, KEYTYPE> * modifyNodeKey(KEYTYPE key, KEYTYPE modifiedKey);
    void printInorder();
    void print(ostream & out, const DATATYPE & data);
    void deleteNode(KEYTYPE key);
    Node<DATATYPE, KEYTYPE> * min(Node<DATATYPE, KEYTYPE> * node);
    Node<DATATYPE, KEYTYPE> * max(Node<DATATYPE, KEYTYPE> * node);
    void getData(Node<DATATYPE, KEYTYPE> * node, vector<DATATYPE>& dataset);
    void getData(vector<DATATYPE> &dataset);
};
#include "BSTree.hpp"
#endif  //BST

