#include <stdio.h>

#include <stdlib.h>

# 1 
static int search_tree(int id, int node, int max_children, int width,
         int *parent_id, int *next_max_children, int *depth)
{
 int current, next, next_children;
 int i;

 *depth = *depth + 1;
 current = node + 1;
 next_children = (max_children / width) - 1;

 if (id == current) {
  *parent_id = node;
  *next_max_children = next_children;
  return 1;
 }

 for (i = 1; i <= width; i++) {
  next = current + next_children + 1;
  if (id == next) {
   *parent_id = node;
   *next_max_children = next_children;
   return 1;
  }
  if (id > current && id < next) {
   return search_tree(id, current, next_children, width,
        parent_id, next_max_children,
        depth);
  }
  current = next;
 }
 *parent_id = -1;
 *next_max_children = -1;
 return 0;
}