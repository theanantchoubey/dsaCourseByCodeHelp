#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int data)
    {
        this->data = data;
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
        cout << " Memory is free for node with data " << value << endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    // New Node Create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    // New Node Create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // Insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // Creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(int position, Node *&head)
{
    // Deleting First or Start Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // Memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    // Create a New Node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // Head Pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtPosition(tail, head, 4, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(4, head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    return 0;
}