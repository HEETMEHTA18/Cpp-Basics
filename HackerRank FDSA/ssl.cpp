#include <iostream>
using namespace std;
//template
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


void insert_front() {
    int data;
    cin >> data;
    struct node *temp = create(data);
    temp->link = first;
    first = temp;
}


void insert_end() {
    int n;
    cin >> n;
    struct node *temp = create(n);
    if (first == NULL) {
        first = temp;
    } else {
        struct node *trav = first;
        while (trav->link != NULL) {
            trav = trav->link;
        }
        trav->link = temp;
    }
}


void insert_after() {
    int x, n; 
    cin >> x >> n;
    struct node *temp = create(n);
    struct node *trav = first;

    while (trav != NULL && trav->data != x) {
        trav = trav->link;
    }

    if (trav == NULL) {
        cout << "Element " << x << " not found in the list\n";
        delete temp;
    } else {
        temp->link = trav->link;
        trav->link = temp;
    }
}



void delete_front() {
    if (first == NULL) {
        cout << "List is Empty\n";
    } else {
        struct node *temp = first;
        first = first->link;
        delete temp;
    }
}


void delete_last() {
    if (first == NULL) {
        cout << "List is Empty\n";
        return;
    }

    if (first->link == NULL) {
        delete first;
        first = NULL;
        return;
    }

    struct node *trav = first;
    while (trav->link->link != NULL) {
        trav = trav->link;
    }

    delete trav->link;
    trav->link = NULL;
}

// Display the list
void display() {
    struct node *temp = first;
    if (first == NULL) {
        cout << "List is Empty\n";
    } else {
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
}

// Main driver
int main() {
    int choice;
    do {
        cin >> choice;
        switch (choice) {
            case 1:
                insert_front();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_after();
                break;
            case 4:
                delete_front();
                break;
            case 5:
                delete_last();
                break;
            case 6:
                display();
                break;
            case 0:
                return 0;
        }
    } while (choice != 0);

    return 0;
}
