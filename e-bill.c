// W.A.P in C to find the electricity bill.

#include <stdio.h>
 
int main()
{
	int Units;
	float Amount, Sur_Charge, Total_Amount;
  	
	printf("Please Enter the Units that you Consumed  :  ");
  	scanf("%d", &Units);
  
  	if (Units <= 50)
  	{
        Amount = Units * 2.00;
  		Sur_Charge = 15.00;  	
  	} 
  	else if (Units <= 100)
  	{
  		// First 50 Units charge is 100.00 (50 * 2.00)
  		// Next, we are removing those 50 units from total units
  		Amount = 100.00 + ((Units - 50 ) * 2.50);
  		Sur_Charge = 15.00; 	
  	}
  	else if (Units <= 150)
  	{
  		// 0 - 50 Units charge is 100.00, and 50 - 100 is 125.00 (50 * 2.50)
  		// Next, we are removing those 100 units from total units
  		Amount = 100.00 + 125.50 + ((Units - 100) * 2.75);
  		Sur_Charge = 15.00; 	
  	}
    else if (Units <= 250)
  	{
  		// 0 - 50 Units charge is 100.00, 50 - 100 is 125.50 (50 * 2.50), and 100 - 150 is 137.50 (50*2.75)
  		// Next, we are removing those 150 units from total units
  		Amount = 100.00 + 125.50 + 137.50 + ((Units - 150 ) * 5.25);
  		Sur_Charge = 15.00; 	
  	}
    else if (Units <= 500)
  	{
  		// 0 - 50 Units 100.00, 50 - 100 is 125.50, 100 - 150 is 137.50 (50 * 2.75), and 150 - 250 is 525.00 (100*5.25)
  		// Next, we are removing those 250 units from total units...
	   	Amount = 100.00 + 125.50 + 137.50 + 525.00 + ((Units - 250 ) * 6.30); 
	   	Sur_Charge = 15.00; 
	}
    else if (Units <= 800)
  	{
  		// 0 - 50 Units 100.00, 50 - 100 is 125.50, 100 - 150 is 137.50 (50 * 2.75), 150 - 250 is 525.00 (100*5.25), and 250 - 500 is 1575.00 (250*6.30)
  		// Next, we are removing those 500 units from total units...
	   	Amount = 100.00 + 125.50 + 137.50 + 525.00 + 1575.00 + ((Units - 500 ) * 7.10); 
	   	Sur_Charge = 15.00; 
	}
    else
  	{
  		// 0 - 50 Units 100.00, 50 - 100 is 125.50, 100 - 150 is 137.50 (50 * 2.75), 150 - 250 is 525.00 (100*5.25), 250 - 500 is 1575.00 (250*6.30), and 500 - 800 is 2130.00 (300*7.10)
  		// Next, we are removing those 800 units from total units...
	   	Amount = 100.00 + 125.50 + 137.50 + 525.00 + 1575.00 + 2130.00 + ((Units - 800 ) * 7.10); 
	   	Sur_Charge = 15.00; 
	}
	
	Total_Amount = Amount + Sur_Charge;
	printf("Electricity Bill  =  %.2f", Total_Amount); 
  	return 0;
}