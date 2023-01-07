#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *insertIntoBST(Node *&root, int d)
{
    // Base Case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // Insert intor Right Part
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        // Insert into Left Part
        root->left = insertIntoBST(root->left, d);
    }
    return root;
};

Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
};

Node *maxVal(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteFromBST(Node *root, int val)
{
    // Base Case
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 Child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 Child
        // Left Child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        };

        // Right Child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        };

        // 2 Child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        };
    }
    else if (root->data > val)
    {
        // Left Part
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        // Right Part
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
};

int main()
{
    Node *root = NULL;
    cout << "Enter the data to create BST" << endl;
    takeInput(root);
    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << endl
         << "Printing inorder" << endl;
    inorder(root);

    cout << endl
         << "Printing preorder" << endl;
    preorder(root);

    cout << endl
         << "Printing postorder" << endl;
    postorder(root);

    cout << "Min value is  " << minVal(root)->data << endl;
    cout << "Max value is " << maxVal(root)->data << endl;

    // DELETION
    root = deleteFromBST(root, 90);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << endl
         << "Printing inorder" << endl;
    inorder(root);

    cout << endl
         << "Printing preorder" << endl;
    preorder(root);

    cout << endl
         << "Printing postorder" << endl;
    postorder(root);

    cout << "Min value is  " << minVal(root)->data << endl;
    cout << "Max value is " << maxVal(root)->data << endl;
    return 0;
};