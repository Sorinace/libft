#include <string.h>
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*nod;
	
	nod = NULL;
	nod = *alst;
	if (nod != NULL)
	{
		*alst = new;
		new->next = nod;
	}
}