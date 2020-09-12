/*This program contains topics of
 							functions
							for and while loops
							getting inputs
							condition statements*/ 
#include<stdio.h> 
main() 
{
  char c;
  float temp;
  int temp_conv_using_while(); //Function for temp conversion using while loop
  int temp_conv_using_for();   //Function for temp conversion using for loop
  int temp_conv_using_input(); //Function for temp conversion using input
  
  printf("Select an operation from below");
  printf("\n1. Temprature conversion table using while loop");
  printf("\n2. Temprature conversion table using for loop");
  printf("\n3. Temprature conversion using given input");
  
  for(c=0;c>=0;c++)
  {
  	printf("\n\nChoise: ");
	scanf("%s",&c);			   //For the choise
	
	switch(c)
	{
		case '1': temp_conv_using_while();
  					break;
  		case '2': temp_conv_using_for();
  					break;
  		case '3': temp_conv_using_input();
  					break;
  		default : printf("\n You gave wrong input.\n");
  				  	break;
	}
	printf("\n\n\tDo you want to go again ?\n\t\t(Y/N):");
	scanf("%s",&c);
  	if(c=='Y'||c=='y') {}
  	else if(c=='N'||c=='n')
  	{
  		printf("\n\n\t\t\t\t!+---Thank you---+!\n\n");
  		break;
	}
	else
	{
		printf("\n Still wrong input.\n\n");
		break;
	}	
  }
}
int temp_conv_using_while()
  {
  	char c;
  	float temp;
	float lower, upper, step;
   	printf("\nSelect an operation from below \n1. Fahrenheit to Celsius conversion table");
	printf("\n2. Celsius to Fahrenheit conversion table");
	for(c=0;c>=0;c++)
	{
		printf("\n\nChoise: ");
		scanf("%s", &c);
		lower = 0; 		//lower limit of temperatuire scale
		upper = 300; 	//upper limit
		step = 20; 		//step size
		temp = lower;
		if(c=='1')		//print Fahrenheit-Celsius table for temp = 0, 20, ..., 300; floating-point version
		  		 				
		{
			printf("\n\tFahrenheit  -  Celsius table\n\n");
			printf("\t Fahrenheit\t    Celsius\n");
			while (temp <= upper)
			{
				printf("\n\t   %3.0f\t\t-   %6.2f", temp, (5.0/9.0) * (temp-32.0));
				temp = temp + step;
			}
			break;
		}
		else if(c=='2')	//print Celsius-Fahrenheit table for temp = 0, 20, ..., 300; floating-point version
		{
			printf("\n\tCelsius  -  Fahrenheit table\n\n");
			printf("\t Celsius\t Fahrenheit\n");
			while (temp <= upper)
			{
				printf("\n\t   %3.0f \t    -\t  %6.2f", temp, (temp*9.0/5.0) + 32.0);
				temp = temp + step;
			}
			break;
		}
		else			//Wrong input condition
		{
			printf("\n You gave wrong input.\n\tChoose again\n");
		}
	}
  }

int temp_conv_using_for()
  {
  	char c;
  	float temp;
  	printf("\nSelect an operation from below \n 1. Fahrenheit to Celsius conversion table increasing order");
  	printf("\n 2. Fahrenheit to Celsius conversion table decreasing order");
  	for (c=0;c>=0;c++)
  	{
  		printf("\n\nChoise: ");
  		scanf("%s", &c);
  		if(c=='1')
  		{				//f-c table increasing order
  			printf("\n\tFahrenheit  -  Celsius table\n\t\t(Increasing)\n\n");
  			printf("\t Fahrenheit\t    Celsius\n");
  			for (temp = 0; temp <= 300; temp += 20)
  			printf("\n\t   %3.0f\t\t-   %6.2f", temp, (5.0/9.0) * (temp-32.0));
  			break;
		}
		else if(c=='2')
		{				//f-c table decreasing order
			printf("\n\tFahrenheit  -  Celsius table\n\t\t(Decreasing)\n\n");
			printf("\t Fahrenheit\t    Celsius\n");
			for (temp = 300; temp >= 0; temp -= 20)
			printf("\n\t   %3.0f\t\t-   %6.2f", temp, (5.0/9.0) * (temp-32.0));
			break;
		}
		else
		{
			printf("\n You gave wrong input.\n\tChoose again\n");
		}
	}
  }
  
int temp_conv_using_input()
  {
  	char c;
  	float temp;
  	printf("\nSelect an operation from below \n 1. Fahrenheit to Celsius conversion");
  	printf("\n 2. Celsius to Fahrenheit conversion");
  	for (c=0;c>=0;c++)
  	{
  		printf("\n\nChoise: ");
  		scanf("%s", &c);
  		if(c=='1')
  		{				//f-c conversion
  			printf("\n Enter a Fahenheit value \n");
  			printf("Value: ");
  			scanf("%f", &temp);
  			if (temp >= 0) 
  			{
  				printf("\n Fahrenheit \t - \t Celsius \n\n");
  				printf(" %3.2f \t\t - \t %6.2f \n\n", temp, (temp*9.0/5.0) + 32);
  				break;
			}
			else
			{
				printf("\n You gave wrong input.\n\tEnter again\n");
			}
		}
		else if(c=='2')
		{				//c-f conversion
			printf("\n Enter a Celsius value \n");
			printf("Value: ");
			scanf("%f", &temp);
			if (temp >= 0) 
			{
				printf("\n Celsius \t - \t Fahrenheit \n\n");
				printf(" %3.2f \t\t - \t %6.2f \n\n", temp, (5.0/9.0) * (temp-32.0));
				break;
			}
			else
			{
				printf("\n You gave wrong input.\n\tEnter again\n");
			}
		}
		else
		{
			printf("\n You gave wrong input.\n\tChoose again\n");
		}
	}
  }
