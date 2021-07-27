#include "AVLNode.hpp"
#include "AVL.hpp"
#include <algorithm>

using namespace std;

AVL::AVL(){
    this->root=NULL;
}

bool AVL::isEmpty(){
    return root==NULL;
}

int AVL::height(AVLNode* node)
{
    if(node){
    /*{
		AVL() : root(NULL) { }
		bool isEmpty()const{ } return root == NULL;
	}*/
        int left=height(node->left);
        int right=height(node->right);
        return max(left,right)+1;
    }
    else{
        return 0;
    }
}

int AVL::height(){
    return height(root);
}

int AVL::difference(AVLNode* node)
{
    return height(node->left)-height(node->right);
}

AVLNode* AVL::ll_rotate(AVLNode* node)
{
    AVLNode* temp=node->left;
    node->left=temp->right;
    temp->right=node;
    return temp;
}

AVLNode* AVL::rr_rotate(AVLNode* node)
{
    AVLNode* temp=node->right;
    AVLNode* temp2=node->right->left;

    node->right=temp2->left;
    temp->left=temp2->right;
    temp2->left=node;
    temp2->right=temp;

    return temp2;
}

AVLNode* AVL::lr_rotate(AVLNode* node)
{
    AVLNode* temp=node->left;
    AVLNode* temp2=node->left->right;

    node->left=temp2->right;
    temp->right=temp2->left;
    temp2->right=node;
    temp2->left=temp;

    return temp2;
}

AVLNode* AVL::rl_rotate(AVLNode* node)
{
    AVLNode* temp=node->right;
    node->right=temp->left;
    temp->left=node;
    return temp;
}
//void printPostorder(AVLNode* node, int sayi, int no, string kelime,char companyName)
void AVL::printPostorder(AVLNode* node)
{ 
    if (node == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  
    // now deal with the node 
    cout << node->kelime <<"-"<< node->sayi<<"|"; 
} 

AVLNode* AVL::insert(AVLNode* node, int sayi, string kelime)
    {
        if (node == NULL) {
            return new AVLNode(sayi,kelime);
        }
        if (sayi < node->sayi)
        {
            node->left = insert(node->left, sayi, kelime);
        }
        else if (sayi > node->sayi)
        {
            node->right = insert(node->right, sayi, kelime);
        }
        else 
            return node;

        node->height = height(node);
        int diff = difference(node);

        //left-left
        if (diff > 1 && sayi < node->left->sayi)
        {
            return ll_rotate(node);
        }
        //left-right
        if (diff > 1 && sayi > node->left->sayi)
        {
            //node->left = leftRotate(node->left);
            return lr_rotate(node);
        }
        //right-right
        if (diff < -1 && sayi > node->right->sayi)
        {
            return rr_rotate(node);
        }
        //right-left
        if (diff < -1 && sayi < node->right->sayi)
        {
            //node->right = rightRotate(node->right);
            return rl_rotate(node);
        }
        return node;
    }
	/*
AVLNode* AVL::insert(AVLNode* node,int sayi,string kelime)
{
	
	if( node == NULL)
			return 
	
	if(val < r -> kelime)
		node -> left = insert (node -> left, sayi, kelime)

	else if(
	*/
    /*
	if(node)
    {
        if(sayi<node->sayi)
        {
            start->left=insert(node->left,sayi,kelime);
        }
        else
        {
            node->right=insert(node->right,sayi,kelime);
        }
    }
    else 
        return new AVLNode(sayi,kelime);
    return node;
	*/
	/*
}
 int differencedFactor(AVLNode* node){
            if(n->left && n->right){
                return n->left->height - n->right->height; 
            }
            else if(n->left && n->right == NULL){
                return n->left->height; 
            }
            else if(n->left== NULL && n->right ){
                return -n->right->height;
            }
    }

void AVL::insert(int sayi,string kelime)
{
    root=insert(root,sayi,kelime);
}
*/