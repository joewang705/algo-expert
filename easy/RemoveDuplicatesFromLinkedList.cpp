using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  // Write your code here.
  LinkedList *itr = linkedList;
  while(itr->next != nullptr){
    if(itr->value == itr->next->value){
      itr->next = itr->next->next;
      continue;
    }

    itr = itr->next;
  }
  return linkedList;
}
