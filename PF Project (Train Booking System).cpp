#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct person{ //structer for personal details
	char name[20];
	char contact[12];
	char NIC[15];
	char date[15];
};
void seat(int **row,char **col,int nseat);//Seat Function Prototype
void  ticket_info( struct person);//Ticket Function Prototype
void booking();//Booking Function Prototype
void timing();//Timing Function Prototype
void payment(int*,char*,int,int,int);//Payment Function Prototype
void trainarr(int *ptr)//Train seats generator Function Prototype
{
	int i,j;
		for(i=0;i<9;i++)
	{
		printf("ROW %d\t",i+1);
		for(j=0;j<6;j++)
		{
			printf("  %d\t",*(ptr+i*6+j));
		}
		printf("\n");
	}
	
}

void table(int a,char b)		//Asteriks and Dash generator .. Like 
{
	int i;
	for(i=0;i<a;i++)
	{
		printf("%c",b);
	}

	
}
void dep() // Generating Header .. 
{
	table(70,'-');
	printf("\n|Destination             |Departure time           |Amount per ticket|\n");
	table(70,'-');
}
void ticket_info( struct person info1)
{
	printf("Name : %s\n",info1.name);
	printf("Contact : %s\n",info1.contact);
	printf("NIC : %s\n",info1.NIC);
	printf("Date: %s",info1.date);
}
int main()
{
	int i,j;  //counter variables
	char op;            //Options Booking Payment etc...
	printf("\t\t");
	table(37,'*');
	printf("\n\t\t*PAKISTAN RAILWAY RESERVATION SYSTEM*\n\t\t");
	table(37,'*');
	printf("\n                              WELCOME!");
	printf("\n\n PLEASE SELECT AN OPTION\n");
	do
	{
	printf("\n1-Train Timings\n2-Booking\n3-Payment\n4-Exit\n");
	scanf(" %c",&op);
	if(op!='1'&&op!='2'&&op!='3'&&op!='4')
	{
		printf("Please choose the correct option!"); 
	}
	}
	while(op!='1'&&op!='2'&&op!='3'&&op!='4');
	system("cls"); // clear screen
	if(op=='1')
	{
		timing();  // Display timing of trains
	}
	else if(op=='2')
	{
		booking(); //Goto Booking ....
		
	}
	else if(op=='3')
	{
		printf("\nCannot proceed in the payment menubefore booking \n");
		main();
	}
	else if(op=='4')
	{
		printf("Thankyou for visiting us.Have a safe journey :)");
		return 0;
	}
}
void timing()
{
	int key; 			//for train selection ..
	printf("Train no.\n");
	dep();					//Header 
	//Available Trains 
	printf("\n2010 (Karachi Express)\n");
	printf("\n|Karachi to Lahore       |    04:30 p.m\t           |  Rs. 1500       |\n");
	table(70,'-');
	printf("\n2011 (Karakoram Express)\n");
	printf("\n|Karachi to Lahore       |    03:30 p.m\t           |  Rs. 1650       |\n");
	table(70,'-');
	printf("\n2012 (Green Line)\n");
	printf("\n|Karachi to Margala      |    10:00 p.m\t           |  Rs. 1700       |\n");	
	table(70,'-');
	printf("\n2013 (Green Line)\n");
	printf("\n|Karachi to Islamabad    |    03:35 p.m\t           |  Rs. 5520       |\n");	
	table(70,'-');
	printf("\n2014 (Tezgam Express)\n");
	printf("\n|Karachi to Rawalpindi   |    05:30 p.m\t           |  Rs. 1670       |\n");
	table(70,'-');
	printf("\n2015 (Islamabad Express)\n");
	printf("\n|Lahore to Rawalpindi    |    03:00 p.m\t           |  Rs.  450       |\n");
	table(70,'-');
	printf("\n2016 (Sukkur Express)\n");
	printf("\n|Jacobabad to Karachi    |    10:15 p.m\t           |  Rs. 1020       |\n");
	table(70,'-');
	printf("\n2017 (Faisalabad Express)\n");
	printf("\n|Faisalabad to Lahore    |    02:30 p.m\t           |  Rs.  700       |\n");	
	table(70,'-');
	printf("\n2018 (Jaffar Express)\n");
	printf("\n|Quetta to Peshawar      |    09:00 a.m\t           |  Rs.  900       |\n");	
	table(70,'-');
	printf("\n2019 (Multan Express)\n");
	printf("\n|Multan to Lahore        |    04:00 p.m\t           |  Rs.  550       |\n");	
	table(70,'-');
	printf("\n2020 (Ravi Express)\n");
	printf("\n|Lahore to Shorkot       |    03:25 p.m\t           |  Rs.  750       |\n");	
	table(70,'-');
	printf("\n2021 (Bolan Mail)\n");
	printf("\n|Karachi to Quetta       |    07:35 p.m\t           |  Rs.  1400      |\n");	
	table(70,'-');
	printf("\n2022 (Jaffar Express)\n");
	printf("\n|Peshawar CANTT to Quetta|    07:50 p.m\t           |  Rs.  650       |\n");	
	table(70,'-');
	printf("\n2023 (Shalimar Express)\n");
	printf("\n|Lahore JN. to Karachi   |    10:30 p.m\t           |  Rs.  2570      |\n");	
	table(70,'-');
	printf("\n2024 (Sindh Express)\n");
	printf("\n|Karachi to Sukkur       |    07:35 p.m\t           |  Rs.  890       |\n");	
	table(70,'-');
	printf("\n2025 (Sindh Express)\n");
	printf("\n|Sukkur to Karachi Cantt |    08:00 a.m\t           |  Rs.  750       |\n");	
	table(70,'-');
	printf("\n2026 (Faisalabad Express)\n");
	printf("\n|Faisalabad to Lahore JN |    09:50 p.m\t           |  Rs.  1560      |\n");	
	table(70,'-');
	printf("\n2027 (Khyber Mail)\n");
	printf("\n|Peshawar  to Karachi    |    04:30 p.m\t           |  Rs.  2600      |\n");	
	table(70,'-');
	printf("\n2028 (Allama Iqbal Express)\n");
	printf("\n|SIALKOT to Karachi Cantt|    05:00 p.m\t           |  Rs.  960       |\n");	
	table(70,'-');
	
	
	
	
	printf("\n\n\n\nPress 0 to go back to main menu");
	printf("\n\nPress 2 to go to the booking menu\n: ");
do			//Loop until correct option is selected
{
	scanf("%d",&key);
	if(key!=2 && key!=0)
	{
		printf("\nPlease choose a correct option !!\n");
	}
	
}
while(key!=2 && key!=0);
	if(key==0) 
	{
	main(); //Back to main menu
	}
	else if(key==2)
	{
		booking(); // Proceed to booking
	}
	
}
void booking()
{
	char time;			// For checking train timings
	static int arr[9][6]={0};	//Trains Seats Generator
	int no,i,j; 	// 'NO' stores Train Unique Code   i,j counter loops
	int noseat,chc;
	printf("Do you want to Check the train timings? (Y for yes and N for no)\n");
	scanf(" %c",&time);
	if(time=='Y' || time=='y')
	{
		timing();	//Display all available trains 
	}
	else
	{
		FILE *ptrarr; 
		int k,l,num;
		ptrarr=fopen("arrayoftrain.txt","w+"); // Filing for booked trains seats
		printf("\n\n0 represents remaning and 1 represents Booked!\n\n");
		printf("Enter Train no. in which you want to Travel :");
		do									//loop until correct option is selected
		{
			scanf("%d",&no);				
			if(no<2010 || no>2028)
			{
				printf("We have no train with the number %d\n\nPlease select the train from our menu of train timings.\n",no);
			}
		}
		while(no<2010 || no>2028); // shows remaining seats
		printf("Here are the remaining seats for train no. %d",no);
		printf("\n\n");
		for(i=0;i<6;i++)
		{
			printf("\tCol %c ",('A'+i));
		}
		printf("\n\n");
		trainarr(&arr[0][0]);		//Train seats 
		printf("\n\nHow many seats do you want to book ?:");
		scanf("%d",&noseat);
		int row[noseat];
		char col[noseat];
		for(i=0;i<noseat;i++)
		{
			printf("Enter row no. and coloumn no. for seat %d ",i+1);
		do //Enterning row and coloumn for seats
		{
			printf("\nRow :");
			scanf("%d",&row[i]);
			printf("Coloumn :");
			scanf(" %c",&col[i]);
			printf("\npress 1 to confirm your seat selected\n press 3 if you want to remove a seat you just selected\n"); //Confirming every seats 
			scanf("%d",&num);
			if(num==3)
			{
				arr[row[i]-1][col[i]-65]=0;
				printf("\nseat succesfully unbooked\n");
				printf("\nRow :");
				scanf("%d",&row[i]);
				printf("Coloumn :");
				scanf(" %c",&col[i]);
			}
			if(col[i]>96)
			{
				col[i]=col[i]-32;
			}
			if(arr[row[i]-1][col[i]-65]==1)		//for correct option 
			{
				printf("\nSorry!\nThe chosen seat is already booked.Please check another seat\n");
			}
		}
			while(arr[row[i]-1][col[i]-65]==1);
			arr[row[i]-1][col[i]-65]=1;
		}
	printf("\nHERE are the seats you booked (represented with 1)\n\n");		//representing seats
		for(i=0;i<6;i++)
		{
			printf("\tCol %c ",('A'+i));
		}
			printf("\n\n");
		trainarr(&arr[0][0]);
		printf("\n\nPress 1 to confirm tickets and proceed to payment or 0 to book again all the tickets: ");
		scanf("%d",&chc);
		if(chc==1)
		{
	if(ptrarr==NULL)
	{
		printf("\nError !");
		exit(1);
	}
	else		//filing for booked seats
	{
		for(k=0;k<9;k++)
		{
			for(l=0;l<6;l++)
			{
				fprintf(ptrarr," %d  ",arr[k][l]);
			}
			fprintf(ptrarr,"\n");
		}
	}		if(no==2028)
			{	
				payment(&row[0],&col[0],noseat,960,2028);
			}
			else if(no==2027)
			{
				payment(&row[0],&col[0],noseat,2600,2027);
			}
			else if(no==2026)
			{	
				payment(&row[0],&col[0],noseat,1560,2026);
			}
			else if(no==2025)
			{	
				payment(&row[0],&col[0],noseat,750,2025);
			}
			else if(no==2024)
			{	
				payment(&row[0],&col[0],noseat,890,2024);
			}
			else if(no==2023)
			{	
				payment(&row[0],&col[0],noseat,2570,2023);
			}
			else if(no==2022)
			{	
				payment(&row[0],&col[0],noseat,650,2022);
			}
			else if(no==2021)
			{	
				payment(&row[0],&col[0],noseat,1400,2021);
			}
			else if(no==2020)
			{	
				payment(&row[0],&col[0],noseat,750,2020);
			}
			else if(no==2019)
			{	
			payment(&row[0],&col[0],noseat,550,2019);
			}
			else if(no==2018)
			{	
				payment(&row[0],&col[0],noseat,900,2018);
			}
			else if(no==2017)
			{	
				payment(&row[0],&col[0],noseat,700,2017);
			}
			else if(no==2016)
			{	
				payment(&row[0],&col[0],noseat,1020,2016);
			}
			else if(no==2015)
			{	
				payment(&row[0],&col[0],noseat,450,2015);
			}
			else if(no==2014)
			{	
				payment(&row[0],&col[0],noseat,1670,2014);
			}
			else if(no==2013)
			{	
				payment(&row[0],&col[0],noseat,5520,2013);
			}
			else if(no==2012)
			{	
				payment(&row[0],&col[0],noseat,1700,2012);
			}
			else if(no==2011)
			{	
				payment(&row[0],&col[0],noseat,1650,2011);
			}
			else if(no==2010)
			{
				payment(&row[0],&col[0],noseat,1500,2010);
			}
		}
		else if(chc==0)
		{
				for(i=0;i<noseat;i++)
				{
					arr[row[i]-1][col[i]-65]=0;
				}
			booking();
		}
	fclose(ptrarr); //close file
	}
}
void payment(int*row,char*col,int seats,int ticket,int no) //Payment Function 
{
	char newop; 
	FILE *save; 
	save = fopen("ticket.txt","a");
	system("cls");
	system("COLOR F0");
		    struct person info; //structer for personal details
		    printf("enter your name : ");
		    getchar();
		    gets(info.name);
		    printf("enter contact number : ");
		    scanf("%s",info.contact);
		    printf("enter your NIC : ");
		    scanf("%s",info.NIC);
		    printf("enter the date on which you want to go : ");
		    getchar();
			gets(info.date);
	        
    printf("****************Pakistan Railway System******************\n\n");

	
	
system("cls");
	 
          
 ticket_info(info);  
 printf("\n");
		if(no==2028)
		{
		table(70,'-');
		printf("\n2028 (Allama Iqbal Express)\n");
		printf("\n|SIALKOT to Karachi Cantt|    05:00 p.m\t           |  Rs.  960       |\n");
		table(70,'-');
		seat(&row,&col,seats);
		}
		else if(no==2027)
		
		{
			table(70,'-');	printf("\n2027 (Khyber Mail)\n");
         	printf("\n|Peshawar  to Karachi    |    04:30 p.m\t           |  Rs.  2600      |\n");	
	        table(70,'-');
	        seat(&row,&col,seats);
		}
			else if(no==2026)
		{	
			table(70,'-');
			printf("\n2026 (Faisalabad Express)\n");
			printf("\n|Faisalabad to Lahore JN |    09:50 p.m\t           |  Rs.  1560      |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2025)
		{	
			table(70,'-');printf("\n2025 (Sindh Express)\n");
			printf("\n|Sukkur to Karachi Cantt |    08:00 a.m\t           |  Rs.  750       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
			
		}
			else if(no==2024)
		{	table(70,'-');
			printf("\n2024 (Sindh Express)\n");
			printf("\n|Karachi to Sukkur       |    07:35 p.m\t           |  Rs.  890       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2023)
		{		table(70,'-');
				printf("\n2023 (Shalimar Express)\n");
				printf("\n|Lahore JN. to Karachi   |    10:30 p.m\t           |  Rs.  2570      |\n");	
				table(70,'-');
				seat(&row,&col,seats);
		}
			else if(no==2022)
		{	table(70,'-');
			printf("\n2022 (Jaffar Express)\n");
			printf("\n|Peshawar CANTT to Quetta|    07:50 p.m\t           |  Rs.  650       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2021)
		{	table(70,'-');
			printf("\n2021 (Bolan Mail)\n");
			printf("\n|Karachi to Quetta       |    07:35 p.m\t           |  Rs.  1400      |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2020)
		{	table(70,'-');
			printf("\n2020 (Ravi Express)\n");
			printf("\n|Lahore to Shorkot       |    03:25 p.m\t           |  Rs.  750       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2019)
		{	table(70,'-');
			printf("\n2019 (Multan Express)\n");
			printf("\n|Multan to Lahore        |    04:00 p.m\t           |  Rs.  550       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2018)
		{	table(70,'-');
			printf("\n2018 (Jaffar Express)\n");
			printf("\n|Quetta to Peshawar      |    09:00 a.m\t           |  Rs.  900       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2017)
		{		table(70,'-');
				printf("\n2017 (Faisalabad Express)\n");
				printf("\n|Faisalabad to Lahore    |    02:30 p.m\t           |  Rs.  700       |\n");	
				table(70,'-');
				seat(&row,&col,seats);
		}
			else if(no==2016)
		{		table(70,'-');
				printf("\n2016 (Sukkur Express)\n");
				printf("\n|Jacobabad to Karachi    |    10:15 p.m\t           |  Rs. 1020       |\n");
				table(70,'-');
				seat(&row,&col,seats);
		}
			else if(no==2015)
		{	table(70,'-');
				printf("\n2015 (Islamabad Express)\n");
			printf("\n|Lahore to Rawalpindi    |    03:00 p.m\t           |  Rs.  450       |\n");
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2014)
		{	table(70,'-');
				printf("\n2014 (Tezgam Express)\n");
			printf("\n|Karachi to Rawalpindi   |    05:30 p.m\t           |  Rs. 1670       |\n");
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2013)
		{	table(70,'-');
			printf("\n2013 (Green Line)\n");
			printf("\n|Karachi to Islamabad    |    03:35 p.m\t           |  Rs. 5520       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2012)
		{	table(70,'-');
			printf("\n2012 (Green Line)\n");
			printf("\n|Karachi to Margala      |    10:00 p.m\t           |  Rs. 1700       |\n");	
			table(70,'-');
			seat(&row,&col,seats);
		}
			else if(no==2011)
		{		table(70,'-');
				printf("\n2011 (Karakoram Express)\n");
				printf("\n|Karachi to Lahore       |    03:30 p.m\t           |  Rs. 1650       |\n");
				table(70,'-');
				seat(&row,&col,seats);
		}
			else if(no==2010)
		{	table(70,'-');
			printf("\n2010 (Karachi Express)\n");
			printf("\n|Karachi to Lahore       |    04:30 p.m\t           |  Rs. 1500       |\n");
			table(70,'-');
			seat(&row,&col,seats);
		}
	printf("\nno of seats :%d\n",seats );
	printf ("Total amount :%d",seats*ticket);
	fprintf(save," --------------------tickets--------------\nname: %s\ncontact:",info.name,info.contact);
	fprintf(save,"NIC no: %s",info.NIC);
	fprintf(save,"\nno of seats :%d\n amount of seat : %d\ndate : %s",seats,seats*ticket,info.date);
	fclose(save);
	printf("\n\npress any key to continue : ");
	getch();
	system("cls");
	printf("Press 0 to go back to main menu and 1 to exit!");
	do
	{
		scanf(" %c",&newop);
		if(newop!='0'&&newop!='1')
		{
			printf("\n\nSelect a correct option!!\n");
		}
	}
	while(newop!='0'&&newop!='1');
	if(newop=='0')
	{
		system("cls");
		main();
	}
	else if(newop=='1')
	{
		exit(1);
	}
}
void seat(int **row,char **col,int nseat) // This funtion is showing booked seats 
{
	int i,j;
		printf("\n\nYour Booked seats are as follows\n");
	for(i=0;i<nseat;i++)
	{
		printf(" %d %c",*(*row+i),*(*col+i));
		printf("\n");
	}
}

