#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

/* Singly-linked list node */

struct ListNode{
    int val;
    struct ListNode* next;
};

/* create node & List */

void insertFront(int val, struct ListNode* headNode){
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = headNode->next;
    headNode->next = newNode;
}

void createList(int num, struct ListNode* headNode){
    if(num == 0){
        insertFront(0, headNode);
    }
    else{
        int digits = (int)log10(num);           // num of digits
    
        /* In forward Direction */
        /*for(int i=0; i<= digits; i++){
            insertFront( (int)(num % 10) , headNode);
            num /= 10;
        }*/

        /* In Reverse Order */
        if(digits){
            int pos, n;
            while(digits>=0){
                pos = (int)pow(10, digits);         // 位數, e.g. 100
                n = (int)(num/pos);                 // 該位數值, e.g. 324 的 3
                insertFront(n, headNode);
                num -= n*pos;
                digits--;
            }
        }
    }
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    result->val = 0;
    result->next = NULL;

    struct ListNode* ptr = result;

    int num = 0;                            // 記錄進位
    l1 = l1->next; l2 = l2-> next;

    while(l1 || l2 || num){
        
        if(l1){
            num += l1->val;
            l1 = l1->next;
        }
        
        if(l2){
            num += l2->val;
            l2 = l2->next;
        }
        
        // In Reverse Order -> 不可以用 insertFront(num % 10, result);
        
        ptr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        ptr = ptr-> next;
        ptr->val = num % 10;
        ptr->next = NULL;
        num /= 10;
    }

    return result;
}

/* List Info */

void printList(struct ListNode* headNode){
    if(headNode->next == NULL){
        printf("The list is empty.\n");
    }
    else{
        struct ListNode* curNode = headNode->next;
        while(curNode != NULL){
            printf("%d ", curNode->val);
            curNode = curNode->next;
        }
    }
}

void printReverse(struct ListNode* headNode){
    if(headNode->next == NULL){
        printf("The list is empty.\n");
    }
    else{
        struct ListNode* curNode = headNode->next;
        int i = 1;
        int num = 0;
        while(curNode != NULL){
            num += curNode->val * i;
            curNode = curNode->next;
            i *= 10;
        }
        printf("%d", num);
    }
}

/* Delete Node(s) */

void deleteNode(struct ListNode* preNode){
    struct ListNode* delNode = preNode->next;
    if(delNode != NULL){                    // not head node
        preNode->next = delNode->next;
        free(delNode);
    }
}

void deleteList(struct ListNode* headNode){              // remain head node
    while(headNode->next != NULL){
        deleteNode(headNode);
    }
}

int isPosNumber(char* num){
    int i = strlen(num);
    while(i--){
        if ( (num[i]>='0' && num[i] <= '9'))
            continue;
        return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){
    
    if(argc < 3){
        printf("Usage: %s int1 int2.\n", argv[0]);
        return 1;
    }  

    if( ! (isPosNumber(argv[1]) && isPosNumber(argv[2]) )){
        printf("Enter Positive Integers. \n");
        return 2;
    }
    
    /* Initializa head node */ 
    struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head1->val = 0; head1->next = NULL;
    head2->val = 0; head2->next = NULL;

    /* create Inital Lists */
    createList(atoi(argv[1]), head1);
    createList(atoi(argv[2]), head2);
   
    /* add Two Numbers */

    struct ListNode* result = addTwoNumbers(head1, head2);

    /* print result */

    printf("\nInput = "); printList(head1);
    printf(", "); printList(head2);
    printf("\nOutput = "); printList(result);

    printf("\n\nExplanation: ");
    printReverse(head1); 
    printf(" + ");
    printReverse(head2);
    printf(" = ");
    printReverse(result);
    
    printf("\n");

    /* clear all */

    deleteList(head1);
    deleteList(head2);
    deleteList(result);
    free(head1);
    free(head2);
    free(result);
    return 0;
}
