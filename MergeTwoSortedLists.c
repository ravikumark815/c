/*
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.

Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0]

Constraints:
The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct node *create_node(int key)
{
    struct node* temp = (struct node*) malloc (sizeof(struct node*));
	if (temp == NULL)
		exit(0);
	temp->val = key;
	temp->next = NULL;
	
	return temp;
}

void insert(struct node **head, int key)
{
    struct node *temp = create_node(key);

    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    struct node *cur = *head;
    while (cur->next)
    {
        cur = cur->next;
    }

    cur->next = temp;
    return;
}

void printlist(struct node *head)
{
    printf("Resultant List:\n");
    while (head->next) {
        printf("%d-", head->val);
        head = head->next;
    }
    printf("%d\n", head->val);
}

struct node* mergelists(struct node *list1, struct node *list2)
{
    struct node res_head;
    struct node *res = &res_head;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            res->next = list1;
            list1 = list1->next;
        }
        else
        {
            res->next = list2;
            list2 = list2->next;
        }
        res = res->next;
    }
    if (list1)
        res = list1;
    if (list2)
        res = list2;

    return res_head.next;
}

void main()
{
    int l1[] = {1,2,4};
    int l2[] = {1,3,4};

    int l1size = sizeof(l1) / sizeof(l1[0]);
    int l2size = sizeof(l2) / sizeof(l1[0]);

    struct node *list1, *list2;
    for (int i = 0; i < l1size; i++)
    {
        insert(&list1, l1[i]);
    }
    for (int i = 0; i < l2size; i++)
    {
        insert(&list2, l2[i]);
    }
    struct node *result = mergelists(list1, list2);
    printlist(result);
    return;
}
