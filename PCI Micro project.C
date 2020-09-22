/*Title:Contact Management/Phonebook System.
Class:FYCM-I
Batch:C
Group Members:
44.Patil Sameer Sanjay
48.Rahane Pratik Sanjay
49.Redgaonkar Shreeraj Jayant
52.Shelke Harshal Tanaji
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

  void add();
  void edit();
  void search();
  void delet();
  void view();
  int choice,i,len;
  char smob[15];
  char yn, sname[35], dname[35];
  struct phone
  {
  char name[35];
  char address[50];
  char mob[15];
  char sex[15];
  char mail[50];
  int choice,i;
  char yn;
  }contact[100];

void add()
{
	for(i=0;i<100;++i)
		{
		printf("\nADD ENTRY:");
		printf("\nEnter Name: ");
		flushall();
		gets(contact[i].name);
		printf("Enter Mobile Number: ");
		flushall();
		gets(contact[i].mob);
		printf("Enter address: ");
		flushall();
		gets(contact[i].address);
		printf("Enter Gender: ");
		flushall();
		gets(contact[i].sex);
		flushall();
		printf("Enter e-mail: ");
		flushall();
		gets(contact[i].mail);
		printf("\nEntry added successfully!");
		printf("\n\nDo you want to add another entry?(Y or N) : ");
		flushall();
		scanf("%c",&yn);
		if(((char)toupper(yn))==89)
		{
			continue;
		}
		   printf("\n\nDo you want to go to Main Menu?(Y or N) : ");
		   flushall();
		   scanf("%c",&yn);
		   do
			{
				clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
	
			}while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
	} 
}

void edit()
{
	printf("\nEDIT ENTRY:");
		printf("\nEnter Name of the contact you want to edit: ");
		flushall();
		gets(sname);
		for(i=0;i<100;++i)
		{
		if(strcmp(contact[i].name,sname)!=0)
		{
			continue;
		}
		else
		{
			break;
		}
		}
		if(i<100)
		{
			printf("\nContact Found!");
		printf("\nDo you want to edit Name?(Y/N):- ");
		flushall();
		scanf("%c",&yn);
		if(((char)toupper(yn))==89)
	    	{
	      		printf("Enter New Name: ");
			flushall();
	     	 	gets(contact[i].name);
	    	}
	    	do
			{
				printf("\nDo you want to edit Mobile Number?(Y/N):- ");
			flushall();
		scanf("%c",&yn);
		if(((char)toupper(yn))==89)
	    	{
			 printf("Enter New Mobile Number: ");
			 gets(contact[i].mob);
		}
		do
		{
			printf("\nDo you want to edit address?(Y/N):- ");
	    	flushall();
	    	scanf("%c",&yn);
	    	if(((char)toupper(yn))==89)
	    	{
	      		printf("Enter New Address: ");
	      		flushall();
	      		gets(contact[i].address);
	    	}
			do
			{
				printf("\nDo you want to edit gender?(Y/N):- ");
			flushall();
	    	scanf("%c",&yn);
	    	if(((char)toupper(yn))==89)
	    	{
				printf("Enter New Gender: ");
				flushall();
				gets(contact[i].sex);
	    	}
			do
			{
				printf("\nDo you want to edit e-mail?(Y/N):- ");
			flushall();
	    	scanf("%c",&yn);
	    	if(((char)toupper(yn))==89)
	    	{
				printf("Enter New e-mail: ");
				flushall();
				gets(contact[i].mail);
				printf("\nDo you want to go to Main Menu?(Y/N):");
				flushall();
				scanf("%c",&yn);
				do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
				
	    	}
	    	else if(((char)toupper(yn))==78)
	    	{
				printf("\nDo you want to go to Main Menu?(Y/N):");
				flushall();
				scanf("%c",&yn);
				do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
		    }
			}while(((char)toupper(yn))==78);
	    	
	    	if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("Please enter valid choice");
			}
			}while(((char)toupper(yn))==78);
	    		
	    	if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
	    	{
			printf("Please enter valid choice!");
	    	}			
		}while(((char)toupper(yn))==78);
		
	    	if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
	    	{
			printf("Please enter valid choice!");
		    }
			} while ((toupper(yn))==78);
			
		
		if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
		{
			printf("Please enter valid choice");
			exit();
		}	

		
		

		
		}
		else
		{
			printf("Contact Not Found!");
			printf("\n\nDo you want to go to Main Menu?(Y/N): ");
			flushall();
			scanf("%c",&yn);
			do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	

		}
}


void search()
{
	printf("\nSEARCH ENTRY");
	    printf("\nEnter 1 or 2 to choose.");
	    printf("\nPress 1 to search entry by name and press 2 to search by number  :- ");
	    flushall();
	    scanf("%d",&choice);
	    if(choice==1)
	    {
	      flushall();
	      printf("\nEnter Name to search: ");
	      flushall();
	      gets(sname);
		  for(i=0;i<100;++i)
		  {
		     if(strcmpi(contact[i].name,sname)==0)
		     {
			printf("\nRecord Found!");
			printf("\nName= %s\nMobile Number= %s\nAddress= %s\nGender= %s\nE-mail= %s",contact[i].name,contact[i].mob,contact[i].address,contact[i].sex,contact[i].mail);
		    printf("\n\nDo you want to go to main menu?");
			flushall();
			scanf("%c",&yn);
			do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
			 }
		     else
		     {
				 continue;
		     }

		  }
		  printf("\nRecord Not Found!");
			printf("Do you want to go to main menu?");
			flushall();
			scanf("%c",&yn);
			do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
	    }
	    else if(choice==2)
	    {
	      printf("\nEnter Mobile Number to search: ");
	      flushall();
	      gets(smob);
		  for(i=0;i>=0;++i)
		  {
	      if(strcmp(contact[i].mob,smob)==0)
	      {
			printf("\nRecord Found!\n ");			
			printf("\nName= %s\nMobile Number= %s\nAddress= %s\nGender= %s\nE-mail= %s",contact[i].name,contact[i].mob,contact[i].address,contact[i].sex,contact[i].mail);
			printf("\n\nDo you want to go to main menu?");
			flushall();
			scanf("%c",&yn);
			do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
	      }
		  else
		  {
			  continue;
		  }
		  
		  }
		  
			 printf("\nRecord Not Found!");
		  	 printf("Do you want to go to main menu?");
	         flushall();
	         scanf("%c",&yn);
	         do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
		}	
}


void delet()
{
	printf("\nDELETE ENTRY");
	    printf("\nEnter Name of the contact you want to delete: ");
	    flushall();
	    gets(dname);
		for(i=0;i<100;++i)
		{
			if(strcmp(contact[i].name,dname)!=0)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if(i<100) 
		{
			printf("\nContact Found!");
			strcpy(contact[i].name,"");
			strcpy(contact[i].address,"");
			strcpy(contact[i].sex,"");
			strcpy(contact[i].mail,"");
			strcpy(contact[i].mob,"");
			printf("\nContact Deleted Successfully!");
			printf("\nDo you want to go to Main Menu?(Y/N):");
	     		flushall();
	     		scanf("%c",&yn);	
	     		do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	
		} 
		printf("\nContact Not Found!");
		printf("\nDo you want to go to Main Menu?(Y/N):");
	     		flushall();
	     		scanf("%c",&yn);	
	     		do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); \
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	

}


void view()
{
	printf("\nVIEW CONTACTS:\n\n");
				for(i=0;i<100;++i)
				{
					flushall();
					len=strlen(contact[i].name);
					if(len!=0)
					{
						printf("Name: %s",contact[i].name);
						printf("\nMobile Number: %s",contact[i].mob);
						printf("\nAddress: %s",contact[i].address);
						printf("\nGender: %s",contact[i].sex);
						printf("\nEmail Address: %s",contact[i].mail);
						printf("\n\n");
					}
					if(i==99)
					{
						printf("\nDo you want to go to Main Menu?(Y/N):");
						flushall();
						scanf("%c",&yn);	
						do
		   {
			    clrscr();
				printf("*PHONEBOOK SYSTEM*"); 
				printf("\n\nMAIN MENU:");
				printf("\nPlease Choose:");
				printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
				printf("\n\nEnter your choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						
						add();

					case 2:
						
							edit();

					case 3: 
				
							search();		  
						
					case 4: 

							delet();

					case 5: 	

							view();

					case 6: exit();


					default: printf("\nPlease enter a valid number!");
				}
		   }while(((char)toupper(yn))==89);
			
			if((((char)toupper(yn))!=78) && (((char)toupper(yn))!=89))
			{
				printf("\nThank You!!");
				exit();
			}	

				}
				}
}


void main()
{
  
	clrscr();
	printf("*PHONEBOOK SYSTEM*"); \
	printf("\n\nMAIN MENU:");
	printf("\nPlease Choose:");
	printf("\n1. Add Contacts      2. Edit Contacts       3. Search Contacts       \n4. Delete Contacts   5. View Contacts       6. Exit");
	printf("\n\nEnter your choice: ");
	scanf("%d",&choice);
  switch(choice)
  {
    case 1:
		
		   add();

    case 2:
	      
			edit();

    case 3: 
 
			search();		  
	      
    case 4: 

			delet();

    case 5: 	

			view();

    case 6: exit();


    default: printf("\nPlease enter a valid number!");
  }
  
  getch();

}

