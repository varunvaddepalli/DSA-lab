#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1,struct node* next1 ){
        data = data1;
        next = next1;
    }
};

int main(){
    node*y1 = new  node(10,NULL);
    node*y2 = new  node(20,NULL);
    node*y3 = new  node(30,NULL);

    y1->next = y2;
    y2->next = y3;

    node*newnode = new node(1,NULL);
    newnode->next = y1;
    y1 = newnode;
   
    node*temp = y1;
    while(temp->next != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
   }
    return 0;
}