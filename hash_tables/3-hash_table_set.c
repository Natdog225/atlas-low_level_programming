#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key. value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    char *value_copy;
    unsigned long int index, i;

    /* Parameter validation */
    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);
