#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
    int data;
    struct node *next;
}*newNode,*ptr,*head;
//NOde creation
void createNode()
{
    int n,data;
    cout << "Enter the number of nodes \n";
    cin >> n;
    cout<<"Enter the value\n";
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            head->data = data;
            head->next = NULL;
            ptr = head;
        }
        else
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = data;
            newNode->next = NULL;
            ptr->next = newNode;
            ptr = newNode;
        }
    }
}

void print()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

//Function to insert a node at the end
void insertAtEnd(int data )
{
    ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p;
    p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    
}

int main()
{
    createNode();

    print();                       //Printing the old Linked list
    cout<<"New Linked List"<<endl;
    insertAtEnd(22);

    print();                       //Printing the new Linked List
}