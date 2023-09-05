#include "lists.h"

/**
 * check_cycle - this check for loop in LL
 * @list: this is the head of linked list
 *
 * Description - check for loops in the LL.
 * Return: return 1 if cycled, return 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
