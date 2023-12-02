#ifndef STUDENT_DATABASE_H
#define STUDENT_DATABASE_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FIFO.h"

void Add_Student_From_File(FIFO* fifo);
void Add_Student_From_User(FIFO* fifo);
void Find_Student_By_Roll_Number(FIFO* fifo, uint32_t ID);
void Find_Student_By_First_Name(FIFO* fifo, uint8_t* First_Name);
void Find_Course_Students(FIFO* fifo, uint32_t Course_ID);
void Find_Total_Student_Number(FIFO* fifo);
void Delete_By_Roll_Number(FIFO* fifo, uint32_t ID);
void Update_By_Roll_Number(FIFO* fifo, uint32_t ID);
void View_All_Info(FIFO* fifo);

#endif // STUDENT_DATABASE_H
