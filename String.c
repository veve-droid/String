#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

	//variables data types
	int num;
	
	
	//menu
	printf("Choose from the menu:\n\n1.Hexadecimal to Decimal\n\n");
	printf("2.Substring\n\n");
	printf("3.Count Words\n\n");
	
	//intro
	
	do{
	
		printf("Choose from the menu above: \n");
		scanf("%i", &num);
		
	}while(num < 1);
	
	if(num>3){
		printf("Invalid input.\n");
		return 0;
	}	

	//body

//////// Hexadecimal to Decimal ////////

if(num==1){

	char st1[64];
	int i, len, valid, deci, j;
	long long int x, sum=0; 
	float y;



	/// does not accept invalid inputs ///
	
	do{ 
	
		printf("Enter a valid hexadecimal: ");
		scanf("%s", st1);
		
		valid=1;
		for(i=0; st1[i] != '\0'; i++){
		
			if(!(st1[i] >= '0' && st1[i] <= '9' || st1[i] >= 'A' && st1[i] <= 'F')){
				valid = 0;
				break;
				
			}
		
		}
	
	}while(valid==0);
	
	
	
	len = strlen(st1);
	
	
	
	for(i=0, j = len-1; st1[i] != '\0'; i++, j--){
	
	y=pow(16, i);
	
		if(st1[j] >= 'A' && st1[j] <= 'F')
			deci = st1[j] - 55;	
		
		else 
			deci = st1[j] - 48;	
			
		
		x = y * deci;
		sum = sum + x;
	}
	
	
	printf("%s in base 10 is: %lli\n", st1, sum);
	
return 0;
	
}

/// result: 2A5 = 677 ///
//////// Substring ////////

if(num==2){
	char st1[64], st2[64];
	int i, j, bump, len1, len2;
	
	
	printf("Enter the first string: ");
	scanf("%s", st1);

	printf("Enter the second string: ");
	scanf("%s", st2);

	
	len1 = strlen(st1);
	len2 = strlen(st2);

	
	for(j=0; st2[j] != '\0'; j++){
	i=0;
	
		if(st1[i] == st2[j]){
		for(bump=1; bump != 0 && st1[i+1] != '\0'; i++, j++)
		
			if(st1[i+1] != st2[j+1])
			bump = 0;
			
			else
			bump++;
		
		}
	
	}

	
	if(bump)
	printf("\n%s is a substring of %s.\n\n", st1, st2);
	
	else
	printf("\n%s is not a substring of %s.\n\n", st1, st2);
	
	
	
return 0;	
}

/// result: term is a substring of determine. ///
//////// Count words ////////

if(num == 3){
	char st1[64];
	int i, count, len;
	
	
	printf("Enter a string: ");
	scanf("%[^\n]", st1);
	
	
	len = strlen(st1);
	for(i=2, count=1; st1[i] != '\0'; i++){
		
		if(st1[i-1] != ' ' && st1[i] == ' ')
		count++;
	
	}

	printf("\n%s has %i word/s.\n\n", st1, count);
	
return 0;		
}
/// result: ve  ve    ve has 3 word/s. ///

return 0;	
}



