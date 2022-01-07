#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
	printf("%d\n", 12&23);
	Stack sta = new_stack();
	print_stack(sta);
	printf("Taille de la pile %d\n", lengh_st(sta));

	sta = push_stack(sta, 14);
	sta = push_stack(sta, 47);
	sta = push_stack(sta, 23);
	sta = push_stack(sta, 31);
	print_stack(sta);
	printf("Taille de la pile %d\n", lengh_st(sta));
	
	printf("............\n");

	sta = pop_stack(sta);
	print_stack(sta);

	printf("Sommet actuel %d...", top_stack(sta));
	printf("Taille de la pile %d\n", lengh_st(sta)) ;
	
	printf("............\n");
	sta = clear_stack(sta);
	print_stack(sta);
printf("Taille de la pile %d\n", lengh_st(sta));

	return (0);
}



void printList(t_list *head)

	{

	t_list *tmp = head;

	

	while(tmp != NULL){

	printf(" %d|%d\\ ", tmp->content, tmp->index);

	tmp = tmp->next;

	}

	printf("\n");

	}

	

	// create stack a and add number

	t_list *ft_init(char **ag, int ac)

	{

	t_list *tmp;

	t_list  *res;

	int i;

	if(ac == 2)

	i = 0;

	else

	i = 1;

	int j = 0;

	

	res = ft_lstnew(ft_atoi(ag[i]));

	res->index = j;

	i++;

	while (ag[i])

	{

	tmp = ft_lstnew(ft_atoi(ag[i]));

	ft_lstadd_back(&res, tmp);

	j++;

	tmp->index = j;

	i++;

	}

	return (res);

	}

	

	int main(int ac, char **ag)

	{

	

	t_swap  *tab;

	char **args;

	tab = malloc(sizeof(t_swap));

	

	if(ac == 2)

	args = ft_split(ag[1], ' ');

	else

	args = ag;

	tab->stack_a = ft_init(args, ac);

	tab->stack_tmp = ft_init(args, ac);

	free(args);

	int len = ft_lstsize(tab->stack_a);

	ft_sortindex(tab);

	ft_index_sorted(tab);

	free(tab->sorted);

	if(issorted(tab->stack_a) == 1)

	return 0;

	if(len == 5)

	sort_small(tab);

	else

	radix_sort(tab);

	

	// // print res ---------------------------------

	// printList(tab->stack_a);

	//  printList(tab->stack_b);

	//  printf("|||| %d |||| \n", tab->ope);

	}

