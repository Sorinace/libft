#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nod;
	
	nod = NULL;
	nod = alst[0];
	if (nod != NULL)
	{
		del(nod->content, nod->content_size);
		free (nod);
		alst[0] = NULL;
	}
}