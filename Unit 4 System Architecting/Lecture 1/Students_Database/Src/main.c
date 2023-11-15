#include "STUDENT_DATABASE.h"

int main(void)
{
    char Choice[50];
    extern struct Student_Node *Head;
    while(1)
    {
        printf("****************************************************************************\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Display Students\n");
        printf("4. Students Count\n");
        printf("5. Reverse All Students Orders\n");
        printf("6. Delete All Students\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        gets(Choice);
        printf("****************************************************************************\n");
        switch(atoi(Choice))
        {
            case 1:
                Add_Student();
                break;
            case 2:
                Delete_Student();
                break;
            case 3:
                View_Students();
                break;
            case 4:
                printf("Students Count is: %d\n",List_Length(Head));
                break;
            case 5:
                Reverse_List(&Head);
                break;
            case 6:
                Delete_All_Data();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}