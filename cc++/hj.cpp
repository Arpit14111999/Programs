SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *temp,*ptr1,*ptr2,*save,*head3;
ptr1=head1;ptr2=head2;int n=0;
   while(ptr1!=NULL&&ptr2!=NULL)
   {
       if(ptr1->data >= ptr2->data)
       {   

           temp=new SinglyLinkedListNode(ptr2->data);
           temp->next=NULL;
           if(n==0)
           {
               head3=temp;
               save=head3;n++;
           }
           else
           {
               save->next=temp;
                save=temp;
           }
           ptr2=ptr2->next;
       }
       if(ptr1->data < ptr2->data)
       {
           temp=new SinglyLinkedListNode(ptr1->data);
           temp->next=NULL;
           if(n==0)
           {
               head3=temp;
               save=head3;n++;
           }
           else
           {
               save->next=temp;
                save=temp;
           }
           ptr1=ptr1->next;
       }
   }
   while(ptr1!=NULL)
   {
      temp=new SinglyLinkedListNode(ptr1->data);
           temp->next=NULL;
           save->next=temp;
           save=temp;  
           ptr1=ptr1->next;
   }
    while(ptr2!=NULL)
   {
      temp=new SinglyLinkedListNode(ptr2->data);
           temp->next=NULL;
           save->next=temp;
           save=temp;  
           ptr2=ptr2->next;
   }
   return(head3);
}