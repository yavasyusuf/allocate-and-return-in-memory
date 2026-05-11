#include <stdio.h>
#include <stdlib.h>
 struct Student{
 	int grade;
 	int number;
 	//int total;
 	//float avg;
 };
 int main(){
 	int total = 0;
 	int nr;
 	float avg;
 	int number;
 	struct Student *students;
 	
 	printf("Enter the number of students: ");
 	scanf("%d", &nr);
 	
 	students = (struct Student*) malloc(nr * sizeof(struct Student));
 		 int maxGrade = students[0].grade;
	 int maxStudentNumber = students[0].number;
 	for(int i = 0;i<nr;i++){
 		printf("%d.student's exam point: ", i+1);
 		scanf("%d", &students[i].grade);
 		
 		total = total + students[i].grade;
 		
 			if(i == 0){
 				maxGrade = students[i].grade;
 				maxStudentNumber = i + 1;
			 }
			 if(students[i].grade > maxGrade){
			 	maxGrade = students[i].grade;
			 	maxStudentNumber = i + 1;
			 }
 		
 		//avg = total / nr;
	 }
	 
	 
	 avg = (float)total / nr;
	 //avg = total / nr;
	 
	 printf("Average students' point: %.2f\n", avg);
	 printf("Highest grade student number: %d\n", maxStudentNumber);
	 
	 free(students);
   }