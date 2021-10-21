//
// Created by l on 20.10.2021.
//

#ifndef HEALTH_SYSTEM_PATIENT_H
#define HEALTH_SYSTEM_PATIENT_H
#include <stdio.h>
#include "Chapters.h"

struct Patient{
    int healthNumber;
    char name[20];
    char surname[20];
    struct Chapters chapters;
};

#endif //HEALTH_SYSTEM_PATIENT_H
