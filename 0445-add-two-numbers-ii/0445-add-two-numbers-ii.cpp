class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;

        // Push all digits of l1 into stack 1
        while(l1 != NULL) {
            s1.push(l1->val);
            l1 = l1->next;
        }

        // Push all digits of l2 into stack 2
        while(l2 != NULL) {
            s2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        ListNode* head = NULL;

        // Add digits starting from the last digit
        while(!s1.empty() || !s2.empty() || carry) {
            int sum = carry;

            if(!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }

            if(!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }

            carry = sum / 10;
            int digit = sum % 10;

            // Insert new node at the beginning
            ListNode* newnode = new ListNode(digit);
            newnode->next = head;
            head = newnode;
        }

        return head;
    }
};