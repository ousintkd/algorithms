#include <iostream>

using namespace std;

struct node {
    int data;
    struct node* next;
};

class List{
  public:
    List()
    {
        head = NULL;   
    }
    void reversePrint();
    void print();
    void createNode(int val);
  private:
    node * head;
    void reversePrint(node* n);
    void print(node* n);
};

void List::print()
{
    print(head);
    cout<<endl;
}

void List::print(node* n) {
    if(n == NULL) return;
    cout<<n->data<<"  ";
    print(n->next);
}

void List::reversePrint()
{
    reversePrint(head);
    cout<<endl;
}

void List::reversePrint(node* n) {
    if(n == NULL) return;
    reversePrint(n->next);
    cout<<n->data<<"  ";
}

void List::createNode(int val)
{
    node * temp = new node;
    temp->data = val;
    temp->next = NULL;
    if(head == NULL) 
    {
        head = temp;
    }
    else
    {
        node * it = head;
        while(it->next != NULL) it=it->next;
        it->next=temp;
    }
}

int main()
{
    int arr[]={23,2,5,-4,0,100,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    List L;
    
    for(int i=0;i<n;i++) L.createNode(arr[i]);
    
    L.print();
    L.reversePrint();

    return 0;
}
