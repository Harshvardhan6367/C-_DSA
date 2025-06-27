/*


--->Leet code Question



Node* intersectPoint(Node* head1, Node* head2) {
    //  Code Here
    Node*curr1=head1, *curr2=head2;
        int count1=0, count2=0;
        while(curr1)
        {
            count1++;
            curr1=curr1->next;
        }
        while(curr2)
        {
            count2++;
            curr2=curr2->next;
        }
        curr1=head1, curr2=head2;
        while(count1>count2)
        {
            curr1=curr1->next;
            count1--;
        }
        while(count2>count1)
        {
            curr2=curr2->next;
            count2--;
        }
        while(curr1!=curr2)
        {
            curr1=curr1->next;
            curr1=curr2->next;
        }
        // if(curr1==NULL)
        //     return -1;
        
        return curr1;
        
        
        
        
        
        */




        /*
        
        
        Alternate methord ----->


        Node1 *curr1 = head1;
        while(curr1->next)
        {
            curr1=curr1->next;
        }
        curr1->next=head1;
        
        
        Node *slow=head2, *fast=head2;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        if(fast==NULL || fast->next==NULL)  // Linked list not connected
            return -1;
        
        slow=head2;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        while(slow->next!=fast)
        {
            slow=slow->next;
        };

        return slow;


        
        
        
        
        
        */