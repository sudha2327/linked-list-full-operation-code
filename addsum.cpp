#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node*next;
}*head=NULL;

struct node1{
	int da;
	node1*next1;
}*head1=NULL;

void insert(int data){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
	
}

void insert1(int da){
	struct node1*temp1=(struct node1*)malloc(sizeof(struct node1));
	temp1->da=da;
	temp1->next1=head1;
	head1=temp1;	
}






void dis(){
	struct node* temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"=>";
	   temp=temp->next;
	}
	
}

void dis1(){
	struct node1* temp1;
	temp1=head1;
	while(temp1!=NULL){
	   cout<<temp1->da<<"=>";
	   temp1=temp1->next1;
	}
	
}

//if(l1->data+l2->data)==0){
//	l=sum/10
//	print l1->data+l2->data+1;	
//	
//}


void sumbby(){
	struct node*temp;
	struct node1*temp1;
	temp=head;
	temp1=head1;
	int n=0;
	int n1=0;
	while(temp!=NULL && temp1!=NULL){
      int sum=temp->data+temp1->da;
      if(sum>9){
   
      	n=sum%10;
      	n1=sum/10; // 7+3=10/10 --> 0 
      	cout<<n1<<endl;
        temp=temp->next;
        temp1=temp1->next1;	
        n=0;
        n1=0;
	   }
	    cout<<temp1->da+n+temp->data<<endl;
        temp=temp->next;
        temp1=temp1->next

		}
}

int main(){
	cout<<"first linked list bby "<<endl;
	cout<<endl;
  for(int i=0;i<3;i++){
  	int d;
  	cout<<"enter the input data"<<endl;
  	cin>>d;
  	  insert(d);
  	    dis();
  	    cout<<endl;
  	  cout<<"inserted bby"<<i<<endl;
  }
    
    cout<<"second linked list";
    
    
 for(int i=0;i<3;i++){
  	int d;
  	cout<<"enter the input data"<<endl;
  	cin>>d;
  	  insert1(d);
  	    dis1();
  	    cout<<endl;
  	  cout<<"inserted bby"<<i<<endl;
  }
    
    
    cout<<"sum process way"<<endl;
    sumbby();
    
    
//    cout<<"printing process"<<endl;
  
	
	
}
