#include <string.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*nod;
	
	nod = NULL;
	nod = lst;
	if (nod != NULL)
	{
		while(nod)
		{
			f(nod);
			nod = nod->next;
		}
	}
}