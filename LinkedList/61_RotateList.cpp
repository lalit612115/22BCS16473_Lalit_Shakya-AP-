ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        ListNode* curr = head;
        int length = 1;
        while (curr->next != nullptr) {
            curr = curr->next;
            length++;
        }
        curr->next = head;

        k = k % length;  
        if (k == 0) {
            curr->next = nullptr;  
            return head;
        }
        ListNode* newTail = head;
        for (int i = 1; i < length - k; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }