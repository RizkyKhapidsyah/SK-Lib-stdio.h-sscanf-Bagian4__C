#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char fname[50], lname[50];
    char buffer[] = "Manusia Biasa";

    sscanf(buffer, "%s %s", fname, lname);
    printf("First name : %s \nLast name : %s\n", fname, lname);

    _getch();
    return 0;
}