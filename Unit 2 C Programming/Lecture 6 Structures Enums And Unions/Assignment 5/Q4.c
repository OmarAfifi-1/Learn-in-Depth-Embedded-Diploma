#include <stdio.h>

struct Student_Information
{
    char Name[50];
    int Roll_Number;
    float Marks;
}s[10];

struct Student_Information input_Data(int i);

struct Student_Information Display_Data(struct Student_Information temp,int i);

int main() 
{
    for(int i = 0; i < 10; i++)
    {
        s[i]=input_Data(i);
    }
    for(int i = 0; i < 10; i++)
    {
        Display_Data(s[i],i);
    }
    return 0;
}

struct Student_Information input_Data(int i)
{
    struct Student_Information s;
    printf("Enter Roll Number %d: ",i+1);
    scanf("%d", &s.Roll_Number);
    printf("Enter The Name: ");
    scanf("%s", s.Name);
    printf("Enter The Marks: ");
    scanf("%f", &s.Marks);
    return s;
}

struct Student_Information Display_Data(struct Student_Information temp, int i)
{
    printf("Information For Roll Number %d: %d\n",i+1, temp.Roll_Number);
    printf("Name: %s\n", temp.Name);
    printf("Marks: %f\n", temp.Marks);
}