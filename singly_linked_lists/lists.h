#ifndef LIST_H
#define LIST_H
size_t list_len(const list_t *h);
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#endif