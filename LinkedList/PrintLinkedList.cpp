void printList(Node *head) {
        if (head == nullptr) return; 
        cout << head->data;
        
        
        while (head != nullptr) {
            cout << " " << head->data;
            head = head->next;
        }
        
        cout << endl;  
    }