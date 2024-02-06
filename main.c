#include <stdio.h>

struct sdata
{
    int rollno;
    char name[20];
    float marks;
};

struct sdata studentdata[100];
int noofstudent = 0;

void addstudent();
void getstudent();

int main()
{
    int choice;

    do
    {
        printf("\nTotal students data we have: %d / 100\n", noofstudent);
        printf("1] Add student data\n");
        printf("2] Get student data\n");
        printf("3] Calculate average marks\n");
        printf("4] Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addstudent();
            break;

        case 2:
            getstudent();
            break;

        case 3:
            // Calculate average marks
            break;

        case 4:
            // Exit
            printf("Exiting the program.\n");
            printf("____________________________");
            break;

        default:
        printf("\n.........................................");
            printf("\nNo such option, Try again...\n");
            printf(".........................................\n");
            printf("_________________________________");
            break;
        }
    } while (choice != 4);

    return 0;
}

void addstudent()
{
            printf("\n____________________________________\n");
    printf("\n\n*** Add New Student Information ***\n\n");

    if (noofstudent >= 100)
    {
    printf("\n.........................................");
        printf("Your Limit is over\n");
        printf(".........................................\n");
        printf("______________________________");
        return;
    }

    printf("Enter Name of Student: ");
    scanf("%s", studentdata[noofstudent].name);

    printf("\nEnter marks of student: ");
    scanf("%f", &studentdata[noofstudent].marks);

    printf("\nEnter Roll no of student: ");
    scanf("%d", &studentdata[noofstudent].rollno);

    noofstudent++;

printf("\n.........................................");
    printf("\n\nStudent added succesfully\n\n");
printf(".........................................\n");
  printf("________________________________\n\n\n\n ");

}

void getstudent()
{
            printf("\n_____________________________________\n");
    int i = 0;
    int rn;

    printf("\nEnter Roll No of student:");
    scanf("%d", &rn);

    for (i = 0; i < noofstudent; i++)
    {
        if (studentdata[i].rollno == rn)
        {

    printf("\n\v\v **** Student Information **** \n\v");
            printf("NAME : %s\n", studentdata[i].name);
            printf("ROLL  NO : %d\n", studentdata[i].rollno);
            printf("Marks : %f\n", studentdata[i].marks);
printf("________________________________");
          printf("\n\n\n\n");
            return;
        }
    }
printf("\n.........................................");
    printf("\n\nStudent not found. Try again\n\n\n");
    printf(".........................................\n");
    printf("__________________________________");
}
