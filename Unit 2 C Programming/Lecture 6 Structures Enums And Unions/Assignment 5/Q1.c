#include <stdio.h>

struct Student_Information
{
    char Name[50];
    int Roll_Number;
    float Marks;
}s;

struct Student_Information input_Data();

struct Student_Information Display_Data(struct Student_Information temp);

int main() 
{
    Display_Data(input_Data());
    return 0;
}

struct Student_Information input_Data()
{
    struct Student_Information s;
    printf("Enter The Name: ");
    scanf("%s", s.Name);
    printf("Enter The Roll Number: ");
    scanf("%d", &s.Roll_Number);
    printf("Enter The Marks: ");
    scanf("%f", &s.Marks);
    return s;
}

struct Student_Information Display_Data(struct Student_Information temp)
{
    printf("Name: %s\n", temp.Name);
    printf("Roll Number: %d\n", temp.Roll_Number);
    printf("Marks: %f\n", temp.Marks);
}