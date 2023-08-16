#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d : the dog to print
 *
 * Return : void
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(ni1)");
printf("Age: %f\n", d->age );
printf("Owner : %s\n", d->owner ? d->owner : "(ni1)");
