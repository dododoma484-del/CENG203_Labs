#pragma once
#include "Node.h"                   // same folder -> just the file name
 
class LinkedList
{
private:
    Node* head;                     // first node (nullptr = empty list)
 
public:
    LinkedList();                   // constructor: creates an empty list
    ~LinkedList();                  // destructor : deletes all nodes
 
    void insertAtFront(int value);  // prototypes only - NO bodies here
    void display() const;
    bool isEmpty() const;


void insertAtEnd(int value); // Q2
int length() const; // Q2
void createFromArray(const int arr[], int n); // Q2
int search(int value) const; // Q3: index or -1
int update(int oldValue, int newValue); // Q4: count changed
bool insertAt(int index, int value); // Q5: 0 = front
bool deleteValue(int value); // Q6: first match only
void merge(LinkedList& other);

};

