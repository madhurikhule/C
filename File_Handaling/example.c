//Write a program to add, modify and delete records from a file
//Author: Prajakt Patki
//Date: 24th April 2020

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

#define SIZE 50
#define FNAME "Student.dat"

typedef struct Student
{
	int rollNo;
	char name[SIZE];
	float percentage;
}STUD;

void addRecordsToFile();
void displayRecords();
void modifyRecord(char *);
void deleteRecord(int);

void main()
{
	int choice, rNo;
	char name[SIZE];
	
	do
	{
		printf("********************MENU********************");
		printf("\n1. = Add Records to File");
		printf("\n2. = Show All Records");
		printf("\n3. = Modify Record by Student Name");
		printf("\n4. = Delete Record by Roll Number");
		printf("\n5. = Exit");
		
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\n\n********************ADD RECORDS TO FILE********************");
				addRecordsToFile();
				printf("\nRecords added successfully....");
				break;
			case 2:
				printf("\n\n********************SHOW ALL RECORDS********************");
				displayRecords();
				break;
			case 3:
				printf("\n\n********************MODIFY RECORD BY STUDENT NAME********************");
				printf("\nEnter student name to modify the record: ");
				fflush(stdin);
				gets(name);
				modifyRecord(name);
				break;
			case 4:
				printf("\n\n********************DELETE RECORD BY ROLL NUMBER********************");
				printf("\nEnter student roll number to delete the record: ");
				scanf("%d",&rNo);
				deleteRecord(rNo);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\n\nINVALID CHOICE..[PLEASE ENTER CHOICE BETWEEN 1-5]");
		}
		printf("\n\n");
	}while(1);
}

void addRecordsToFile()
{
	FILE *fp;
	STUD s;
	char ch;
	
	fp = fopen(FNAME, "wb"); //opens the file in write binary mode
	if(fp == NULL)
	{
		puts("\n\nCaanot open the File");
		exit(0);
	}
	
	do
	{
		printf("\nEnter Roll Number of the student: ");
		scanf("%d", &s.rollNo);
		printf("Enter the Name of the student: ");
		fflush(stdin);
		gets(s.name);
		printf("Enter Percentage of the student: ");
		scanf("%f",&s.percentage);
		
		fwrite(&s, sizeof(s), 1, fp); //writing the data to the file
		printf("\nDo you want to add another record? <y/n>: ");
		fflush(stdin);
		ch = getche();
		printf("\n\n");
	}while(ch == 'y' || ch == 'Y');
	
	fclose(fp);
}

void displayRecords()
{
	FILE *fp;
	STUD s;
	int i=1;
	
	fp = fopen(FNAME, "rb"); //opens the file in read binary mode
	if(fp == NULL)
	{
		puts("\n\nCaanot open the File");
		exit(0);
	}
	
	while(fread(&s, sizeof(s), 1, fp) == 1)
	{
		printf("\nThe record of student %d is: ", i);
		printf("\nRoll Number = %d", s.rollNo);
		printf("\nName = %s", s.name);
		printf("\nPercentage = %.2f", s.percentage);
		printf("\n\n");
		i++;
	}
	
	fclose(fp);
}

void modifyRecord(char *n)
{
	FILE *fp;
	STUD s;
	int recsize, flag=0;
	
	recsize = sizeof(s);
	
	fp = fopen(FNAME, "rb+"); //opens the file in read and write mode
	if(fp == NULL)
	{
		puts("\n\nCaanot open the File");
		exit(0);
	}
	
	while(fread(&s, sizeof(s), 1, fp) == 1)
	{
		if(strcmp(s.name, n) == 0)
		{
			flag = 1; //setting flag to 1 means the record found by required name
			printf("\nEnter new roll number: ");
			scanf("%d", &s.rollNo);
			printf("Enter new name: ");
			fflush(stdin);
			gets(s.name);
			printf("Enter new pecentage: ");
			scanf("%f", &s.percentage);
			
			fseek(fp, -recsize, SEEK_CUR);  //taking the pointer back by 1 record
			fwrite(&s, recsize, 1, fp);     //writing the modified record to file 
			break;
		}
	}
	if(flag == 1)
		printf("\nRecord Modified Successfully....");
	else
		printf("\nNo Student available with %s name", n);
	fclose(fp);
}

void deleteRecord(int r)
{
	FILE *fs, *ft;
	STUD s;
	int flag=0;
	
	
	fs = fopen(FNAME, "rb"); 
	if(fs == NULL)
	{
		puts("\n\nCaanot open the source ile");
		exit(0);
	}
	
	ft = fopen("Temp.dat", "wb");
	if(ft == NULL)
	{
		puts("\n\nCaanot open the target file");
		fclose(fs);
		exit(1);
	}
	
	
	while(fread(&s, sizeof(s), 1, fs) == 1)
	{
		if(s.rollNo != r)
		{
			flag=1;
			fwrite(&s, sizeof(s), 1, ft);     //writing the modified record to Temp.dat file 
		}
	}
	
	fclose(fs);
	fclose(ft);
	
	remove(FNAME);  //deleting original file
	rename("Temp.dat", FNAME); //renaming the file to original name
	
	if(flag == 1)
		printf("\nRecord deleted Successfully....");
	else
		printf("\nNo Student available with %d roll number", r);
}


