#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,k,m;
	int j[4][5];
	char advice[4][50];
	
	// starting of the app;
	printf("=============================================\n");
	printf("\t=====Course Evaluation=====\n");
	printf("=============================================\n\n");
	printf("\tThe Professors Performance is evaluated in this App\n\n");
	printf("\tThe Professors are:\n\t1. Dr Sadaqat Jan\n\t\
2. Engr. Nouman\n\t3. Engr. Humayun\n\t4. Ma'am Lubna");
	printf("\n\n\t Now On The Basis Of Performance Students Will Marks:\n");
	for(i=0;i<4;i++)
	{
		
		
		 printf("choose the serial to select the Professor to be evaluated:");
		 scanf("%d",&k);
		 if(k==1){
			printf("\nYou pick Dr Sadaqat Jan\n");
		 }
	 	else if(k==2){
			printf("\nYou pick Engr. Nouman \n");
		 }
		 else if(k==3){
			printf("\nYou pick Engr. Humayun\n");
		 }
		 else if(k==4){
			printf("\nYou pick Ma'am Lubna\n");
		 }
		 else{
			printf("\nPick the right Serial Number\n");
			break;
		 }
        for(m=0;m<1;m++)
		{ 
		 printf("Overall Marks To Professor:");
		 scanf("%d",&j[i][m]);
		 m++;
		 printf("Student engagement:");
		 scanf("%d",&j[i][m]);
		 m++;
		 printf("Course Completion:");
		 scanf("%d",&j[i][m]);
		 m++;
		 printf("Assessment Evaluation:");
		 scanf("%d",&j[i][m]);
		 m++;
		 printf("Management Of course:");
		 scanf("%d",&j[i][m]);	 
	    }
	}
	printf("========================================");
	printf("\n\t===Summary===\n");
	printf("========================================\n\n");
	printf("\tNAMES   \t\t\tDR sadaqat  Engr Humayun  Engr Nouman  Maam lubna  ");
	printf("\n\t Overall Marks          \t %d \t %d      \t %d      \t %d",j[0][0],j[1][0],j[2][0],j[3][0]);
	printf("\n\t Student engagement:    \t %d \t %d      \t %d      \t %d",j[0][1],j[1][1],j[2][1],j[3][1]);
	printf("\n\t Course Completion:     \t %d \t %d      \t %d      \t %d",j[0][2],j[1][2],j[2][2],j[3][2]);
	printf("\n\t Assessment Evaluation: \t %d \t %d      \t %d      \t %d",j[0][3],j[1][3],j[2][3],j[3][3]);
	printf("\n\t Management Of course:  \t %d \t %d      \t %d      \t %d",j[0][4],j[1][4],j[2][4],j[3][4]);
	for(i=0;i<4;i++){
        printf("\n\nAny Suggestion or Any Advice to Professor in Teaching Method:\n");
        while(getchar()!= '\n');
        fgets(advice[i],50,stdin);
	}
	printf("\n \t THE END ");
	
  return 0;
  
}

