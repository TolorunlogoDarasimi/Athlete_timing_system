#include <stdio.h>

double sorting(double arr[], const int n, const int choice)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (choice == 1 && arr[j] > arr[j + 1])
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            if (choice == 2 && arr[j] < arr[j + 1])
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(const double arr[], const int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ", arr[i]);
    }
    printf("}");
}

int main()
{
    int num; // Numbers of Athletes
    const int max = 100;
    double timeTaken[max];
    int choice;

    // number of athletes
    printf("Enter the number of athletes: ");
    scanf("%d", &num);
    if (num > max)
    {
        printf("INVALID! more than maximium input");
        return 1;
    }

    // Collection of athletes' time
    for (int i = 0; i < num; i++)
    {
        printf("Athlete %d: ", i + 1);
        scanf("%lf", &timeTaken[i]);
    }
    printf("Enter the number of your choice:\n");
    printf("1 - Ascending\n");
    printf("2 - Descending\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    sorting(timeTaken, num, choice);
    printArray(timeTaken, num);

    printf("...");

    return 0;
}
