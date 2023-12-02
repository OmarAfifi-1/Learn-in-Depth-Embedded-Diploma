#include "Student_Database.h"

ELEMENT_TYPE Temp;

int Unique_ID_Check(FIFO* fifo, uint32_t ID)
{
    ELEMENT_TYPE* Temp = fifo->Tail;
    for(int i = 0; i < fifo->Count; i++)
    {
        if(Temp->ID == ID)
        {
            printf("[Error] Enter a Unique Roll Number\n");
            return 0;
        }
        Temp++;
    }
    return 1;
}

void Add_Student_From_File(FIFO* FIFO)
{
    FILE* File;
    File = fopen("StudentsData.txt","r");
    if(File == NULL)
    {
        printf("[Error] File Not Found\n");
        return;
    }
    while(!feof(File))
    {
        fscanf(File,"%d %s %s %lf %d %d %d %d %d",&Temp.ID,Temp.First_Name,Temp.Last_Name,&Temp.GPA,&Temp.Courses[0],&Temp.Courses[1],&Temp.Courses[2],&Temp.Courses[3],&Temp.Courses[4]);
        FIFO_Enqueue(FIFO,Temp);
    }
    printf("[Info] Students Data Successfully Added to Database\n");
    fclose(File);
}

void Add_Student_From_User(FIFO* fifo)
{
    do
    {
        printf("Enter Student Roll Number: ");
        scanf("%d",&Temp.ID);
    } while (!Unique_ID_Check(fifo,Temp.ID));
    printf("Enter Student First Name: ");
    scanf("%s",Temp.First_Name);
    printf("Enter Student Last Name: ");
    scanf("%s",Temp.Last_Name);
    printf("Enter Student GPA: ");
    scanf("%lf",&Temp.GPA);
    printf("Enter Student Courses IDs: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("Course %d: ",i+1);
        scanf("%d",&Temp.Courses[i]);
    }
    FIFO_Enqueue(fifo,Temp);
    printf("[Info] Student Added Successfully\n");
}

void Find_Student_By_Roll_Number(FIFO* fifo, uint32_t ID)
{
    ELEMENT_TYPE* Temp = fifo->Tail;
    if(fifo->Count == 0)
    {
        printf("[Error] No Students Found\n");
        return;
    }
    for(int i = 0; i < fifo->Count; i++)
    {
        if(Temp->ID == ID)
        {
            printf("Student Roll Number: %d\n",Temp->ID);
            printf("Student First Name: %s\n",Temp->First_Name);
            printf("Student Last Name: %s\n",Temp->Last_Name);
            printf("Student GPA: %lf\n",Temp->GPA);
            printf("Student Courses IDs: \n");
            for(int i = 0; i < 5; i++)
            {
                printf("%d ",Temp->Courses[i]);
            }
            printf("\n");
            return;
        }
        Temp++;
    }
    printf("[Error] Student Not Found\n");
}

void Find_Student_By_First_Name(FIFO* fifo, uint8_t* First_Name)
{
    ELEMENT_TYPE* Temp = fifo->Tail;
    if(fifo->Count == 0)
    {
        printf("[Error] No Students Found\n");
        return;
    }
    for(int i = 0; i < fifo->Count; i++)
    {
        if(!strcmp(Temp->First_Name , First_Name))
        {
            printf("Student Roll Number: %d\n",Temp->ID);
            printf("Student First Name: %s\n",Temp->First_Name);
            printf("Student Last Name: %s\n",Temp->Last_Name);
            printf("Student GPA: %lf\n",Temp->GPA);
            printf("Student Courses IDs: \n");
            for(int i = 0; i < 5; i++)
            {
                printf("%d ",Temp->Courses[i]);
            }
            printf("\n");
            return;
        }
        Temp++;
    }
    printf("[Error] Student Not Found\n");
}

void Find_Course_Students(FIFO* fifo, uint32_t Course_ID)
{
    ELEMENT_TYPE* Temp = fifo->Tail;
    int coco=0;
    if(fifo->Count == 0)
    {
        printf("[Error] No Students Found\n");
        return;
    }
    for(int i = 0; i < fifo->Count; i++)
    {
        for(int i=0;i<5;i++)
        {
            if(Temp->Courses[i] == Course_ID)
            {
            coco++;
            printf("Student Roll Number: %d\n",Temp->ID);
            printf("Student First Name: %s\n",Temp->First_Name);
            printf("Student Last Name: %s\n",Temp->Last_Name);
            printf("Student GPA: %lf\n",Temp->GPA);
            printf("\n");
            break;
            }
        }
        Temp++;
    }
    if(coco==0)
    {
        printf("[Info] No Student Registered This Course\n");
    }
    else
    {
        printf("[Info] %d Students Registered This Course\n",coco);
    }
}

void Find_Total_Student_Number(FIFO* fifo)
{
    printf("[Info] %d Students are in The Database\n", fifo->Count);
}

void Delete_By_Roll_Number(FIFO* fifo, uint32_t ID)
{
    ELEMENT_TYPE* Temp = fifo->Tail;
    if(fifo->Count == 0)
    {
        printf("[Error] No Students Found\n");
        return;
    }
    for(int i = 0; i < fifo->Count; i++)
    {
        if(Temp->ID == ID)
        {
            FIFO_Dequeue(fifo, Temp);
            printf("[Info] Student Deleted Successfully\n");
            return;
        }
        Temp++;
    }
    printf("[Error] Student Not Found\n");
}

void Update_By_Roll_Number(FIFO* fifo, uint32_t ID)
{
    int Choice;
    ELEMENT_TYPE* Temp = fifo->Tail;
    if(fifo->Count == 0)
    {
        printf("[Error] No Students Found\n");
        return;
    }
    for(int i = 0; i < fifo->Count; i++)
    {
        if(Temp->ID == ID)
        {
            printf("Enter What You Want To Update\n");
            printf("1. First Name\n");
            printf("2. Last Name\n");
            printf("3. Roll Number\n");
            printf("4. GPA\n");
            printf("5. Courses\n");
            printf("Enter Your Choice: ");
            scanf("%d",&Choice);
            printf("--------------------------------------------------------------------------------------\n");
            switch(Choice)
            {
                case 1:
                    printf("Enter The New Student First Name: ");
                    scanf("%s",Temp->First_Name);
                    printf("[Info] Student First Name Updated Successfully\n");
                    return;
                case 2:
                    printf("Enter The New Student Last Name: ");
                    scanf("%s",Temp->Last_Name);
                    printf("[Info] Student Last Name Updated Successfully\n");
                    return;
                case 3:
                    do
                    {
                        printf("Enter The New Student Roll Number: ");
                        scanf("%d",&Temp->ID);
                    } while (!Unique_ID_Check(fifo,Temp->ID));
                    printf("[Info] Student Roll Number Updated Successfully\n");
                    return;
                case 4:
                    printf("Enter The New Student GPA: ");
                    scanf("%lf",&Temp->GPA);
                    printf("[Info] Student GPA Updated Successfully\n");
                    return;
                case 5:
                    printf("Enter The New Student Courses IDs: \n");
                    for(int i = 0; i < 5; i++)
                    {
                        printf("Course %d: ",i+1);
                        scanf("%d",&Temp->Courses[i]);
                    }
                    printf("[Info] Student Courses Updated Successfully\n");
                    return;
                default:
                    printf("[Error] Wrong Choice\n");
                    return;
            }
            return;
        }
        Temp++;
    }
    printf("[Error] Student Not Found\n");
}

void View_All_Info(FIFO* fifo)
{
    ELEMENT_TYPE* Temp = fifo->Tail;
    if(fifo->Count == 0)
    {
        printf("[Error] No Students Found\n");
        return;
    }
    for(int i = 0; i < fifo->Count; i++)
    {
            printf("Student Roll Number: %d\n",Temp->ID);
            printf("Student First Name: %s\n",Temp->First_Name);
            printf("Student Last Name: %s\n",Temp->Last_Name);
            printf("Student GPA: %lf\n",Temp->GPA);
            printf("Student Courses IDs: \n");
            for(int i = 0; i < 5; i++)
            {
                printf("%d ",Temp->Courses[i]);
            }
            printf("\n");
        Temp++;
    }
}