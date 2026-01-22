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
Node *convrt_arr2LL(vector<int> &a){
  Node *head = new Node(a[0]); // head node of our LL
  Node *mover = head;          // starting mover ptr from head node ptr
  for (int i = 1; i < a.size(); i++)
  {
    Node *temp = new Node(a[i]); // creating temp. node for every a[i]..
    mover->next = temp;          // updating the mover ptr
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
int helper_carry(Node* temp){
  if(temp == NULL) return 1; // Base case...
  int carry = helper_carry(temp->next);
  temp->data += carry;
  if(temp->data < 10){
    return 0;
  }
  temp->data = 0;
  return 1;
}
Node* add_1_to_no_reperesentedBy_LL_OP(Node* head){
  int carry = helper_carry(head); // final carry...
  if (carry == 1)
  {
    Node *new_head = new Node(1);
    new_head->next = head;
    return new_head;
  }
  return head;
}
int main(){
  vector<int> a = {3,5};
  Node *head1 = convrt_arr2LL(a);
  head1 = add_1_to_no_reperesentedBy_LL_OP(head1);
  print(head1);
  return 0;                                                                                          
}
