#ifndef AVLNODE_HPP
#define AVLNODE_HPP
#include<string>
#include<iostream>
using namespace std;

class AVLNode
{
    public:
		int height;
        string kelime;
		int sayi;
        AVLNode *left;
        AVLNode *right;
        AVLNode(int sayi=0, string kelime=NULL,AVLNode *left=NULL,AVLNode *right=NULL);
};


#endif