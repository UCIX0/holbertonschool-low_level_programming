#include "search_algos.h"
#include <math.h>

/**
 * busqueda_salto - busca un valor en un array de
 * enteros utilizando el algoritmo de Búsqueda por Saltos
 *
 * @array: array de entrada
 * @size: tamaño del array
 * @value: valor a buscar
 * Return: índice del número
 */
int busqueda_salto(int *array, size_t size, int value)
{
	size_t tamaño = size;
	int valor = value;
	int indice, m, k, previo;

	if (array == NULL || tamaño == 0)
		return (-1);

	m = (int)sqrt((double)tamaño);
	k = 0;
	previo = indice = 0;

	while (indice < (int)tamaño && array[indice] < valor)
	{
		printf("Valor revisado array[%d] = [%d]\n", indice, array[indice]);

		if (array[indice] == valor)
			return (indice);
		k++;
		previo = indice;
		indice = k * m;
	}

	printf("Valor encontrado entre índices [%d] y [%d]\n", previo, indice);

	for (; previo <= indice && previo < (int)tamaño; previo++)
	{
		printf("Valor revisado array[%d] = [%d]\n", previo, array[previo]);
		if (array[previo] == valor)
			return (previo);
	}

	return (-1);
}
