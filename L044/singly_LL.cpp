#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
     
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
        ~Node(){
            int value = this -> data;
            // memory free
            if(this -> next){
                delete next;
                this->next = NULL;
            } 
            cout << "Memory is free for node with data: " << value <<endl;
        }
};

void insertAtHead(Node* &head, int d){
    // New node
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }

    // Insertion at last Position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // Creating a node for d
    Node* nod = new Node(d);

    nod -> next = temp -> next;
    temp -> next = nod;

}

void deleteNodeAtPosition(int position, Node* &head, Node* &tail) {
    if(position == 1){
        Node *temp = head;

    }else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> 
    }
}

void deleteNodeByValue(int value, Node* &head, Node* &tail) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // If head needs to be deleted
    if (head->data == value) {
        Node* temp = head;
        head = head->next;

        // If head was also the tail
        if (head == NULL) {
            tail = NULL;
        }

        delete temp;
        return;
    }

    Node* prev = head;
    Node* curr = head->next;

    while (curr != NULL && curr->data != value) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Value not found in the list\n";
        return;
    }

    prev->next = curr->next;

    // Update tail if needed
    if (curr == tail) {
        tail = prev;
    }

    delete curr;
}


void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp -> next;
    }cout << endl;
}

int main() 
{
    Node* nod = new Node(6);
    Node* tail = nod;
    Node* head = nod;
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    print(head);
    
    insertAtTail(tail, 7);
    insertAtTail(tail, 8);
    insertAtTail(tail, 9);
    print(head);

    insertAtPosition(head, tail, 2, 9);
    print(head);
    
    deleteNodeAtPosition(1, head, tail);
    print(head);

    return 0;
}