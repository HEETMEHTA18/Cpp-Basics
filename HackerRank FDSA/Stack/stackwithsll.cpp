#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node {
    int data;
    struct node *link;
} *first = NULL;


struct node *create(int n) {
    struct node *temp = new node();
    temp->data = n;
    temp->link = NULL;
    return temp;
}

void push(int n) {
    // int data;
    // cin >> data;
    struct node *temp = create(n);
    temp->link = first;
    first = temp;
}
void  pop() {
    struct node *temp = first;
    if (first == NULL) {
    cout << "underflow"<<endl;
        // return -1; 
    } else {
        int val = temp->data;  
        first = first->link;
        delete temp;           
        
    }
}
void display() {
    struct node *temp = first;
    if (first == NULL) {
        cout << "underflow"<<endl;
    } else {
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
}

int main() {
     int choice;
    do {
        int x;
        cin>>choice;
        switch (choice) 
        {
            case 0:
                return 0;
            case 1:
                cin>>x;
                push(x);
                break;    
            case 2:
                 pop();
                break;
            case 3:
                display();
                break;
            
        }
    } while (choice != 0);
    return 0;
}
