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
void print(Node *head){
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
Node* delete_the_tail_of_LL(Node* head){
  // If the list is empty or has only one node, return NULL
  if(head->next == nullptr || head->next == nullptr) return nullptr;
  // Initialize a temporary pointer to traverse the list
  Node*temp = head;
  // Traverse to the second last node in the list
  while(temp->next->next != nullptr){
    temp = temp->next;
  }
  // Delete the last node
  delete temp->next;
  // Set the next of the second last node to nullptr, effectively removing the last node
  temp->next = nullptr;
  // Return the head of the modified list
  return head;
}
int main(){
  vector<int> a = {1,2,6,6,3};
  Node* head = convrt_arr2LL(a);
  
  // deletion of tail of LL...
  head = delete_the_tail_of_LL(head);
  print(head); // for printing the LL...
  return 0;                                                                                          
}
