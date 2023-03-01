#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct Report{
int pno;
char pname[20];
int age;
char gen[5];
char bg[5];
};
int i,j,n;
struct Report r[20];
void read(){
for(i=0;i<n;i++){
printf("\n\tEnter details of Patients-%d",i+1);
printf("\n\t------------------------------");
printf("\nPatient No:");
scanf("%d",&r[i].pno);
printf("\nPatient Name:");
scanf("%s",&r[i].pname);
printf("\nAge of the patient:");
scanf("%d",&r[i].age);
printf("\nGender:");
scanf("%s",&r[i].gen);
printf("\nBlood Group:");
scanf("%s",&r[i].bg);
}
}
void search(){
int p;
printf("\nEnter the Patient number to search:");
scanf("%d",&p);
for(i=0;i<n;i++){
if(p==r[i].pno){
printf("\nSEARCHED PATIENT DETAILS:");
printf("\n--------------------------");
printf("\nPatient No:%d",r[i].pno);
printf("\nPatient Name:%s",r[i].pname);
printf("\nAge:%d",r[i].age);
printf("\nGender:%s",r[i].gen);
printf("\nBlood Group:%s",r[i].bg);
}
}
}
void display(int z)
{
     int i;
     printf("\n\tMOSES HI-TECH MEDICAL LABORATORY\n");
     printf("\n\t------------------------------------\n");
     printf("\nList of All Patients:\n");
     printf("-------------------------------\n");
     printf("Pno\tPname\tAge\tGender\tBlood Group\n");
     printf("\n-------------------------------------\n");
     for(i=0;i<z;i++)
     {
          printf("%d\t%s\t  %d\n",r[i].pno,r[i].pname,r[i].age,r[i].gen,r[i].bg);
     }


}

void main(){
int ch,p,z;
printf("\n Enter No Of Patients:");
scanf("%d",&n);
read(n);
do{
    printf("\n------\n MOSES HI-TECH MEDICAL LABORATORY\n-------------------");
	printf("\n1.Search\n2.Display\n3.Exit\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
	{
        case 1:search();
               break;
        case 2:display(n);
               break;
        case 3:exit(0);      
    }
}while(1);
}



