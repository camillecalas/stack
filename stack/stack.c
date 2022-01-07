#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack new_stack(void)
{
	return (NULL);
}

Bool is_empty_stack(Stack st)
{
	if (st == NULL)
		return (true);
	return false;
}

Stack push_stack(Stack st, int x)
{
	stackElement *element;
	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		fprintf(stderr, "Probleme malloc");
		exit(EXIT_FAILURE);
	}
	element -> value = x;
	element -> next = st;

	return (element);
}

Stack	pop_stack(Stack st)
{
	stackElement *element;
	if (is_empty_stack(st))
		return (new_stack());
	element = st -> next;
	free (st);
	return (element);
}

void	print_stack(Stack sta)
{
	if (is_empty_stack(sta))
	{
		printf("Rien a afficher\n");
		return ;
	}
	while (!is_empty_stack(sta))
	{
		printf("%d\n", sta->value);
		sta = sta -> next;
	}
	
}

int		top_stack(Stack st)
{
	if (is_empty_stack(st))
	{	printf ("aucun sommet\n");
		
	}
	return (st -> value);
}

int	lengh_st(Stack st)
{
	int lenght = 0;
	while (!is_empty_stack(st))
	{
		lenght++;
		st = st -> next;
	}
	return (lenght);
}
/*
Stack	clear_stack(Stack sta)
{
	stackElement *element;
	
	if (is_empty_stack(sta))
		return (new_stack());
	element = sta -> next;
	free (sta);

	return (clear_stack(element));

}
*/
Stack	clear_stack(Stack sta)
{
	while (!is_empty_stack(sta))
	{
		sta = pop_stack(sta);	
	}
	return(new_stack());
}