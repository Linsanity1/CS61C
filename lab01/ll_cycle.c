#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *tortoise = head;
    node *hare = head;
    while (hare != NULL) {
        if (hare->next != NULL) {
            hare = hare->next;
        }
        hare = hare->next;
        tortoise = tortoise->next;
        if (hare == tortoise) {
            return 1;
        }
    }

    return 0;
}
