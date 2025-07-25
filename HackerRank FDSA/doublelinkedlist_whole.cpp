#include <iostream>
using namespace std;
//template
struct node {
    int data;
    struct node *lptr;
    struct node *rptr;
    
}*L=NULL,*R=NULL;


struct node *create(int n) {
    
    struct node *temp = new node();
    temp->data = n;
    temp->lptr = NULL;
    temp->rptr = NULL;
    return temp;
}


void insert_front() {
    int n;
    cin>>n;
    struct node *temp;
    temp=create(n);
    if (L==NULL)
    {
        L=temp;
        R=temp;
    }
    else 
    {
        temp->rptr=L;
        L->lptr=temp;
        L=temp;
    }
}


void insert_end() {
    int n;
    cin>>n;
    struct node *temp = create(n);
    // temp=create(n);
        if(R==NULL || L==NULL)
        {
            L=temp;
            R=temp;
        }
    else 
    {
        temp->lptr=R;
        R->rptr=temp;
        R=temp;
    }
}

void insert_at() {
    int key,n;
    cin>>key>>n;
    if (L == NULL) {
        return;
    }

    struct node *trav = L;
    while (trav != NULL && trav->data != key) {
        trav = trav->rptr;
    }
    if (trav == NULL) {
        return;
    }
    
    struct node *temp = create(n);

    if (trav == R) { 
        temp->lptr = R;
        R->rptr = temp;
        R = temp;
    } else { 
        temp->rptr = trav->rptr;
        temp->lptr = trav;
        trav->rptr->lptr = temp;
        trav->rptr = temp;
    }
}


void delete_front() {
    struct node *temp;
    if(L==NULL)
    {
        cout<<"List is Empty" ;
        return ;
    }
    else if(L==R)
    {
        temp=L;
        free(temp);
        L=NULL,R=NULL;
    }
    else
    {
        temp=L;
        L=L->rptr;
        free(temp);
        L->lptr=NULL;
    }
}
void delete_last() {
   struct node *temp;
    if(R==NULL)
    {
        cout<<"List is Empty" ;
        return;
    }
    else if(L==R)
    {
        temp=R;
        free(temp);
        L=NULL,R=NULL;
    }
    else
    {
        temp=R;
        R=R->lptr;
        free(temp);
        R->rptr=NULL;
    }    
}
void display() {
    int count =0;
    struct node *trav = L;
    while(trav!=NULL)
    {
        cout<<trav->data<<" ";
        trav=trav->rptr;
        count++;
    }
    cout<<endl;
    // cout<<count<<endl;
    
}
void count()
{
    int count = 0;
    struct node *trav = L;

    
    while (trav != NULL) {
        count++;
        trav = trav->rptr;
    }

    cout << count << endl;
}

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
            case 5:
                insert_at();
                break;
            case 3:
                delete_front();
                break;
            case 4:
                delete_last();
                break;
            case 6:
                display();
                break;
                
            case 7:
                count();
            case 0:
                return 0;
        }
    } while (choice != 0);

    return 0;
}
