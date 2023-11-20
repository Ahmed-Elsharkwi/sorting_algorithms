#include"sort.h"
/**
 * insertion_sort_list -
 * sorts a doubly linked list of integers in ascending order
 * @list: is a pointer to the list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *temp, *pre = NULL, *post;
	int key;
        post = (*list);

        while(post)
        {
		temp = post;
		pre = temp->prev;
		key = temp->n;
		post = post->next;
                while (pre != NULL && pre->n > key)
                {
                        pre->next = temp->next;
			if (temp->next)
				temp->next->prev = pre;

                        temp->prev = pre->prev;
			if (pre->prev)
				pre->prev->next = temp;
                        pre->prev = temp;
                        temp->next = pre;
                        pre = temp->prev;
			if ((*list)->prev != NULL)
				*list = temp;
			print_list(*list);
                }
        }
}
