 ListNode* sortList(ListNode* head) {
        
  if (!head) return nullptr;

    multimap<int, ListNode*> mp;

    ListNode* temp = head;

    while (temp != nullptr) {
        mp.insert(pair<int, ListNode*>(temp->val, temp));
        temp = temp->next;
    }

    
    ListNode dummy(0);
    ListNode* newhead = &dummy;

    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        newhead->next = itr->second;
        newhead = newhead->next;
    }
    
     newhead->next = nullptr;
    
    return dummy.next;

    }