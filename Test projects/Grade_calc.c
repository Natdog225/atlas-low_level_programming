#include <stdio.h>

int main()
{
	float projectGrades[100];
	int numProjects = 0;
	float PLDGrade = 0;
	float projectWeight, PLDWeight;
	float projectTotal = 0, currentGrade = 0, potentialGrade = 0;
	int numUnknownProjects = 0;
	char Current_Grade = 0;

	printf("Enter the weight for projects (as a percentage): ");
	scanf("%f", &projectWeight);
	printf("Enter the weight for PLD (as a percentage): ");
	scanf("%f", &PLDWeight);

	printf("Enter the number of projects: ");
	scanf("%d", &numProjects);

	for (int i = 0; i < numProjects; i++)
	{
		printf("Enter grade for project %d (or -1 if unknown): ", i + 1);

		scanf("%f", &projectGrades[i]);
		if (projectGrades[i] != -1)
		{
			projectTotal += projectGrades[i];
		}
		else
		{
			numUnknownProjects++;
		}
	}
	printf("Enter your PLD grade (or -1 if unknown): ");
	scanf("%f", &PLDGrade);
	currentGrade = (projectTotal / numProjects) * (projectWeight / 100);
	if (PLDGrade != -1)
	{
		currentGrade += PLDGrade * (PLDWeight / 100);
	}
	if (numProjects == 0)
	{
		printf("No projects entered. Cannot calculate current grade.\n");
	}
	else
	{
		currentGrade = (projectTotal / numProjects) * (projectWeight / 100);
		if (PLDGrade != -1)
		{
			currentGrade += PLDGrade * (PLDWeight / 100);
		}
		printf("\nCurrent Grade: %.2f%%\n", currentGrade);
	}

	if (numUnknownProjects > 0)
	{
		printf("\nPotential Grades for Remaining Projects:\n");
		for (int i = 0; i < numProjects; i++)
		{
			if (projectGrades[i] == -1)
			{
				for (int potentialProjectGrade = 100; potentialProjectGrade >= 70; potentialProjectGrade -= 10)
				{
					potentialGrade = (projectTotal + potentialProjectGrade) * (projectWeight / 100) / numProjects;
					if (PLDGrade != -1)
					{
						potentialGrade += PLDGrade * (PLDWeight / 100);
					}
					printf("  If you get %d%% in project %d: %.2f%%\n", potentialProjectGrade, i + 1, potentialGrade);
				}
			}
		}
	}

	return 0;
}