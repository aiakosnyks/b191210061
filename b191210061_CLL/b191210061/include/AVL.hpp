#ifndef AVL_HPP
#define AVL_HPP
#include<iostream>
#include<string>
using namespace std;

class AVL
{
	private:
		AVLNode* root;
		
	public:
		AVL();
		bool isEmpty();
		int height(AVLNode* node);
		int height();
		int difference(AVLNode* node);
		AVLNode* ll_rotate(AVLNode* node);
		AVLNode* rr_rotate(AVLNode* node);
		AVLNode* lr_rotate(AVLNode* node);
		AVLNode* rl_rotate(AVLNode* node);
		void printPostorder(AVLNode* node);
		AVLNode* insert(AVLNode* start,int sayi,string kelime);
		void insert(int sayi,string kelime);
		int balanceFactor(AVLNode* node);

};

#endif
