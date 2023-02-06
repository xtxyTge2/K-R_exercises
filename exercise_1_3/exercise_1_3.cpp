#include <stdio.h>

static float fahrenheit_to_celsius(int fahrenheit_value);

int main()
{
	int min_fahrenheit = 0;
	int max_fahrenheit = 300;
	int step_size = 20;

	int steps = ((max_fahrenheit - min_fahrenheit)/ step_size) + 1;
	printf("Fahrenheit\tCelcius\n");
	for (int i = 0; i < steps; i++) {
		int fahrenheit_value = i * step_size;
		float celcius_value = fahrenheit_to_celsius(fahrenheit_value);

		printf("%10d\t%7.1f\n", fahrenheit_value, celcius_value);
	}
}

static float fahrenheit_to_celsius(int fahrenheit_value) {
	return (5.0f / 9.0f) * (((float)fahrenheit_value) - 32.0f);
}