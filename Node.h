//
//  Node.h
//  AFRIDI2421PROJECT2
//
//  Created by ahmad afridi on 4/18/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

//To be used in conjunction with BSTree.h and BSTree.hpp
//If you modify this, please add your name and list any changes that you made
#ifndef NODE_
#define NODE_
#include <iostream>
#include <string>
using namespace std;

// A tree node class for ints

//Placeholder for a composite data type

struct GeneralData

{

    int number; //Update this to your data field
    string name;
};

struct actorData

{
    
    int year, winner; //Update this to your data field
    string name,award,film ;
};
struct movieData

{
    //name,year,nominations,rating,duration,genre1,genre2,release,metacritic,synopsis
    string name;
    int year,nominations;
    double rating;
    int duration;
    string genre1,genre2,release;
    int metacritic;
    string synopsis;
};

//Binary Tree Node
template <typename DATATYPE, typename KEYTYPE>
class Node {
private:
    string key; //This should be the datatype of your key...sorted field in tree
    DATATYPE data;
    Node<DATATYPE, KEYTYPE> * left;
    Node<DATATYPE, KEYTYPE> * right;
    Node<DATATYPE, KEYTYPE> * parent;
public:
    Node() {left=nullptr; right=nullptr; parent = nullptr;};
    void setKey(KEYTYPE aKey) { key = aKey; };
    void setData(DATATYPE aData) { data = aData; }
    void setLeft(Node<DATATYPE, KEYTYPE> * aLeft) { left = aLeft; };
    void setRight(Node<DATATYPE, KEYTYPE> * aRight) { right = aRight; };
    void setParent(Node<DATATYPE, KEYTYPE> * aParent) { parent = aParent; };
    KEYTYPE Key() { return key; };
    DATATYPE Data() { return data; }
    Node<DATATYPE, KEYTYPE> * Left() { return left; };
    Node<DATATYPE, KEYTYPE> * Right() { return right; };
    Node<DATATYPE, KEYTYPE> * Parent() { return parent; };
};

#endif
