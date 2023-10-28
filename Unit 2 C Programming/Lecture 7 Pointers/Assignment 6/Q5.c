#include <stdio.h>

struct Embloyee
{
    char* name;
    int id;
}embloyee1={"Alex", 1002}, embloyee2={"Omar", 1004}, embloyee3={"Afifi", 1006};

int main()
{
    struct Embloyee *arr[3] = {&embloyee1, &embloyee2, &embloyee3};
    struct Embloyee *(*p)[3] = &arr;
    printf("%s\n", (*(*p))->name);
    printf("%d\n", (*(*p))->id);
    return 0;
}