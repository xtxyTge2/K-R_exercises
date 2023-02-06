#include <stdio.h>

static float celcius_to_fahrenheit(int celcius);

int main()
{
	int min_celcius = 0;
	int max_celcius = 300;
	int step_size = 10;

	int steps = ((max_celcius - min_celcius)/ step_size) + 1;
	printf("Celcius\tFahrenheit\n");
	for (int i = 0; i < steps; i++) {
		int celcius_value = i * step_size;
		float fahrenheit_value = celcius_to_fahrenheit(celcius_value);

		printf("%7d\t%10.1f\n", celcius_value, fahrenheit_value);
	}
}

// C = (5 / 9) * (F - 32);
// F = (9/5) * C + 32;
static float celcius_to_fahrenheit(int celcius) {
	return  (9.0f / 5.0f) * celcius + 32.0f;
}