#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left, *right;
};

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ->", root->key);
		inorder(root->right);
	}
}

void preorder(struct node *root)
{
	if (root)
	{
		printf("%d ->", root->key);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ->", root->key);
	}
}

struct node *insert(struct node *node, int key)
{
	if (node == NULL)
	{
		return newNode(key);
	}

	if (key < node->key)
	{
		node->left = insert(node->left, key);
	}
	else if (key > node->key)
	{
		node->right = insert(node->right, key);
	}
	return node;
}

int main()
{
	struct node *root = NULL;
	root = insert(root, 30);
	insert(root, 15);
	insert(root, 60);
	insert(root, 7);
	insert(root, 22);
	insert(root, 45);
	insert(root, 75);
	insert(root, 17);
	insert(root, 27);

	printf("Pre Order\n");
	preorder(root);
	printf("\n\nInorder\n");
	inorder(root);
	printf("\n\nPost Order\n");
	postorder(root);

	return 0;
}
