#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Enter the number of students in the class: \n");
    int lenght;
    scanf("%d",&lenght);
    float marks[lenght];
    printf("Start entering their marks: \n");

    for(int i=0;i<lenght;++i){
        printf("\nStudent %d:\t",i+1);
        scanf("%f", &marks[i]);
    }

     float sum = 0;
    for(int i=0;i<lenght;++i){
        sum += marks[i];
    }
    float mean = sum / lenght;
    printf("Mean mark of students is %.2f\n", mean);


     for(int i=0;i<lenght;++i){
        printf("\nStudent %d:",i+1);

        printf("%.1f%%", marks[i]);
     }

        float temp = 0;
 for(int i; i<lenght; ++i){
 for(int j=i+1; j<lenght; ++j){
 if(marks[i] > marks[j]){
 //switch positions
 temp = marks[i];
 marks[i] = marks[j];
 marks[j] = temp;

 }
 }
printf("%f\n", marks[i]);
}
return 0;

}
