#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
    int data;
    struct node *next;
}*head,*newNode,*ptr;

void createNode()
{
    int n,data; 
    cout<<"Enter the number of nodes\n";
    cin>>n;
    cout<<"Enter the data\n";
    for(int i=0;i<n;i++)
    {
        cin>>data;
        if(head==NULL)
        {
            head=(struct node *)malloc(sizeof(struct node));
            head->data=data;
            head->next=NULL;
            ptr=head;
        }
        else
        {
            newNode=(struct node*)malloc(sizeof(struct node));
            newNode->data=data;
            newNode->next=NULL;
            ptr->next=newNode;
            ptr=newNode;
        }
    }
}

void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

//Function to insert a node at the first 
void insertAtIndex()
{
    int data,index;
    cout<<"Enter Data: \n";
    cin>>data;
    cout<<"Enter Index : \n";
    cin>>index;
    ptr= head;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p=head;
    int i=0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    

}

int main()
{
    
    createNode();

    print(head);                       //Printing the old Linked list
    cout<<"New Linked List"<<endl;
    insertAtIndex();
    
    print(head);                       //Printing the new Linked List
}