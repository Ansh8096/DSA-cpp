#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1, Node *next1, Node *back1)
  {
    data = data1; // Initialize data with the provided value
    next = next1; // Initialize next with the provided
    back = back1; // Initialize back with the provided
  }

public:
  Node(int data1)
  {
    data = data1;   // Initialize data with the provided value
    next = nullptr; // Initialize next as null since it's the end of the list
    back = nullptr; // Initialize next as null since it's the start of the list
  }
};
void print(Node *head)
{

  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
Node *convrt_arr_2_DLL(vector<int> &a)
{
  Node *head = new Node(a[0]);
  Node *prev = head;
  for (int i = 1; i < a.size(); i++)
  {
    Node *temp = new Node(a[i], nullptr, prev);
    prev->next = temp;
    prev = prev->next;
  }
  return head;
}
Node* reverse_the_DLL_BR(Node* head){
  // if head is empty or there is only one element
  // we can directly just return the head
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node* temp = head;
  stack<int> stk;
  while(temp != NULL){
    // insert the data of the current node into the stac
    stk.push(temp->data);
    temp = temp->next;
  }
  // Reinitialise temp to head
  temp = head;
  while(temp != NULL){
    // Replace the value pointed via temp with
    // the value from the top of the stack
    temp->data = stk.top();
    // Pop the value from the stack
    stk.pop();
    temp = temp->next;
  }
  // Return the updated doubly linked 
  // where the values of nodes from both ends 
  // has been swapped
  return head;
}
int main(){
  vector<int> a = {12,5,8,7};
  Node *head = convrt_arr_2_DLL(a);
  
  // reversing the DLL...
  head = reverse_the_DLL_BR(head);
  print(head);

  return 0;                                                                                          
}
