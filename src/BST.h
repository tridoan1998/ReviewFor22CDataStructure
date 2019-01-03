/*
 * BST.h
 *
 *  Created on: Dec 13, 2018
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */

#ifndef BST_H_
#define BST_H_

#include <iostream>
#include <string>

template <typename bstdata>
class BST
{
private:
	struct Node
	{
		bstdata data;
		Node* leftchild;
		Node* rightchild;
		Node(bstdata newdata)
		{
			data = newdata;
			leftchild = rightchild = NULL;
		}
	};
	Node* root;
	int size;
public:
	//constructor
	BST();
	//destructor
	~BST();
};

template <typename bstdata>
BST<bstdata>::BST()
{
	root = NULL;
	size = 0;
}









template <typename bstdata>
BST<bstdata>::~BST()
{

}












/*

    //Private helper functions
    void insertNode(Node* root, int data);
    //private helper function for insert
    //recursively inserts a value into the BST

    void inOrderPrint(ostream& out, Node* root) const;
    //private helper function for inOrderPrint
    //recursively prints tree values in order from smallest to largest

    void preOrderPrint(ostream& out, Node* root) const;
    //private helper function for preOrderPrint
    //recursively prints tree values in pre order

    void postOrderPrint(ostream& out, Node* root) const;
    //private helper function for postOrderPrint
    //recursively prints tree values in post order

    void copyNode(Node* copy);
    //recursive helper function to the copy constructor

    void freeNode(Node* root);
    //private helper function for the destructor
    //recursively frees the memory in the BST

    bool searchNode(Node* root, int data) const;
    //recursive helper function to search
    //returns whether the value is found in the tree

    int minimum(Node* root) const;
    //recursive helper function to minimum
    //returns the minimum value in the tree

    int maximum(Node* root) const;
    //recursive helper function to maximum
    //returns the maximum value in the tree

    Node* deleteNode(Node* root, int data);
    //recursive helper function to remove
    //removes data from the tree

    void getSize(Node* root, int& size) const;
    //recursive helper function to the size function
    //calculates the size of the tree
    //stores the result in size

    int getHeight(Node* root) const;
    //recursive helper function to the height function
    //returns the height of the tree

public:



    //constructors and destructo

    BST();
    //Instantiates a new BST

    BST(const BST &bst);
    //copy constructor

    ~BST();
    //deallocates the tree memory




    //access functions

    int minimum() const;
    //returns the minimum value in the BST
    //pre: !empty()

    int maximum() const;
    //returns the maximum value in the BST
    //pre: !empty()

    bool isEmpty() const;
    //determines whether the BST is empty

    int getSize() const;
    //returns the size of the tree

    int getRoot() const;
    //returns the value stored at the root of the BST
    //pre: !isEmpty()

    int getHeight() const;
    //returns the height of the tree

    bool search(int data) const;
    //returns whether the data is found in the tree
    //pre: !isEmpty()



    //manipulation procedures

    void insert(int data);
    //inserts new data into the BST

    void remove(int data);
    //removes the specified value from the tree
    //pre: data is located in the tree
    //pre: !isEmpty()

    //additional functions

    void inOrderPrint(ostream& out) const;
    //calls the inOrderPrint function to print out the values
    //stored in the BST

    void preOrderPrint(ostream& out) const;
    //calls the reOrderPrint function to print out the values
    //stored in the BST

    void postOrderPrint(ostream& out) const;
    //calls the postOrderPrint function to print out the values
    //stored in the BST


*/
#endif /* BST_H_ */
