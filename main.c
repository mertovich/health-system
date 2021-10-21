#include <stdio.h>
#include <string.h>
#include "Doctor.h"
#include "Patient.h"

int main() {

    int healthNumber;
    char name[20];
    char surname[20];
    char chapters[20];

    // doctor
    struct Doctor doc1;
    strcpy(doc1.name, "Tim");
    strcpy(doc1.surname,"Cook");
    strcpy(doc1.chapters.c1,"Dentist");

    struct Doctor doc2;
    strcpy(doc2.name, "Elon");
    strcpy(doc2.surname,"Musk");
    strcpy(doc2.chapters.c1,"General");

    // input
    printf("healthNumber : ");
    scanf("%d", &healthNumber);
    printf("name : ");
    scanf("%s", &name);
    printf("surname : ");
    scanf("%s", &surname);
    printf("chapters : ");
    scanf("%s", &chapters);

    // patient
    struct Patient pat1;
    pat1.healthNumber = healthNumber;
    strcpy(pat1.name,name);
    strcpy(pat1.surname,surname);
    strcpy(pat1.chapters.c1,chapters);

    if(strcmp(doc1.chapters.c1,pat1.chapters.c1) == 0){
        printf("------Welcome------\n");
        printf(" Doc Name : %s \n Doc Surname : %s \n Chapters : %s \n",doc1.name,doc1.surname,doc1.chapters.c1);
        printf("The section you have chosen : %s",pat1.chapters.c1);
    }
    else if(strcmp(doc2.chapters.c1,pat1.chapters.c1) == 0){
        printf("------Welcome------\n");
        printf(" Doc Name : %s \n Doc Surname : %s \n Chapters : %s \n",doc2.name,doc2.surname,doc2.chapters.c1);
        printf("The section you have chosen : %s",pat1.chapters.c1);
    }
    else{
        printf("Error\n");
    }

    return 0;
}
