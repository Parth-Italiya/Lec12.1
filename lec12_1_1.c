/*Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school

Output:
Enter Id of Student 1 is : 21
Enter Name of Student 1 is : amit
Enter Age of Student 1 is : 20
Enter Course of Student 1 is : python
Enter City of Student 1 is : surat
Enter Standard of Student 1 is : 12
Enter School of Student 1 is : gajera

The ID of Student 1 is 21
The Name of Student 1 is amit
The Age of Student 1 is 20
The Course of Student 1 is python
The City of Student 1 is surat
The Standard of Student 1 is 12
The School of Student 1 is gajera

Enter Id of Student 2 is : 21
Enter Name of Student 2 is : aman
Enter Age of Student 2 is : 20
Enter Course of Student 2 is : python
Enter City of Student 2 is : surat
Enter Standard of Student 2 is : 12
Enter School of Student 2 is : asadeep

The ID of Student 2 is 21
The Name of Student 2 is aman
The Age of Student 2 is 20
The Course of Student 2 is python
The City of Student 2 is surat
The Standard of Student 2 is 12
The School of Student 2 is asadeep

Enter Id of Student 3 is : 23
Enter Name of Student 3 is : jamal
Enter Age of Student 3 is : 20
Enter Course of Student 3 is : flutter
Enter City of Student 3 is : surat
Enter Standard of Student 3 is : 12
Enter School of Student 3 is : ppsv

The ID of Student 3 is 23
The Name of Student 3 is jamal
The Age of Student 3 is 20
The Course of Student 3 is flutter
The City of Student 3 is surat
The Standard of Student 3 is 12
The School of Student 3 is ppsv
*/

#include<stdio.h>
#include<string.h>
struct srs{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int standard;
	char school[30]
};
void main(){
	struct srs s1;
	struct srs s2;
	struct srs s3;
		printf("Enter Id of Student 1 is : ");
		scanf("%d",&s1.id);
		printf("Enter Name of Student 1 is : ");
		scanf("%s",&s1.name);
		printf("Enter Age of Student 1 is : ");
		scanf("%d",&s1.age);
		printf("Enter Course of Student 1 is : ");
		scanf("%s",s1.course);
		printf("Enter City of Student 1 is : ");
		scanf("%s",s1.city);
		printf("Enter Standard of Student 1 is : ");
		scanf("%d",&s1.standard);
		printf("Enter School of Student 1 is : ");
		scanf("%s",s1.school);

		printf("\nThe ID of Student 1 is %d",s1.id);
		printf("\nThe Name of Student 1 is %s",s1.name);
		printf("\nThe Age of Student 1 is %d",s1.age);
		printf("\nThe Course of Student 1 is %s",s1.course);
		printf("\nThe City of Student 1 is %s",s1.city);
		printf("\nThe Standard of Student 1 is %d",s1.standard);
		printf("\nThe School of Student 1 is %s",s1.school);
	
		printf("\n\nEnter Id of Student 2 is : ");
		scanf("%d",&s2.id);
		printf("Enter Name of Student 2 is : ");
		scanf("%s",&s2.name);
		printf("Enter Age of Student 2 is : ");
		scanf("%d",&s2.age);
		printf("Enter Course of Student 2 is : ");
		scanf("%s",s2.course);
		printf("Enter City of Student 2 is : ");
		scanf("%s",s2.city);
		printf("Enter Standard of Student 2 is : ");
		scanf("%d",&s2.standard);
		printf("Enter School of Student 2 is : ");
		scanf("%s",s2.school);

		printf("\nThe ID of Student 2 is %d",s2.id);
		printf("\nThe Name of Student 2 is %s",s2.name);
		printf("\nThe Age of Student 2 is %d",s2.age);
		printf("\nThe Course of Student 2 is %s",s2.course);
		printf("\nThe City of Student 2 is %s",s2.city);
		printf("\nThe Standard of Student 2 is %d",s2.standard);
		printf("\nThe School of Student 2 is %s",s2.school);
		
		printf("\n\nEnter Id of Student 3 is : ");
		scanf("%d",&s3.id);
		printf("Enter Name of Student 3 is : ");
		scanf("%s",&s3.name);
		printf("Enter Age of Student 3 is : ");
		scanf("%d",&s3.age);
		printf("Enter Course of Student 3 is : ");
		scanf("%s",s3.course);
		printf("Enter City of Student 3 is : ");
		scanf("%s",s3.city);
		printf("Enter Standard of Student 3 is : ");
		scanf("%d",&s3.standard);
		printf("Enter School of Student 3 is : ");
		scanf("%s",s3.school);

		printf("\nThe ID of Student 3 is %d",s3.id);
		printf("\nThe Name of Student 3 is %s",s3.name);
		printf("\nThe Age of Student 3 is %d",s3.age);
		printf("\nThe Course of Student 3 is %s",s3.course);
		printf("\nThe City of Student 3 is %s",s3.city);
		printf("\nThe Standard of Student 3 is %d",s3.standard);
		printf("\nThe School of Student 3 is %s",s3.school);
}
