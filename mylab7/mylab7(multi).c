#include <stdio.h>
#include <stdlib.h>
char grade(float j);
int main(){

float studentsResults[7][2] = {{3,57.45},{2,69.29},{2,71.32},{4,65.05},{3,75.67},{3,48.65},{1,88.21}};

printf("\nCREDIT\t|SCORE\t|GRADE\t|\n");
 printf("\t|\t|\t|\n");
 for(int i=0; i<7; ++i){
 for(int j=0; j<2; ++j){
 printf("%.2f \t|", studentsResults[i][j]);
 if(j%2 == 1){
 printf("%c \t|", grade(studentsResults[i][j]));
 printf("\n\t|\t|\t|");
 }
 }
 printf("\n");
 }
float weightedsum=0;
float totalcredits=0;

for(int i=0; i<7; ++i){
 weightedsum = weightedsum + (studentsResults[i][0] * studentsResults[i][1]);
 totalcredits += studentsResults[i][0];
 }
 float cwa = weightedsum/totalcredits;
 printf("\ncwa = %.2f\n", cwa);

return 0;

}

char grade(float j){
if (j>=70.00&&j<=100){
return 'A';}
else if(j>=60.00&&j<=69.99){
return 'B';}
else if(j>=50.00&&j<=59.99){
return 'C';}
else if(j>=40.00&&j<=49.99){
return 'D';}
else{
return 'F';}
}


