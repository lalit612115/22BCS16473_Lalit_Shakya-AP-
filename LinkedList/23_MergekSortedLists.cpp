ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto comp = [](ListNode* a, ListNode* b) {
            return a->val > b->val; 
        };
        priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> minHeap(comp);
        for (ListNode* list : lists) {
            if (list) {
                minHeap.push(list);
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (!minHeap.empty()) {
            ListNode* smallest = minHeap.top();
            minHeap.pop();
            current->next = smallest;
            current = current->next;
            if (smallest->next) {
                minHeap.push(smallest->next);
            }
        }

        // Step 4: Return the merged list (skipping the dummy node)
        return dummy->next;
    }