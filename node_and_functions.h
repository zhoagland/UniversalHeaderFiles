#include <iostream>


struct Node
{
	int data;
	Node* next;

};



//create a new node

Node* createNode(int value)
{
 Node *temp = new Node;
 temp->data=value;
 temp->next=NULL;
 return temp;
}


//print the node list

void printList(Node *temp)
{
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;		//move to next Node in the list
	}
}

//add node to the end

void appendList(Node *head, Node *newNode)
{
newNode->next=NULL;//set newNode pntr to NULL
Node* temp= new Node;
if (!head)
{
	head=newNode;
}
else
{
temp=head;
while(temp->next)
{
 temp=temp->next;//moves through list
}
temp->next=newNode;
}
}


//add node to the beggining

Node* appendFront(Node* head, Node* newNode)
{
If (head==NULL){
	Head=newNode;
}
else{
 newNode->next=head;
 head=newNode;
}
return head;
}

//function to insert at a position

void insertList(Node *randomnode, Node *head, int position)
{
Node *previous = new Node;
Node *current=new Node;
current=head;
for(int i=0;i<position;i++)
{
 previous=current;
 current=current->next;
}
}

//function to delete head

Node* deletefirst(Node *head)
{

Node *tmp=newNode
Tmp=head;
head=head->next;
delete tmp;
return head;

}



