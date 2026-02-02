#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node *random;

public:
  Node()
  {
    next = nullptr;
    random = nullptr;
    data = 0;
  }
  Node(int data1, Node *next1, Node *random1)
  {
    data = data1; // Initialize data with the provided value
    next = next1; // Initialize next with the provided
    random = random1;
  }

public:
  Node(int data1)
  {
    data = data1;     // Initialize data with the provided value
    next = nullptr;   // Initialize next as null since it's the end of the list
    random = nullptr; // Initialize next as null since it's the end of the list
  }
};
void printClonedLinkedList(Node *head){
  while (head != nullptr)
  {
    cout << "Data: " << head->data;
    if (head->random != nullptr)
    {
      cout << ", Random: " << head->random->data;
    }
    else
    {
      cout << ", Random: nullptr";
    }
    cout << endl;
    // Move to the next node
    head = head->next;
  }
}
Node *Copy_LL_with_random_ptr_BR(Node *head){
  // Create an unordered_map to map original
  // nodes to their corresponding copied nodes
  Node *temp = head;
  unordered_map<Node *, Node *> mpp;
  // Step 1: Create copies of each node
  // and store them in the map
  while (temp != NULL)
  {
    // Create a new node with the
    // same data as the original node
    Node *newNode = new Node(temp->data);
    // Map the original node to its
    // corresponding copied node in the map
    mpp[temp] = newNode;
    // Move to the next node in the original list
    temp = temp->next;
  }

  temp = head;
  // Step 2: Connect the next and random
  // pointers of the copied nodes using the map
  while (temp != NULL)
  {
    // Access the copied node corresponding
    // to the current original node
    Node *copyNode = mpp[temp];
    // Set the next pointer of the copied node
    // to the copied node mapped to the
    // next node in the original list
    copyNode->next = mpp[temp->next];
    // Set the random pointer of the copied node
    // to the copied node mapped to the
    // random node in the original list
    copyNode->random = mpp[temp->random];
    // Move to the next node
    // in the original list
    temp = temp->next;
  }
  // Return the head of the
  // deep copied list from the map
  return mpp[head];
}
int main(){
  // Example linked list: 7 -> 14 -> 21 -> 28
    Node* head = new Node(7);
    head->next = new Node(14);
    head->next->next = new Node(21);
    head->next->next->next = new Node(28);

    // Assigning random pointers
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next;
    head->next->next->next->random = head->next;

    cout << "Original Linked List with Random Pointers:" << endl;
    printClonedLinkedList(head);

    head = Copy_LL_with_random_ptr_BR(head);
    cout << "\nCloned Linked List with Random Pointers:" << endl;
    printClonedLinkedList(head);

  return 0;                                                                                          
}
