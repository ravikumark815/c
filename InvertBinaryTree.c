/*

Author: https://github.com/ravikumark815

Given the root of a binary tree, invert the tree, and return its root.

Example 1:
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]

Example 2:
Input: root = [2,1,3]
Output: [2,3,1]

Example 3:
Input: root = []
Output: []
 
Constraints:
The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
*/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode* create_node(int val) {
    struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	if (temp==NULL) {
		printf("Malloc Error\n");
		exit(0);
	}
	temp->val = val;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void insert(struct TreeNode** root, struct TreeNode* new_node) {
    if (*root == NULL) {
        *root = new_node;
        return;
    }
    if (new_node->val < (*root)->val) {
        insert(&((*root)->left), new_node);
    } else {
        insert(&((*root)->right), new_node);
    }
}

struct TreeNode* create_tree(int tree_arr[], int arr_size)
{
    struct TreeNode* new_node = create_node(tree_arr[0]);
	for (int i=1; i<arr_size; i++) {
        insert(&new_node, create_node(tree_arr[i]));
	}
	return new_node;
}

void inorder_traversal(struct TreeNode* root)
{
    if (root == NULL) return;
    inorder_traversal(root->left);
    printf("%d", root->val);
    inorder_traversal(root->right);
    return;
}

struct TreeNode* invert_tree(struct TreeNode* root)
{
    if (root == NULL) return root;
	
	struct TreeNode*temp = invert_tree(root->left);
	root->left = invert_tree(root->right);
	root->right = temp;

    return root;
}

void main()
{
	int test1[] = {4,2,7,1,3,6,9};
	int test2[] = {2,1,3};
    // int test3[];

    printf("\nTest1:\n");
    inorder_traversal(invert_tree(create_tree(test1, sizeof(test1)/sizeof(test1[0]))));
    printf("\nTest2:\n");
    inorder_traversal(invert_tree(create_tree(test2, sizeof(test2)/sizeof(test2[0]))));
    // invert_tree(create_tree(test3, sizeof(test3)/sizeof(test3[0])));

    return;
}
