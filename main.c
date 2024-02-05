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
        printf("Total students data we have: %d / 100\n", noofstudent);
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
            break;

        default:
            printf("No such option, Try again...\n");
            break;
        }
    } while (choice != 4);

    return 0;
}

void addstudent()
{
    printf("\n\n*** Add New Student Information ***\n\n");

    if (noofstudent >= 100)
    {
        printf("Your Limit is over\n");
        return;
    }

    printf("Enter Name of Student: ");
    scanf("%s", studentdata[noofstudent].name);

    printf("\nEnter marks of student: ");
    scanf("%f", &studentdata[noofstudent].marks);

    printf("Enter Roll no of student: ");
    scanf("%d", &studentdata[noofstudent].rollno);

    noofstudent++;

    printf("Student data is added...\n\n");
}

void getstudent()
{
    printf("\n\v\v ****Student Information**** \n\v\v");
    int i = 0;
    int rn;

    printf("\nEnter Roll No of student: \n");
    scanf("%d", &rn);

    for (i = 0; i < noofstudent; i++)
    {
        if (studentdata[i].rollno == rn)
        {
            printf("NAME : %s\n", studentdata[i].name);
            printf("ROLL  NO : %d\n", studentdata[i].rollno);
            printf("Marks : %f\n", studentdata[i].marks);

          printf("\n\n\n\n");
            return;
        }
    }

    printf("Student not found. Try again\n");
}
