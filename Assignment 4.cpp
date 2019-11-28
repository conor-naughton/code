#include <stdio.h>
int main()
{
        int counter = 0;
		int number[10];
		double numberweight = 10;
		double average = 0;
		double total = 0;
		double max = 0;
		double min = 0;
		double tempval = 0.0f;
		

		printf("Program to calculate average, min and max of up to 10 floating point numbers\n");
		//scanf_s("%lf",&numberweight);
		counter = 1;
		while (counter <= numberweight)
		{
			
			printf("Enter up to 10 numbers <0.0 to end input>:\n");
			scanf_s("%lf", &tempval); 

			if (tempval == 0.0)
			{
				break;
			}
		
			if (counter == 1) {
				max = tempval;
				min = tempval;
			}

			if (tempval > max) {
				max = tempval;  
			}

			if (tempval < min) {
				min = tempval;
			}
			average += tempval;

			
			counter++;

				

		}



		average /= counter-2;

		if (counter == 1) {
			printf("No numbers entered -quitting");
		}
		else {
			printf("Average Value = %.2lf max=%.2lf min=%.2lf ", average, max, min);
		}
}