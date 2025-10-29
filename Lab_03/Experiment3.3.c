// 3.3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).
#include<stdio.h>
int main ()
{
	
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\nCourse - BCA\n Batch - 06");
	printf("\n-------------------------\n");
	
	float weight , height , Bmi ;
	printf("Enter Weight (in kg) : ");
	scanf("%f", &weight);
	printf("Enter height (in meters) : ");
	scanf("%f", &height);
	
	Bmi = weight / height * height ;
	
	if (Bmi < 15){
		printf("Category : Starvation");
	}
	
	else if (Bmi >= 15.1 && Bmi <17.5){
		printf("Category : Anorexic");
	}
	else if (Bmi >= 17.6 && Bmi < 18.5 ){
		printf("Category : Underweight");
	}
	else if (Bmi >= 18.6 && Bmi < 24.9 ){
		
		printf("Category  : Ideal");
	}
	
	else if (Bmi >= 25 && Bmi < 25.9){
		printf("Category : Over weight");
	}
	else if (Bmi >= 30 && Bmi < 39.9){
		printf("Category : Obese");
	}
	else if (Bmi >= 40 ){
		printf("Category : Morbely Obese ");
	}
	return 0;
}
