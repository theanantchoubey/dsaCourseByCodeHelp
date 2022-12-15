#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // Destructor
    ~Node()
    {
        int value = this->data;
        // Memory Free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};
void insertNode(Node *&tail, int element, int d)
{
    // Empty List
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non empty List
        // Assuming that the element is present in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // Element found -> Current is representing ELement Node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *tail)
{
    Node *temp = tail;
    //Empty List
    if(tail == NULL){
        cout << "List is Empty " << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
void deleteNode(Node *&tail, int value)
{
    // Empty List
    if (tail == NULL)
    {
        cout << "List is empty, please check again! " << endl;
        return;
    }
    else
    {
        // Non Empty
        // Assuming that "value " is present in the Linked List
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        //1 Node Linked List
        if(curr == prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    // Inserting in Empty List
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail); 
    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    return 0;
}