#ifndef __STACK__H
#define __STACK__H

/* Type boolen */
typedef enum
{
	false,
	true
} Bool;
/* Definition d'une Pile */
typedef struct stackElement
{
	int		value;
	struct	stackElement *next;
} stackElement, *Stack;

/* Prototypes des fonctions */
Stack	new_stack(void);
Bool	is_empty_stack(Stack st);
Stack	push_stack(Stack st, int x);
Stack	clear_stack(Stack sta);
void	print_stack(Stack sta);
Stack	pop_stack(Stack st);
int		top_stack(Stack st);
int	lengh_st(Stack st);
#endif
