#include<bits/stdc++.h>

using namespace std;

struct node
{
	char key;
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
		cout<<root->key<<endl;
		inorder(root->right);
	}
}


void print_preorder(struct node * root)
{
    if (root)
    {
        cout<<root->key<<endl;
        print_preorder(root->left);
        print_preorder(root->right);
    }

}

void print_postorder(struct node * root)
{
    if (root)
    {
        print_postorder(root->left);
        print_postorder(root->right);
        cout<<root->key<<endl;
    }
}

struct node* insert(struct node* node, int key)
{
	
	if (node == NULL) return newNode(key);

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	return node;
}

int main()
{
	struct node *root = NULL;
	root = insert(root, 'M');
	insert(root, 'N');
	insert(root, 'O');
	insert(root, 'P');
	insert(root, 'Q');

	cout<<"\nPre-Order \n";
	print_preorder(root);
	cout<<"\nIn-order"<<endl;
	inorder(root);
	cout<<"\n\n"<<"Post Order \n";
	print_postorder(root);


	return 0;
}