#include "laps.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct car_s
{
	int id;
	int laps;
	struct car_s *next;
} car_t;

static car_t *cars = NULL;

/**
 * add_car - Adds a new car to the linked list
 * @id: Identifier of the car
 *
 * Return: Pointer to the newly added car
 */
car_t *add_car(int id)
{
	car_t *new_car = malloc(sizeof(car_t));
	car_t *current = cars;

	if (new_car == NULL)
		return (NULL);

	new_car->id = id;
	new_car->laps = 0;
	new_car->next = NULL;

	if (cars == NULL)
	{
		cars = new_car;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_car;
	}

	printf("Car %d joined the race\n", id);
	return (new_car);
}
