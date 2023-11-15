#include "STUDENT_DATABASE.h"

struct Student_Data
{
    int ID;
    char Name[50];
    float Height;
};

struct Student_Node
{
    struct Student_Data Data;
    struct Student_Node *Next;
};

struct Student_Node *Head = NULL;

void Add_Data(struct Student_Node* Node)
{
    char Temp[50];
    printf("Enter Student ID: ");
    gets(Temp);
    Node->Data.ID = atoi(Temp);

    printf("Enter Student Name: ");
    gets(Node->Data.Name);

    printf("Enter Student Height: ");
    gets(Temp);
    Node->Data.Height = atof(Temp);

    Node->Next = NULL;
}

void Add_Student(void)
{
    struct Student_Node* Last_Student;
    struct Student_Node* New_Student;
    if(Head == NULL)
    {
        New_Student = (struct Student_Node*)malloc(sizeof(struct Student_Node));
        Head = New_Student;
    }
    else
    {
        Last_Student = Head;
        while(Last_Student->Next != NULL)
        {
            Last_Student = Last_Student->Next;
        }
        New_Student = (struct Student_Node*)malloc(sizeof(struct Student_Node));
        Last_Student->Next = New_Student;
    }
    Add_Data(New_Student);
}

int Delete_Student(void)
{
    int ID;
    char Temp[50];
    printf("Enter Student ID to be Deleted: ");
    gets(Temp);
    ID = atoi(Temp);
    if(Head == NULL)
    {
        printf("No Students in the Database\n");
        return 0;
    }
    else
    {
        struct Student_Node *Current_Student = Head;
        struct Student_Node *Previous_Student = Head;
        while(Current_Student->Data.ID != ID)
        {
            if(Current_Student->Next == NULL)
            {
                printf("Student ID not found\n");
                return 0;
            }
            else
            {
                Previous_Student = Current_Student;
                Current_Student = Current_Student->Next;
            }
        }
        if(Current_Student == Head)
        {
            Head = Head->Next;
        }
        else
        {
            Previous_Student->Next = Current_Student->Next;
        }
        free(Current_Student);
        printf("Student Deleted\n");
        return 1;
    }
}

void View_Students(void)
{
    if(Head == NULL)
    {
        printf("No Students in the Database\n");
    }
    else
    {
        struct Student_Node *Current_Student = Head;
        while(Current_Student != NULL)
        {
            printf("Student ID: %d\n", Current_Student->Data.ID);
            printf("Student Name: %s\n", Current_Student->Data.Name);
            printf("Student Height: %f\n", Current_Student->Data.Height);
            Current_Student = Current_Student->Next;
        }
    }
}

void Delete_All_Data(void)
{
    if(Head == NULL)
    {
        printf("No Students in the Database\n");
    }
    else
    {
        struct Student_Node *Current_Student = Head;
        struct Student_Node *Next_Student = Head;
        while(Current_Student != NULL)
        {
            Next_Student = Current_Student->Next;
            free(Current_Student);
            Current_Student = Next_Student;
        }
        Head = NULL;
        printf("All Students Deleted\n");
    }
}

int List_Length(struct Student_Node* Head)
{
    int Length = 0;
    struct Student_Node *Current_Student = Head;
    while(Current_Student != NULL)
    {
        Length++;
        Current_Student = Current_Student->Next;
    }
    return Length;
}

void Reverse_List(struct Student_Node** Head)
{
    struct Student_Node* Previous_Student = NULL;
    struct Student_Node* Current_Student = *Head;
    struct Student_Node* Next_Student = NULL;
    while(Current_Student != NULL)
    {
        Next_Student = Current_Student->Next;
        Current_Student->Next = Previous_Student;
        Previous_Student = Current_Student;
        Current_Student = Next_Student;
    }
    *Head = Previous_Student;
    printf("All Students Orders Reversed\n");
}
