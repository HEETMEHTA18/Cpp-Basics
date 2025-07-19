#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};


Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        next = current->next;  
        current->next = prev;  
        prev = current;        
        current = next;
    }
    
    return prev;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    int N;
    cin >> N;

    if (N == 0) return 0;

    int value;
    cin >> value;
    Node* head = new Node(value);
    Node* current = head;


    for (int i = 1; i < N; i++) {
        cin >> value;
        current->next = new Node(value);
        current = current->next;
    }


    Node* reversedHead = reverseList(head);


    printList(reversedHead);

    return 0;
}
