#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 
#define party1 "JANASENA"
#define party2 "TDP"
#define party3 "YSRCP"
#define party4 "TRS"
#define party5 "Nota"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[1024];
    char *token;
    int row = 0;
  // open the CSV file for reading
    printf("Enter the filename of the CSV file: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s", filename);
        return 1;
}}
int votescount1=0,votescount2=0,votescount3=0,votescount4=0,votescount5=0;
struct voter {
    int votescount,num;
    int voted;
    int choice;
    char getleadingparty;
} voter;
//FUNCTION TO CAST THE VOTE
int castvote(){
int castvote=0;
 printf("\n### Please vote for you party ###\n");
 printf("\n 1. %s",party1);
 printf("\n 2. %s",party2);
 printf("\n 3. %s",party3);
 printf("\n 4. %s",party4);
 printf("\n 5. %s",party5);
 printf("\n\n Input your vote:");
 scanf("%d",&castvote);
 switch (castvote){
  case 1: votescount1++;
   break;
  case 2: votescount2++;
   break;
  case 3: votescount3++;
   break;
  case 4: votescount4++;
   break;
  case 5: votescount5++;
   break;
  default: printf("\n error: wrong choice !! please retry");
     getchar();
 }
 printf("\n thanks for voting !!");
}
//FUNCTION TO KNOW THE VOTE COUNT
void votescount(){
 printf("\n\n ### voting statics ###");
 printf("\n %s - %d",party1, votescount1);
 printf("\n %s - %d",party2, votescount2);
 printf("\n %s - %d",party3, votescount3);
 printf("\n %s - %d",party4, votescount4);
 printf("\n %s - %d",party5, votescount5);
}
//FUNCTION  TO KNOW THE LEADING PARTY
void getleadingparty(){
 printf("\n\n ### leading party ###");
 if (votescount1>votescount2 && votescount1>votescount3 && votescount1>votescount4 && votescount1>votescount5)
 printf("[%s]",party1);
 else if (votescount2>votescount1 && votescount2>votescount3 && votescount2>votescount4 && votescount2>votescount5)
 printf("[%s]",party2);
 else if (votescount3>votescount1 && votescount3>votescount2 && votescount3>votescount4 && votescount3>votescount5)
 printf("[%s]",party3);
 else if (votescount4>votescount1 && votescount4>votescount2 && votescount4>votescount3 && votescount4>votescount5)
 printf("[%s]",party4);
else 
 printf("[%s]",party5);
}
//FUNCTION TO VERIFY THE VOTER ELIGIBILITY
int main(){
 int choice;
do{
int i,j,num;
 	printf("\n\n ### welcome to 2023 election/voting ###\n");
 	printf("enter the voter id:");
 	scanf("%d",&num);
 	if(i<=num,j>=num){
 printf("\n 1. Cast the Vote");
 printf("\n 2. Find Vote Count");
 printf("\n 3. Find leading Candidate");
 printf("\n 0. Exit");
 printf("\n\n Please enter your choice: ");
 scanf("%d", &choice);
 
 switch(choice){
 case 1: castvote();
 break;
 case 2: votescount();
 break;
 case 3: getleadingparty();
 break;
 default: printf("\n Error: Invalid Choice");
 }}
 else
  printf("\n#### enter the valid voter id ####");  
}
 while(choice!=0);
 getchar();
return 0;
}

