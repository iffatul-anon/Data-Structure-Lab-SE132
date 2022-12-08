#include <stdio.h>
#include <stdlib.h>

struct node
{
  char item;
  struct node *left;
  struct node *right;
};

void inorderTraversal(struct node *root)
{
  if (root == NULL)
    return;
  inorderTraversal(root->left);
  printf("%c ->", root->item);
  inorderTraversal(root->right);
}

void preorderTraversal(struct node *root)
{
  if (root == NULL)
    return;
  printf("%c ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

void postorderTraversal(struct node *root)
{
  if (root == NULL)
    return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%c ->", root->item);
}

struct node *createNode(value)
{
  struct node *newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct node *insertLeft(struct node *root, int value)
{
  root->left = createNode(value);
  return root->left;
}

struct node *insertRight(struct node *root, int value)
{
  root->right = createNode(value);
  return root->right;
}

int main()
{
  struct node *root = createNode('M');
  insertLeft(root, 'N');
  insertRight(root, 'O');

  insertLeft(root->right, 'P');
  insertRight(root->right, 'Q');

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\n\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\n\nPostorder traversal \n");
  postorderTraversal(root);

  return 0;
}
