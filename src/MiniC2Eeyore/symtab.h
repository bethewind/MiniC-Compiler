#ifndef __SYMTAB_H__
#define __SYMTAB_H__

#include <stdio.h>
#include "tree.h"

#define ST_INIT	0
#define ST_INT	1
#define ST_ARR	100
#define ST_FUNC	1000

struct Symbol
{
	int idx;
	int type;
	char* name;
	char eeyore_var_type;
	int eeyore_var_idx;
	int bornAt;
	int dieAt;
	struct TreeNode *node;
	struct Symbol *nxt;
	struct Symbol *prv;
};

int n_symbol;
struct Symbol *symtab;
struct Symbol *tail;

struct Symbol* alloc_symbol(int, int, char*, struct TreeNode*);
void free_symbol(struct Symbol*);

void init_symtab();
struct Symbol* get_sym(int, char*);
void set_death(int, int);
void purge_var(int, int);
void print_symtab(FILE*);

#endif
