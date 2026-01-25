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
void print(Node *head){
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
Node *convrt_arr_2_DLL(vector<int> &a){
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
Node *delete_all_occurences_of_key(Node *head, int key){
  Node *temp = head;
  while (temp != NULL)
  {
    // the node which needs to be deleted is found...
    if (temp->data == key)
    {
      // when the node which needs to be deleted is head...
      if (temp == head)
      {
        head = head->next;
      }
      // taking front and prev nodes...
      Node *front = temp->next;
      Node *previ = temp->back;
      // point only if front and previ is valid...
      if (front) front->back = previ;
      if (previ) previ->next = front;
      free(temp);
      temp = front;
    }
    else temp = temp->next;
  }
  return head;
}
int main(){
  vector<int> a = {1,1,1,2,3,3,4};
  Node *head = convrt_arr_2_DLL(a);

  int key;
  cout<<"enter the value of key: "<<endl;
  cin>>key;

  head = delete_all_occurences_of_key(head,key);
  print(head);
  return 0;                                                                                          
}
