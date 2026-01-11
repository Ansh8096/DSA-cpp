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
int Length_of_the_loop_in_LL_BR(Node* head){
  Node* temp = head;
  int timer = 1;
  map<Node*,int> mpp;
  while(temp!= NULL){
    if (mpp.find(temp) != mpp.end())
    {
      int stored_val = mpp[temp];
      return (timer - stored_val);
    }
    mpp[temp] = timer;
    temp = temp->next;
    timer++;
  }
  return 0; // if there is no loop in the LL
}
int main(){
  // we need to create each node of Linked list seperately to create a cycle...
  Node* head = new Node(1);
  Node* second = new Node(2);
  Node* third = new Node(3);
  Node* fourth = new Node(4);
  Node* fifth = new Node(13);
  Node* sixth = new Node(6);
  Node* seventh = new Node(7);
  Node* eight = new Node(8);
  Node* ninth = new Node(9);
  
  // linking these nodes...
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  sixth->next = seventh;
  seventh->next = eight;
  eight->next = ninth;
  
  // creates a loop:
  ninth->next = third;

  cout<<Length_of_the_loop_in_LL_BR(head);
  return 0;                                                                                          
}
