#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* link;
    Node(int val) {
        data = val;
        link = nullptr;
    }
};


Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        next = current->link;  
        current->link = prev;  
        prev = current;        
        current = next;
    }
    
    return prev;
}


void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main() {
    int n;
    cin >>n;

    if (n == 0) return 0;

    int value;
    cin >> value;
    Node* head = new Node(value);
    Node* current = head;


    for (int i = 1; i < n; i++) {
        cin >> value;
        current->link = new Node(value);
        current = current->link;
    }


    Node* reversed = reverseList(head);
    display(reversed);
    return 0;
}
