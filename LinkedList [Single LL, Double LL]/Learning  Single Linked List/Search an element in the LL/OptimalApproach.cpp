#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1; // Initialize data with the provided value
    next = next1; // Initialize next with the provided
  }

public:
  Node(int data1)
  {
    data = data1;   // Initialize data with the provided value
    next = nullptr; // Initialize next as null since it's the end of the list
  }
};
Node* convrt_arr2LL(vector<int>&a){
  Node* head = new Node(a[0]); // head node of our LL
  Node* mover = head;    // starting mover ptr from head node ptr
  for (int i = 1; i < a.size(); i++)
  {
    Node* temp = new Node(a[i]); // creating temp. node for every a[i]..
    mover->next = temp;   // updating the mover ptr
    // implement mover_ptr for creating a LL...
    mover = temp; // OR (mover = mover->next) 
  }
  // returning the head Node of our LL...
  return head;
}
bool check_if_present(Node* head,int val){
  Node* temp = head;
  while (temp)
  {
    if (temp->data == val) return true; // this will check if the element is present or not...
    temp = temp->next;
  }
  return false;
}
int main(){
  // converting arr to a linked list...
  vector<int> a1 = {12, 5, 8, 7};
  Node *head = convrt_arr2LL(a1);
  cout<<check_if_present(head,8); // this will print the data of the head node in LL..
  return 0;                                                                                          
}
