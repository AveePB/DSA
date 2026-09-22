#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

void freeList(struct Node *head) {
    struct Node *temp;

    // Delete all the nodes of singly linked list
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

struct Node *pushBack(struct Node *head, int value) {
    // Create new node of singly linked list
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->value = value;
    new_node->next = NULL;

    // List is empty
    if (head == NULL) return new_node;

    // Push back new node
    struct Node *temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = new_node;
    return head;
}

int main() {
    // Create singly linked list and variables
    struct Node *global_head = NULL;
    int n, m, global_num_of_changes = 1024;
    char s[1024], t[1024];
    scanf("%d %d %s %s", &n, &m, &s, &t);

    // Brute force strategy
    for (int i=0; i<(m-n)+1; i++) {
        struct Node *local_head = NULL;
        int num_of_changes = 0;

        // Compare all characters
        for (int j=0; j<n; j++) {
            if (s[j] != t[i+j] && s[j] != '?') {
                local_head = pushBack(local_head, j+1);
                num_of_changes++;
            }
        }

        // Found better solution
        if (num_of_changes < global_num_of_changes) {
            struct Node *temp = global_head;
            global_head = local_head;
            local_head = temp;

            global_num_of_changes = num_of_changes;
        }

        freeList(local_head);
    }

    // Show result
    printf("%d \n", global_num_of_changes);
    struct Node *temp = global_head;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }

    // Clean up
    freeList(global_head);
    return 0;
}
