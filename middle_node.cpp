using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
 public:
  int value;
  LinkedList* next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList* middleNode(LinkedList* linkedList) {
  LinkedList *lead = linkedList, *lag = linkedList;
  int leadLength = 0, lagLength = 0;

  while (lead) {
    lead = lead->next;
    leadLength++;
  }

  while (lagLength++ != leadLength / 2) {
    lag = lag->next;
  }
  
  return lag;
}

/*==========*/

using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
 public:
  int value;
  LinkedList* next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList* middleNode(LinkedList* linkedList) {
  LinkedList *lead = linkedList, *lag = linkedList;

  while (lead != NULL) {
    if (lead->next && lead->next->next == NULL) {
      return lag->next;
    } else if (lead->next == NULL) {
      return lag;
    }

    lead = lead->next->next;
    lag = lag->next;
  }
  
  return lag;
}
