/**
 * swap_int - swaps the values of two integer
   *		using two input parameters
    * @a: input parameter
    * @b: input parameter 2
  * Return: Nothing
*/



void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
