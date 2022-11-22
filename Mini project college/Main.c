// Generale C guid..........................................

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <time.h>
#include <errno.h>

//********************************************************************************

// functions for diffrent chapter
void Header_files();     //*
void basicSyntex();      //*
void howToPrint();       //*
void Datatypes();        //*
void reservedKeywords(); //*
void Operators();        //*
void Arrays();           //*
void loops();            //*
void pointer();          //*
void Functions();        //*
void PracticeSet();      //*

//********************************************************************************

void PS_q1();
void PS_q2();
void PS_q3();
void PS_q4();
void PS_q5();
void PS_q6();
void PS_q7();
void PS_q8();

//****************************************************************
int main(int argc, char const *argv[])
{

    printf("\n\n\n\n                                                             Welcome to the Basic C guid\n\n\n\n");
    // char nameGet[100];
    // userInformation

    char name[100];
    char Information[1000];

    /* File pointer to hold reference to our file */
    FILE *fPtr;

    /*
     * Open file in w (write) mode.
     * "data/file1.txt" is complete path to create file
     */
    fPtr = fopen("file1.txt", "a");

    /* fopen() return NULL if last operation was unsuccessful */
    if (fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    /* Input contents from user to store in file */
    printf("Enter your name : \n");
    fgets(name, 100, stdin);
    printf("Define your self:-\n");
    fgets(Information, 900, stdin);

    /* Write data to file */
    fputs(name, fPtr);
    fputs("\n", fPtr);
    fputs(Information, fPtr);

    /* Close file to save file data */
    fclose(fPtr);

    /* Success message */
    printf("File created and saved successfully. :) \n");

    // Generale information about C..........
    printf("\n\nC is a general-purpose, procedural, imperative computer programming language.\nC is the most widely used computer language. It keeps fluctuating at number one scale of popularity along with Java programming language, which is also equally popular and most widely used among modern software programmers.\n\n\n"); // defination
    printf("The main features of C language are:-\n\n");
    printf("->Easy to learn\n->Structured language\n->It produces efficient programs\n->It can handle low-level activities\n->It can be compiled on a variety of computer platforms\n\n"); // Features
    printf("Choss which chapter you want to read:-\n\n");
    printf("1. Header files\n2. Basic syntex\n3. How to print\n4. Datatypes\n5. Reserved keywords\n6. Operators\n7. Arrays\n8. Loops\n9. Pointer\n10. Functions\n11. Practice set\n\n"); // Chapeter

    int choice;
    printf("Enter your choice:-\n");
    scanf("%d", &choice);

    while (choice != 0)
    {

        switch (choice)
        {
        case 1:
            Header_files();
            break;
        case 2:
            basicSyntex();
            break;
        case 3:
            howToPrint();
            break;
        case 4:
            Datatypes();
            break;
        case 5:
            reservedKeywords();
            break;
        case 6:
            Operators();
            break;
        case 7:
            Arrays();
            break;
        case 8:
            loops();
            break;
        case 9:
            pointer();
            break;
        case 10:
            Functions();
            break;
        case 11:
            PracticeSet();
            break;
        default:
            printf("Enter a valid choice\n");
            break;
        }
        printf("\n\n\n0.For Quite\n1. Header files\n2. Basic syntex\n3. How to print\n4. Datatypes\n5. Reserved keywords\n6. Operators\n7. Arrays\n8. Loops\n9. Pointer\n10. Functions\n11. Practice set\n\n\n");
        printf("\n\nChoss which chapter you want to read:-\n\n");
        printf("Enter your choice:-\n");
        scanf("%d", &choice);
    }
    printf("\n\nThank you for using your guid %s\n\n", name);
    printf("\n\nHave a nice day\n\n");
    return 0;
}

void Header_files()
{
    printf("\n\n");
    printf("C programming language offers various exciting and useful features and functionalities to the programmers.In all C programs, Header files play an important role. You can noy compile or execute any programs without specifying a header file. \n");
    printf("What do you mean by Header files ?\n\n");
    printf("A header file is a file that has the .h extension. In C, all header files must have the .h extension. A header file contains:-\n\n->Function Declaration\n->Macros\n->Data Type Defination\n");
    printf("\nTypes of Header files in C:-\n\n");
    printf("->Standard Library Header Files\n   Syntax :- #include<Header_Filename>\n\n->User-Defined header files\n    Syntax :- #included\"Heder_files\"\n\n");
    printf("Different Header files in C :-\n\n");
    printf(" 1.stdio.h    -> Mainly used to perform input and output operations link printf() and scanf().\n\n");
    printf(" 2.string.h    -> Mainly used to perform string handling operations like strlen() , strcmp() , etc.\n\n");
    printf(" 3.conio.h    -> With this header file,you can execute console input and output operation.\n\n");
    printf(" 4.stdlib.h    -> Mainly used to perform standard utility functions like malloc(), calloc() etc.\n\n");
    printf(" 5.math.h      -> Mainly used to perform mathematical operations like sqrt(),pow(),etc.\n\n");
    printf(" 6.time.h      -> Mainly used to perform time operations like time() and date().\n\n");
    printf(" 7.ctyp.h    -> Used to perform character type functions like isdigit(), isalpha() etc.\n\n");
    printf(" 8.assert.h    -> Used to verify assumptions made by a program and print a message if the assumption is false using functions like assert() etc.\n\n");
    printf(" 9.locale.h    -> Mainly used to perform localization like functions such as setlocale() etc.\n\n");
    printf(" 10.singal.h    -> Mainly used to perform signal handling functions such as signal(), raise() etc.\n\n");
    printf(" 11.setjmp.h    -> Used to perform jump functions.\n\n");
    printf(" 12.stdarg.h    -> Used to perform standard argument functions like va_start() etc.\n\n");
    printf(" 13.errno.h    -> For performing error handling operations such as errno() to indicate the errors.\n\n");
}

void basicSyntex()
{
    printf("\n\n\n");
    printf("Basic syntax :-\n\n");
    printf("            #include<Header_Filename>\n\n             int main(int argc, char const *argv[]){\n\n             printf(\"Hello World\\n\");\\\\printing hello world \n\n             return 0;\n           } ");
    printf("\n\n");
    printf("->Here we 1st need to import Header files");
    printf("\n\n->Then we need to form 'main' function,whole content are written in between curlly brackets\n\n");
    printf("->Main function is executable function that is compilation process is start from main method/function\n\n");
    printf("->In main function printf is used. \nThe function of printf is just to print the given input between the brackets\n\n");
    printf("->After the whole main funtion at the last we need to return 0\n\n");
    printf("->The most imortant and powerfull opertor is semi-collen (;).\nSemi-collen is used to terminate the particular line of code\n\n");
    printf("->Here \"\\\\\" this 2 backslesh is used to make comment that is after it any kind of data will not be considered until that particular line ");
    printf("\n\n\n");
}

void howToPrint()
{
    printf("\n\n\n");
    printf("How to print :-\n\nThere are three types of printing in C\n\n");
    printf("1. printf -> Syntax :- printf(\"format_string\",expression...);\n\n");
    printf("2. putchar() -> Synatx :- int putchar(int char)");
    printf("3. puts() -> Synatx :- int puts(const char * str)");
    printf("\n\n\n");
}

void Datatypes()
{
    printf("\n\n\n");
    printf("What do you maen by Datatypes :-\n\nA data type, in programming, is a classification that specifies which type of value a variable has and what type of mathematical, relational or logical operations can be applied to it without causing an error. A string, for example, is a data type that is used to classify text and an integer is a data type used to classify whole numbers.\n\n");
    printf("Different types of data type:-");
    printf("\n\n");
    printf("1. Primiitive Datatypes\n\n");
    printf("  A.Integer(int,\%d)\n  B.Charecter(char,\%c,\%s)\n  C.Floting point(float ,\%f)\n  D.Double Floating point(double float ,\%df\n  E.Void\n\n");
    printf("2. Derived Datatypes\n\n");
    printf("  A.Functions\n  B.Array\n  C.Pointers\n  D.References\n\n");
    printf("3. Userdefined Datatypes\n\n");
    printf("  A.Structur(Struct)\n  B.Union\n  C.Enum\n  D.Typedef\n\n");
}

void reservedKeywords()
{
    printf("\n\n\n");
    printf("There are 32 Reserved Keywords in C:-\n\n");
    printf(" 1.Auto\n 2.Break\n 3.Case\n 4.char\n 5.const\n 6.continue\n 7.default\n 8.do\n 9.double\n 10.else\n 11.Enum\n 12.Exter\n 13.float\n 14.for\n 15.goto\n 16.if\n 17.int\n 18.long\n 19.register\n 20.return\n  21. Short\n  22. Signed\n 23. Sizeof\n  24. Static\n 25. Struct\n 26. Switch\n 27.typedef\n 28.Union\n 29.unsigned\n 30.void\n 31.volatile\n 32.while\n\n");
    printf("This are those kind of reserved words that can not be use as name of datatypes or any identifier\n\n");
}

void Operators()
{
    printf("What do you mean by operators\n");
    printf("An perator is a symbol  used to perform operation in a given programming language\n\n");
    printf("Types of Operators:-\n\n");
    printf("1.Arithmetic operators:-\n");
    printf(" a.Addition -> (+)\n b.Subtraction -> (-)\n c.Multiplication -> (*)\n d.Division -> (/)\n e.Equality -> (=)\n f.Modulus -> (%)\n\n");
    printf("2.Relational operators:-\n");
    printf(" a.is equal to -> (==)\n b.is not equal to -> (!=)\n c.Gerater then -> (>)\n d.Less then -> (<)\n e.Greater then or equal to  -> (>=)\n f.Less then or equal to -> (<=)\n\n");
    printf("3.Logical operators:-\n");
    printf(" a.And -> (&&)\n b.Or -> (||)\n c.Not -> (!)\n\n");
    printf("4.Assignment operators:-\n");
    printf(" a.equal to -> (=)\n b.euqual when add -> (+=)\n c.equal when subtract -> (-=)\n d.equal when multiply -> (*=)\n e.equal when divide -> (/=)\n\n");
}

void Arrays()
{
    printf("\n\n\n");
    printf("What do you mean by Arrays:-\n\n");
    printf("    An array is a collection of data item of the same type.\n   Item are stored at contiguous memory location\n     The index of a define array gose 0 to (n-1)\n\n");
    printf("Syntax :- \"data_type nameOf_Array[sizeOf_Array]\"\n\n");
    printf("Different datatypes with array\n\n");
    printf("1. Integer Array:-\n");
    printf("    An integer array is a collection of integer data.\n");
    printf("Example :-\n a.Initialisation -> int arr[5]\n b.Initalisation with declaration -> int arr[3] = {1,2,3}\n\n");
    printf("2. Floating array:-\n");
    printf("    A floating array is a collection of floating data. That is stores decimal values\n");
    printf("Example :-\n a.Initialisation -> float arr[5]\n b.Initalisation with declaration -> float arr[3] = {1.5,2.8,3}\n\n");
    printf("3. Charecter array:-\n");
    printf("    A Charecter array is a collection of charecter. That is the one way to store string in C language\n");
    printf("Example :-\n a.Initialisation -> char arr[5]\n b.Initalisation with declaration -> char arr[3] = {'a','b','\\0'} or char arr[50] = \"Divyanshu jain\"\n\n");
    printf("Here \\0 is used to terminate the string and known as null charecter\n\n");
}

void loops()
{
    printf("\n\n\n");
    printf("What do you mean by Loops:-\n\n");
    printf("    Loops are a way to iterate over a collection of data.\n    It is use for code reusability,saving time\n\n");
    printf("Types of Loops:-\n\n");
    printf("1. For Loop:\n");
    printf("    Synatx:- for( intialization ; condition ; updation)\n   {\n         \\\\code\n     }\n\n");
    printf("Example:\nprint first 5 positive integers :-\n\n   for( int i =1 ; i<=5 ; i++)\n   {\n         printf(i );\n     }\n\n");
    printf("2. While Loop:\n");
    printf("    Synatx:- while( condition )\n   {\n         \\\\code\n          updation\n       }\n\n");
    printf("Example:\nprint first 5 positive integers :-\n\n   int i =1 ;\n   while( i<=5 )\n   {\n         printf(i );\n         i++;\n     }\n\n");
    printf("3. do While Loop:\n");
    printf("    Synatx:- do\n   {\n         \\\\code\n          updation\n       }\n   while( condition );\n\n");
    printf("Example:\nprint first 5 positive integers :-\n\n   int i =1 ;\n   do\n   {\n         printf(i );\n         i++;\n     }\n   while( i<=5 );\n\n");
}

void pointer()
{
    printf("\n\n\n");
    printf("What do you mean by Pointers:-\n\n");
    printf("    Pointers in C are used to store the address of variables or a memory location. This variable can be of any data type i.e, int, char, function, array, or any other pointer. The size of the pointer depends on the architecture.\n\n");
    printf("Types of Pointers:-\n\n");
    printf("1. Integer Pointer:\n");
    printf("    An integer pointer is a pointer for an integer data address storage.\n\n");
    printf("Example:\n\n   int a = 10;\n   int *p = &a;\n   printf(\"The value of a is %%d\\n\",a);\n   printf(\"The value of a is %%d\\n\",*p);\n\n");
    printf("2. Floating Pointer:\n");
    printf("    A floating pointer is a pointer for an floating data address storage.\n\n");
    printf("Example:\n\n   float a = 10.0;\n   float *p1 = &a;\n   printf(\"The value of a is %%f\\n\",a);\n   printf(\"The value of a is %%f\\n\",*p1);\n\n");
    printf("3. Character Pointer:\n");
    printf("    A character pointer is a pointer for an character data address storage.\n\n");
    printf("Example:\n\n   char a5 = 'a';\n   char *p2 = &a;\n   printf(\"The value of a is %%c\\n\",a5);\n   printf(\"The value of a is %%c\\n\",*p2);\n\n");
    printf("4. String Pointer:\n");
    printf("    A string pointer is a pointer for an string data address storage.\n\n");
    printf("Example:\n\n   char a6[50] = \"Divyanshu jain\";\n   char *p3 = &a6;\n   printf(\"The value of a is %%s\\n\",a6);\n   printf(\"The value of a is %%s\\n\",*p3);\n\n");
}

void Functions()
{
    printf("\n\n\n");
    printf("What do you mean by Functions:-\n\n");
    printf("    Functions are a way to use code recursively.\n     It is used for code reusibility.\n\n");
    printf("Syntax:-\n\n");
    printf("    data_type function name(arg1, arg2,...)\n\n");
    printf("Example:\n");
    printf("    int sum(int a, int b)\n    {\n        return a+b;\n    }\n\n");
    printf("    int main()\n    {\n        int a = 10;\n        int b = 20;\n        printf(\"The sum of a and b is %%d\",sum(a,b));\n        return 0;\n    }\n\n");
    printf("    Output:- The sum of a and b is 30\n\n");
    printf("\n\n");
    printf("Function Arguments:-\n\n");
    printf("    There are two types of arguments in function\n\n");
    printf("    1. Variable\n\n");
    printf("    2. Pointer\n\n");
}

void PracticeSet()
{
    printf("\n\n\n");
    printf("Practice Set:-\n\n");
    printf("1. Write a program to print first 5 positive integers\n\n");
    printf("\n\n#include<stdio.h>\n\nint main()\n{\n\nint i;\n  for(i=1;i<5;i++){\n    printf(\"%%d\",i);\n  }\nretun 0;\n}\n\n");
    printf("Output:-\n");
    PS_q1();
    printf("\n\nFrom 2 to 8 do it your own");
    printf("\n\n2. Write a program to print first 5 negative integers\n\n");
    printf("Output:-\n");
    PS_q2();
    printf("\n\n3. Write a program to print first 5 even integers\n\n");
    printf("Output:-\n");
    PS_q3();
    printf("\n\n4. Write a program to print first 5 odd integers\n\n");
    printf("Output:-\n");
    PS_q4();
    printf("\n\n5. Write a program to print first 5 natural numbers\n\n");
    printf("Output:-\n");
    PS_q5();
    printf("\n\n6. Write a program to print first 5 natural numbers in reverse order\n\n");
    printf("Output:-\n");
    PS_q6();
    printf("\n\n7. Write a program to print first 5 even numbers in reverse order\n\n");
    printf("Output:-\n");
    PS_q7();
    printf("\n\n8. Write a program to print first 5 odd numbers in reverse order\n\n");
    printf("Output:-\n");
    PS_q8();
}

void PS_q1()
{
    int positiveInteger = 1;
    for (positiveInteger; positiveInteger <= 5; positiveInteger++)
    {
        printf("%d ", positiveInteger);
    }
}

void PS_q2()
{
    int negativeInteger = -1;
    for (negativeInteger; negativeInteger >= -5; negativeInteger--)
    {
        printf("%d ", negativeInteger);
    }
}

void PS_q3()
{
    int evenInteger = 2;
    for (evenInteger; evenInteger <= 10; evenInteger += 2)
    {
        printf("%d ", evenInteger);
    }
}

void PS_q4()
{
    int oddInteger = 1;
    for (oddInteger; oddInteger <= 9; oddInteger += 2)
    {
        printf("%d ", oddInteger);
    }
}

void PS_q5()
{
    int naturalInteger = 1;
    for (naturalInteger; naturalInteger <= 5; naturalInteger++)
    {
        printf("%d ", naturalInteger);
    }
}

void PS_q6()
{
    int naturalInteger = 5;
    for (naturalInteger; naturalInteger >= 1; naturalInteger--)
    {
        printf("%d ", naturalInteger);
    }
}

void PS_q7()
{
    int evenInteger = 10;
    for (evenInteger; evenInteger >= 2; evenInteger -= 2)
    {
        printf("%d ", evenInteger);
    }
}

void PS_q8()
{
    int oddInteger = 9;
    for (oddInteger; oddInteger >= 1; oddInteger -= 2)
    {
        printf("%d ", oddInteger);
    }
}
