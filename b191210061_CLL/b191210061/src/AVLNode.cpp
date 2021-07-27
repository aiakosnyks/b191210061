#include <cstdlib>
#include "AVLNode.hpp"

using namespace std;

AVLNode::AVLNode(int sayi, string kelime ,AVLNode *left, AVLNode *right)
{
	this->sayi=sayi;
	this->kelime=kelime;
	this->left=left;
	this->right=right;
}