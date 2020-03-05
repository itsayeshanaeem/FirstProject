 #include <iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
void convert(node *p, node **head)
{
    if (p == NULL)
        return;
    //base case


    static node* prev = NULL;

    // Recursively converting left subtree
    convert(p->left, head);

    // Now convert this node
    if (prev == NULL)
        *head = p;
    else
    {
        p->left = prev;
        prev->right = p;
    }
    prev = p;

    // now convert right subtree
    convert(p->right,head);
}
node* newnode(int data)
{
    node* extra = new node;
    extra->data = data;
    extra->left = extra->right = NULL;
    return extra;
}

int main()
{

    node *root        = newnode(9);
    root->left        = newnode(12);
    root->right       = newnode(16);
    root->left->left  = newnode(25);
    root->left->right = newnode(33);
    root->right->left = newnode(39);

    // Converting to DLL
    node *head = NULL;
    convert(root,&head);

    // Print the converted list
    while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->right;
    }

    return 0;
}
