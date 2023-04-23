#include<stdio.h>
int main()  
{  
    float height, weight, bmi;  
  
    printf("Enter height in meter\n");  
    scanf("%f", &height);  
  
    printf("Enter weight in kg\n");  
    scanf("%f", &weight);  
  
    bmi = weight / (height * height);  
  
    printf("Your Body Mass Index(BMI) is %f\n", bmi);  
  
    if(bmi < 15)  
    {  
        printf("Your BMI category is: Starvation\n");  
    }  
    else if(bmi >= 15.1 && bmi <= 17.5)  
    {  
        printf("Your BMI category is: Anorexic\n");  
    }  
    else if(bmi >= 17.6 && bmi <= 18.5)  
    {  
        printf("Your BMI category is: Underweight\n");  
    }  
    else if(bmi >= 18.6 && bmi <= 24.9)  
    {  
        printf("Your BMI category is: Ideal\n");  
    }  
    else if(bmi >= 25 && bmi <= 25.9)  
    {  
        printf("Your BMI category is: Overweight\n");  
    }  
    else if(bmi >= 30 && bmi <= 30.9)  
    {  
        printf("Your BMI category is: Obese\n");  
    }  
    else if(bmi >= 40)  
    {  
        printf("Your BMI category is: Morbidly Obese\n");  
    }  
    else  
    {  
        printf("Wrong entry\n");  
    }  
  
    return 0;  
}  