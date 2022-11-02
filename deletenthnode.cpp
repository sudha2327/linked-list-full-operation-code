#include <bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* create(int data){
  node* tmp = new node();
  tmp->data = data;
  tmp->next = NULL;
  return tmp;
}
node* deleteNthNodeFromLast(node* head, int n){
//    node* cur = head;
//    while(n--){
//        cur = cur->next;
//        if(!cur){
//            cur = head;
//            head = head->next;
//            free(cur);
//            return head;
//        }
//    }
//    node* tmp = head;
//    while(cur->next){
//        tmp = tmp->next;
//        cur = cur->next;
//    }
//    cur = tmp->next;
//    tmp->next = tmp->next->next;

node *prev,*tar,*temp;
tar=head;
temp=head;
prev=NULL;
int i=1;
if(head->next!=NULL && n==1){
	return NULL;
}

while(temp!=NULL){
	if(i>n){
		prev=tar;
		tar=tar->next;
	}
	i++;
	
	temp=temp->next;
}
if(tar==head){
	head=head->next;
}
else{
	prev->next=tar->next;
}
    return head;
}



int main(){
  // create a linked list
  node* head = new node();
  head = create(2);
  head->next = create(3);
  node* toBeDeleted = create(4);
  head->next->next = toBeDeleted;
  head->next->next->next = create(5);
  head->next->next->next->next = create(6);
  head->next->next->next->next->next = create(7);
  cout<<"Old Linked List: ";
  node* tmp = head;
  while(tmp!=NULL){
    cout<<tmp->data<<" ";
    tmp = tmp->next;
  }
  head = deleteNthNodeFromLast(head, 3);
  cout<<endl<<"New Linked List: ";
  tmp = head;
  while(tmp!=NULL){
    cout<<tmp->data<<" ";
    tmp = tmp->next;
  }
}
