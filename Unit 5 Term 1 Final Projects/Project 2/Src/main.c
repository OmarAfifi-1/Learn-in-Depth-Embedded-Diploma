#include "Student_Database.h"

ELEMENT_TYPE Database_Queue[100];

int main(void)
{
    FIFO Students_Info;
    int Roll_Number,Course;
    char Name[25];
    if(FIFO_Init(&Students_Info, Database_Queue, 100) == FIFO_ERROR)
    {
        printf("[Error] in Initializing the FIFO\n");
        return 0;
    }
    int Choice;
    
    while (1)
	{
        printf("--------------------------------------------------------------------------------------\n");
		printf("Choose The Required Task to Perform\n");
		printf("1. Fill Student Data From File\n");
		printf("2. Fill Student Data Manually\n");
		printf("3. Get a Student Details by Roll Number\n");
		printf("4. Get a Student Details by First Name\n");
		printf("5. Get The Students Enrolled in a Course by Course ID\n");
		printf("6. Get The Students Number in The Database\n");
		printf("7. Delete a Student by Roll Number\n");
		printf("8. Update a Student by Roll Number\n");
		printf("9. View All Database\n");
		printf("10. To Exit\n");
		printf("Enter Your Required Task : ");
		scanf("%d", &Choice);
        printf("--------------------------------------------------------------------------------------\n");
		switch(Choice)
		{
		case 1:
			Add_Student_From_File(&Students_Info);
			break;
		case 2:
			Add_Student_From_User(&Students_Info);
			break;
		case 3:
			printf("Enter The Roll Number of a Student to View: ");
			scanf("%d", &Roll_Number);
            printf("--------------------------------------------------------------------------------------\n");
			Find_Student_By_Roll_Number(&Students_Info, Roll_Number);
			break;
		case 4:
			printf("Enter The First Name of a Student to View: ");
			scanf("%s", Name);
            printf("--------------------------------------------------------------------------------------\n");
			Find_Student_By_First_Name(&Students_Info, Name);
			break;
		case 5:
			printf("Enter The Course ID: ");
			scanf("%d", &Course);
            printf("--------------------------------------------------------------------------------------\n");
			Find_Course_Students(&Students_Info, Course);
			break;
		case 6:
			Find_Total_Student_Number(&Students_Info);
			break;
		case 7: 
			printf("Enter The Roll Number of a Student to Delete: ");
			scanf("%d", &Roll_Number);
            printf("--------------------------------------------------------------------------------------\n");
			Delete_By_Roll_Number(&Students_Info, Roll_Number);
			break;
		case 8:
			printf("Enter The Roll Number of a Student to Update: ");
			scanf("%d", &Roll_Number);
            printf("--------------------------------------------------------------------------------------\n");
			Update_By_Roll_Number(&Students_Info, Roll_Number);
			break;
		case 9:
			View_All_Info(&Students_Info);
			break;
		case 10:
			exit(0);
		default:
			printf("[Error] Wrong Choice\n");
			break;
		}
	}
	return 0;
}