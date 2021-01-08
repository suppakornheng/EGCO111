#include <stdio.h>

void main()

{

struct student

{

char name[20];

float score, grade;

};

struct student st1={"somsak", 87.8, 3.6}, st2;

st2.score=76.5;

if (st1 > st2)
printf("you are great");

}
