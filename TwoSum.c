#include <stdio.h>
#include <stdlib.h>

// Structure to represent each data element stored
struct Node {
    int val;
    int index;
    struct Node* next;
};

// Structure to represent the hash table
struct HashTable {
    struct Node** table;
    int table_size;
};

// Function to create a new node
struct Node* create_node(int val, int index) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf(">>> Error: Insufficient Memory\n");
        exit(1);
    }
    new_node->val = val;
    new_node->index = index;
    new_node->next = NULL;
    return new_node;
}

// Hash function: Converts a key into an index within the hash table
int create_hash(int key, int table_size) {
    return key % table_size;
}

// Initializes the hash table
void init_hashtable(struct HashTable* hashtable, int table_size) {
    hashtable->table_size = table_size;
    hashtable->table = (struct Node**)malloc(table_size * sizeof(struct Node*));
    if (hashtable->table == NULL) {
        printf(">>> Error: Insufficient Memory\n");
        exit(1);
    }
    for (int i = 0; i < table_size; ++i) {
        hashtable->table[i] = NULL;
    }
}

// Inserts a new element into the hash table
void insert(struct HashTable* hashtable, int val, int index) {
    int key = val; // Use the value as the key for this problem

    int hash_index = create_hash(key, hashtable->table_size);

    struct Node* new_node = create_node(val, index);

    if (hashtable->table[hash_index] == NULL) {
        hashtable->table[hash_index] = new_node;
    } else {
        struct Node* temp = hashtable->table[hash_index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// Finds indices of the two numbers such that they add up to the target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    struct HashTable hashtable;
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    init_hashtable(&hashtable, numsSize);

    for (int i = 0; i < numsSize; ++i) {
        int complement = target - nums[i];
        int hash = create_hash(complement, hashtable.table_size);

        struct Node* temp = hashtable.table[hash];
        while (temp != NULL) {
            if (temp->val == complement && temp->index != i) {
                result[0] = temp->index;
                result[1] = i;
                return result;
            }
            temp = temp->next;
        }

        insert(&hashtable, nums[i], i);
    }

    return result;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize;
    int* result1 = twoSum(nums1, sizeof(nums1) / sizeof(nums1[0]), target1, &returnSize);

    printf("Output: [%d, %d]\n", result1[0], result1[1]);
    free(result1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int* result2 = twoSum(nums2, sizeof(nums2) / sizeof(nums2[0]), target2, &returnSize);

    printf("Output: [%d, %d]\n", result2[0], result2[1]);
    free(result2);

    int nums3[] = {3, 3};
    int target3 = 6;
    int* result3 = twoSum(nums3, sizeof(nums3) / sizeof(nums3[0]), target3, &returnSize);

    printf("Output: [%d, %d]\n", result3[0], result3[1]);
    free(result3);

    return 0;
}
