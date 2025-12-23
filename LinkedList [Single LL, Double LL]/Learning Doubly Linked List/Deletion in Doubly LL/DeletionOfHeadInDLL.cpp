#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1, Node *next1, Node *back1){
    data = data1; // Initialize data with the provided value
    next = next1; // Initialize next with the provided
    back = back1; // Initialize back with the provided
  }

public:
  Node(int data1){
    data = data1;   // Initialize data with the provided value
    next = nullptr; // Initialize next as null since it's the end of the list
    back = nullptr; // Initialize next as null since it's the start of the list
  }
};
void print(Node *head){
  while (head){
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
Node *deleting_head_of_DLL(Node *head){
  // edge case:- when the DLL is empty AND when the DLL has only one node...
  if (head == NULL || head->next == nullptr) return NULL;
  Node *temp = head;    // creating copy of head..
  head = head->next;    // updating head..
  head->back = nullptr; // breaking link with previous head..
  temp->next = nullptr; // breaking link with new head...
  free(temp);           // deleting the previous head.....
  return head;          // returning new head..
}
int main(){
  vector<int> a = {12,5,8,7};
  Node *head = convrt_arr_2_DLL(a);

  // deleting head of DLl...
  head = deleting_head_of_DLL(head);
  print(head);

  return 0;                                                                                          
}
