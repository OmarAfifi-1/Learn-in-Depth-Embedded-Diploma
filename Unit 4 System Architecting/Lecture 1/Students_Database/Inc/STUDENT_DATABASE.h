#ifndef STUDENT_DATABASE_H_
#define STUDENT_DATABASE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Student_Node;

void Add_Student(void);
void Add_Data(struct Student_Node* Node);
int Delete_Student(void);
void View_Students(void);
void Delete_All_Data(void);
int List_Length(struct Student_Node* Head);
void Reverse_List(struct Student_Node** Head);

#endif // STUDENT_DATABASE_H_
