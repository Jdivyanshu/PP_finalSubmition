#include<stdio.h>
// Create a function named length_conversion 
// Function converts length in meter to miles and inch

void length_conversion()
{   
    // Variable declaration 
    int length_in_meter;
    double length_in_inches;
    double length_in_miles;
    int choice_length;    // To choose the conversion
    printf("Welcome to the conversion of length\n");
    printf("Enter 1-> convert length in meter to miles or\n"); 
    printf("Enter 2-> convert length in meter to inches\n");
    scanf("%d",&choice_length);    // Taking user input to select choice using scanf
    if(choice_length==1)
    {   
        // printf("Enter the length in meter you want to convert into miles : ");
        // scanf("%d",&length_in_meter);
        // length_in_miles = 0.0006214 * length_in_meter;    // Since 1 meter = 0.0006214 miles
        // printf("The value of length in miles = %f\n", length_in_miles);
        char q;
        // while(q !='q')
        // {   
        //     printf("Enter the length in meter you want to convert into miles : ");
        //     scanf("%d",&length_in_meter);
        //     length_in_miles = 0.0006214 * length_in_meter;    // Since 1 meter = 0.0006214 miles
        //     printf("The value of length in miles = %f\n", length_in_miles);
        //     printf("If you want to quit , press q otherwise enter any key to continue\n");
        //     q = getchar();
        //     // scanf("%c",&qu);
        // }
        char c ;
       while(c!='q'){
          printf("Enter the length in meter you want to convert into miles : ");
            scanf("%d",&length_in_meter);
            length_in_miles = 0.0006214 * length_in_meter;    // Since 1 meter = 0.0006214 miles
            printf("The value of length in miles = %f\n", length_in_miles);
        printf("Kya chata hai\n");
        printf("if wants to quit then press q otherwise press any key to continue\n");
        c = getchar(c);
    }
        printf("Thank you\n");
    }
    else if(choice_length==2)
    {
        printf("Enter the length in meter you want to convert into inches : ");
        scanf("%d",&length_in_meter);
        length_in_inches = 39.3700787 * length_in_meter;  // Since 1 meter = 39.3700787 inch
        printf("The value of length in inches = %f\n", length_in_inches);
        printf("Thank you\n");
    }
    else
    {
        printf("Your choice is incorrect , Please enter the coorect choice\n");
        length_conversion();  // Using Recursion we again get back to our function
    }
}
int main()
{   
    printf("Enter the type of conversion you want to do : l->length , a->area , v->volume , s->speed , w-> weight , t-> temperature , p-> power , k-> pressure , c->currency , e-> energy , m-> angle \n");
    char character_input; // Taking character input to select the type of conversion  
    character_input=getchar();
    if (character_input=='l')
    {
    length_conversion();
    }
    else
{ printf("invalid char");}
return 0;
}