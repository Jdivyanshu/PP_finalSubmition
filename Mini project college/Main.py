def userInformation():
    with open('file_list.txt', 'a') as f:
      name = input("Enter a your name: ")
      f.write(name + '\n')
      About = input("Enter a about you: ")
      f.write(About + '\n')
      f.close()
      
def Header_files():
    print("\n\n")
    print("C programming language offers various exciting and useful features and functionalities to the programmers.In all C programs, Header files play an important role. You can noy compile or execute any programs without specifying a header file. \n")
    print("What do you mean by Header files ?\n\n")
    print("A header file is a file that has the .h extension. In C, all header files must have the .h extension. A header file contains:-\n\n->Function Declaration\n->Macros\n->Data Type Defination\n")
    print("\nTypes of Header files in C:-\n\n")
    print("->Standard Library Header Files\n   Syntax :- #include<Header_Filename>\n\n->User-Defined header files\n    Syntax :- #included\"Heder_files\"\n\n")
    print("Different Header files in C :-\n\n")
    print(" 1.stdio.h    -> Mainly used to perform input and output operations link print() and scanf().\n\n")
    print(" 2.string.h    -> Mainly used to perform string handling operations like strlen() , strcmp() , etc.\n\n")
    print(" 3.conio.h    -> With this header file,you can execute console input and output operation.\n\n")
    print(" 4.stdlib.h    -> Mainly used to perform standard utility functions like malloc(), calloc() etc.\n\n")
    print(" 5.math.h      -> Mainly used to perform mathematical operations like sqrt(),pow(),etc.\n\n")
    print(" 6.time.h      -> Mainly used to perform time operations like time() and date().\n\n")
    print(" 7.ctyp.h    -> Used to perform character type functions like isdigit(), isalpha() etc.\n\n")
    print(" 8.assert.h    -> Used to verify assumptions made by a program and print a message if the assumption is false using functions like assert() etc.\n\n")
    print(" 9.locale.h    -> Mainly used to perform localization like functions such as setlocale() etc.\n\n")
    print(" 10.singal.h    -> Mainly used to perform signal handling functions such as signal(), raise() etc.\n\n")
    print(" 11.setjmp.h    -> Used to perform jump functions.\n\n")
    print(" 12.stdarg.h    -> Used to perform standard argument functions like va_start() etc.\n\n")
    print(" 13.errno.h    -> For performing error handling operations such as errno() to indicate the errors.\n\n")

def basicSyntax():
    print("\n\n\n")
    print("Basic syntax :-\n\n")
    print("            #include<Header_Filename>\n\n             int main(int argc, char const *argv[]){\n\n             printf(\"Hello World\\n\");\\\\printing hello world \n\n             return 0;\n           } ")
    print("\n\n")
    print("->Here we 1st need to import Header files")
    print("\n\n->Then we need to form 'main' function,whole content are written in between curlly brackets\n\n")
    print("->Main function is executable function that is compilation process is start from main method/function\n\n")
    print("->In main function printf is used. \nThe function of printf is just to print the given input between the brackets\n\n")
    print("->After the whole main funtion at the last we need to return 0\n\n")
    print("->The most imortant and powerfull opertor is semi-collen (;).\nSemi-collen is used to terminate the particular line of code\n\n")
    print("->Here \"\\\\\" this 2 backslesh is used to make comment that is after it any kind of data will not be considered until that particular line ")
    print("\n\n\n")
    
def howToPrint():
    print("\n\n\n")
    print("How to print :-\n\nThere are three types of printing in C\n\n")
    print("1. printf -> Syntax :- printf(\"format_string\",expression...);\n\n")
    print("2. putchar() -> Synatx :- int putchar(int char)")
    print("3. puts() -> Synatx :- int puts(const char * str)")
    print("\n\n\n")

def dataType():
    print("\n\n\n")
    print("What do you maen by Datatypes :-\n\nA data type, in programming, is a classification that specifies which type of  value a variable has and what type of mathematical, relational or logical operations can be applied to it withoutcausing   an error. A string, for example, is a data type that is used to classify text and an integer is a data type usedto   classify whole numbers.\n\n")
    print("Different types of data type:-")
    print("\n\n")
    print("1. Primiitive Datatypes\n\n")
    print("  A.Integer(int,%%d)\n  B.Charecter(char,%%c,%%s)\n  C.Floting point(float ,%%f)\n  D.Double Floating poin(double   float ,%%df\n  E.Void\n\n")
    print("2. Derived Datatypes\n\n")
    print("  A.Functions\n  B.Array\n  C.Pointers\n  D.References\n\n")
    print("3. Userdefined Datatypes\n\n")
    print("  A.Structur(Struct)\n  B.Union\n  C.Enum\n  D.Typedef\n\n")

def reservedKeywords():
    print("\n\n\n");
    print("There are 32 Reserved Keywords in C:-\n\n")
    print(" 1.Auto\n 2.Break\n 3.Case\n 4.char\n 5.const\n 6.continue\n 7.default\n 8.do\n 9.double\n 10.else\n 11.Enum\n 12.Exter\n 13.float\n 14.for\n 15.goto\n 16.if\n 17.int\n 18.long\n 19.register\n 20.return\n  21. Short\n  22. Signed\n 23. Sizeof\n  24. Static\n 25. Struct\n 26. Switch\n 27.typedef\n 28.Union\n 29.unsigned\n 30.void\n 31.volatile\n 32.while\n\n")
    print("This are those kind of reserved words that can not be use as name of datatypes or any identifier\n\n")

def Operators():
    print("What do you mean by operators\n")
    print("An perator is a symbol  used to perform operation in a given programming language\n\n")
    print("Types of Operators:-\n\n")
    print("1.Arithmetic operators:-\n")
    print(" a.Addition -> (+)\n b.Subtraction -> (-)\n c.Multiplication -> (*)\n d.Division -> (/)\n e.Equality -> (=)\n f.Modulus -> (%)\n\n");
    print("2.Relational operators:-\n")
    print(" a.is equal to -> (==)\n b.is not equal to -> (!=)\n c.Gerater then -> (>)\n d.Less then -> (<)\n e.Greater then or equal to  -> (>=)\n f.Less then or equal to -> (<=)\n\n")
    print("3.Logical operators:-\n")
    print(" a.And -> (&&)\n b.Or -> (||)\n c.Not -> (!)\n\n");
    print("4.Assignment operators:-\n")
    print(" a.equal to -> (=)\n b.euqual when add -> (+=)\n c.equal when subtract -> (-=)\n d.equal when multiply -> (*=)\n e.equal when divide -> (/=)\n\n")

def Arrays():
    print("\n\n\n");
    print("What do you mean by Arrays:-\n\n")
    print("    An array is a collection of data item of the same type.\n   Item are stored at contiguous memory location\n     The index of a define array gose 0 to (n-1)\n\n")
    print("Syntax :- \"data_type nameOf_Array[sizeOf_Array]\"\n\n");
    print("Different datatypes with array\n\n");
    print("1. Integer Array:-\n")
    print("    An integer array is a collection of integer data.\n");
    print("Example :-\n a.Initialisation -> int arr[5]\n b.Initalisation with declaration -> int arr[3] = {1,2,3}\n\n")
    print("2. Floating array:-\n")
    print("    A floating array is a collection of floating data. That is stores decimal values\n")
    print("Example :-\n a.Initialisation -> float arr[5]\n b.Initalisation with declaration -> float arr[3] = {1.5,2.8,3}\n\n");
    print("3. Charecter array:-\n")
    print("    A Charecter array is a collection of charecter. That is the one way to store string in C language\n")
    print("Example :-\n a.Initialisation -> char arr[5]\n b.Initalisation with declaration -> char arr[3] = {'a','b','\\0'} or char arr[50] = \"Divyanshu jain\"\n\n")
    print("Here \\0 is used to terminate the string and known as null charecter\n\n")

def Loops():
    print("\n\n\n")
    print("What do you mean by Loops:-\n\n")
    print("    Loops are a way to iterate over a collection of data.\n    It is use for code reusability,saving time\n\n")
    print("Types of Loops:-\n\n")
    print("1. For Loop:\n")
    print("    Synatx:- for( intialization ; condition ; updation)\n   {\n         \\\\code\n     }\n\n")
    print("Example:\nprint first 5 positive integers :-\n\n   for( int i =1 ; i<=5 ; i++)\n   {\n         printf(i );\n     }\n\n")
    print("2. While Loop:\n")
    print("    Synatx:- while( condition )\n   {\n         \\\\code\n          updation\n       }\n\n")
    print("Example:\nprint first 5 positive integers :-\n\n   int i =1 ;\n   while( i<=5 )\n   {\n         printf(i );\n         i++;\n     }\n\n")
    print("3. do While Loop:\n")
    print("    Synatx:- do\n   {\n         \\\\code\n          updation\n       }\n   while( condition );\n\n")
    print("Example:\nprint first 5 positive integers :-\n\n   int i =1 ;\n   do\n   {\n         printf(i );\n         i++;\n     }\n   while( i<=5 );\n\n")

def pointers():
    print("\n\n\n")
    print("What do you mean by Pointers:-\n\n")
    print("    Pointers in C are used to store the address of variables or a memory location. This variable can be of any data type i.e, int, char, function, array, or any other pointer. The size of the pointer depends on the architecture.\n\n")
    print("Types of Pointers:-\n\n")
    print("1. Integer Pointer:\n");
    print("    An integer pointer is a pointer for an integer data address storage.\n\n")
    print("Example:\n\n   int a = 10;\n   int *p = &a;\n   printf(\"The value of a is %%d\\n\",a);\n   printf(\"The value of a is %%d\\n\",*p);\n\n")
    print("2. Floating Pointer:\n");
    print("    A floating pointer is a pointer for an floating data address storage.\n\n")
    print("Example:\n\n   float a = 10.0;\n   float *p1 = &a;\n   printf(\"The value of a is %%f\\n\",a);\n   printf(\"The value of a is %%f\\n\",*p1);\n\n")
    print("3. Character Pointer:\n");
    print("    A character pointer is a pointer for an character data address storage.\n\n")
    print("Example:\n\n   char a5 = 'a';\n   char *p2 = &a;\n   printf(\"The value of a is %%c\\n\",a5);\n   printf(\"The value of a is %%c\\n\",*p2);\n\n")
    print("4. String Pointer:\n")
    print("    A string pointer is a pointer for an string data address storage.\n\n")
    print("Example:\n\n   char a6[50] = \"Divyanshu jain\";\n   char *p3 = &a6;\n   printf(\"The value of a is %%s\\n\",a6);\n   printf(\"The value of a is %%s\\n\",*p3);\n\n")

def Functions():
    print("\n\n\n")
    print("What do you mean by Functions:-\n\n")
    print("    Functions are a way to use code recursively.\n     It is used for code reusibility.\n\n")
    print("Syntax:-\n\n")
    print("    data_type function name(arg1, arg2,...)\n\n")
    print("Example:\n")
    print("    int sum(int a, int b)\n    {\n        return a+b;\n    }\n\n")
    print("    int main()\n    {\n        int a = 10;\n        int b = 20;\n        printf(\"The sum of a and b is %%d\",sum(a,b));\n        return 0;\n    }\n\n")
    print("    Output:- The sum of a and b is 30\n\n")
    print("\n\n")
    print("Function Arguments:-\n\n")
    print("    There are two types of arguments in function\n\n")
    print("    1. Variable\n\n")
    print("    2. Pointer\n\n")

def PracticeSet():
    print("\n\n\n")
    print("Practice Set:-\n\n")
    print("1. Write a program to print first 5 positive integers\n\n")
    print("\n\n#include<stdio.h>\n\nint main()\n{\n\nint i;\n  for(i=1;i<5;i++){\n    printf(\"%%d\",i);\n  }\nretun 0;\n}\n\n")
    Ps_Q1()
    print("From 2 to 8 do it your own")
    print("2. Write a program to print first 5 negative integers\n\n")
    Ps_Q2()
    print("3. Write a program to print first 5 even integers\n\n")
    Ps_Q3()
    print("4. Write a program to print first 5 odd integers\n\n")
    Ps_Q4()
    print("5. Write a program to print first 5 natural numbers\n\n")
    Ps_Q5()
    print("6. Write a program to print first 5 natural numbers in reverse order\n\n")
    Ps_Q6()
    print("7. Write a program to print first 5 even numbers in reverse order\n\n")
    Ps_Q7()
    print("8. Write a program to print first 5 odd numbers in reverse order\n\n")
    Ps_Q8()


def Ps_Q1():
    positiveInteger = 1
    while positiveInteger <=5:
        print(positiveInteger)
        positiveInteger += 1

def Ps_Q2():
    negativeInteger = -1
    while negativeInteger >=-5:
        print(negativeInteger)
        negativeInteger -= 1

def Ps_Q3():
    evenInteger = 2
    while evenInteger <=10:
        print(evenInteger)
        evenInteger += 2

def Ps_Q4():
    oddInteger = 1
    while oddInteger <=9:
        print(oddInteger)
        oddInteger += 2

def Ps_Q5():
    naturalNumber = 1
    while naturalNumber <=5:
        print(naturalNumber)
        naturalNumber += 1
def Ps_Q6():
    naturalNumber = 5
    while naturalNumber >=1:
        print(naturalNumber)
        naturalNumber -= 1
def Ps_Q7():
    naturalNumber = 10
    while naturalNumber >=2:
        print(naturalNumber)
        naturalNumber -= 2
def Ps_Q8():
    naturalNumber = 9
    while naturalNumber >=1:
        print(naturalNumber)
        naturalNumber -= 2



#main
print("\n\n                     Welcome to C Programming Language\n\n")

#userInformation
with open('file_list.txt', 'a') as f:
      name = input("Enter a your name: ")
      f.write(name + '\n')
      About = input("Enter a about you: ")
      f.write(About + '\n')
      f.close()

print("\n\nC is a general-purpose, procedural, imperative computer programming language.\nC is the most widely used computer language. It keeps fluctuating at number one scale of popularity along with Java programming language, which is also equally popular and most widely used among modern software programmers.\n\n\n"); # defination
print("The main features of C language are:-\n\n");
print("->Easy to learn\n->Structured language\n->It produces efficient programs\n->It can handle low-level activities\n->It can be compiled on a variety of computer platforms\n\n"); # Features
print("Choss which chapter you want to read:-\n\n");
print("1. Header files\n2. Basic syntex\n3. How to print\n4. Datatypes\n5. Reserved keywords\n6. Operators\n7. Arrays\n8. Loops\n9. Pointer\n10. Functions\n11. Practice set\n\n"); # Chapeter

choice = int(input('Enter your choice:- '))
while choice!=0:
    if choice == 0:
        break 
    elif choice==1:
        Header_files()
    elif choice==2:
        basicSyntax()
    elif choice==3:
        howToPrint()
    elif choice==4:
        dataType()
    elif choice==5:
        reservedKeywords()
    elif choice==6:
        Operators()
    elif choice==7:
        Arrays()
    elif choice==8:
        Loops()
    elif choice==9:
        pointers()
    elif choice==10:
        Functions()
    elif choice==11:
        PracticeSet()
    else:
        print("Invalid choice")
    print("\n\n\n0.For Quite\n1. Header files\n2. Basic syntex\n3. How to print\n4. Datatypes\n5. Reserved keywords\n6. Operators\n7. Arrays\n8. Loops\n9. Pointer\n10. Functions\n11. Practice set\n\n\n")
    print("\n\nChoss which chapter you want to read:-\n\n")
    choice = int(input('Enter your choice:- ')) 

print(f"\n\nThank you for using this program \n{name}")
print("Have a nice day\n\n")