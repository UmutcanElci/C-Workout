#include <stdio.h>
#include <malloc.h>

void squareNumber(int* n){//pointer int
    int square = *n * *n;
    *n = square;
}

void findValue(int *num){
    *num = 39;
}

int* addNumbers(int* n1,int* n2,int* n3,int* sum){
    *sum = *n1+*n2+*n3;
    return sum;
}
int* multiply(int* n1,int* n2,int* sum){
    *sum = *n1 * *n2;
    return sum;
}

struct Person{
    double salary;
    int age;
};

typedef struct Person2{//Differences are typedef allow us to control our structs and lower the typing
    double salary;
    int age;
}person;

enum Size{
    Small,//0
    Medium,//1
    Large,//2
    ExtraLarge,//3
    Huge=52//Or we can give a value
};

enum Weekdays{
    Monday,//0
    Tuesday,//1
    Wednesday,//2
    Thursday,//3
    Friday,//4
    Saturday,//5
    Sunday//6
};
int main(){
//    int a = 5;
//    printf("%d\n",&a);//&a will give the address in the memory
//
//    int *p;//declared pointer
//    printf("%d\n",&p);

//    p = &a;//5 is assigned to the a and the address of a is assigned to the p(variable) pointer

//    printf("%d\n",*p);//* operator gives us the value of the pointed variable
//    printf("\n\n");
    //change the value of a variable using pointer

//    double salary;
//    printf("Enter your salary\n");
//    scanf("%lf",&salary);
//    double *p = &salary;
//
//    printf("print salary with pointer : %.1lf\n",*p);
//
//    *p = 2* *p;
//    printf("%lf",*p);
//
    //Pointers and Arrays

//    int number[5] = {1,3,5,7,9};
//    for (int i = 0; i < 5; ++i) {
//        printf("%d = %p\n",number[i],&number[i]);//Print address and value of the array
//    }
//    printf("Array address : %p\n",number);//its means numbers 0 index address
//    printf("Array address : %p\n",number+2);//address of index 2
//    printf("Array value : %d\n",*number);

//Create a program to find the largest element of an array using pointers

//int arr[] = {34,12,21,54,48};
//int largest = *arr;//Largest take the first index address
//    for (int i = 0; i < 5; ++i) {
//        if(largest<*(arr + i)){
//            largest = *(arr+i);
//        }
//    }
//    printf("Largest element : %d in the address of %p",largest,&largest);

//Pointers and functions
//int n = 21;
//    findValue(&n);//we have a findValue function and it's take a parameter of a int address.Take the address and add that address a different value
//    printf("%d",n);

//int n = 21;
//
//    squareNumber(&n);
//    printf("%d",n);

//int n1 = 23;
//int n2 = 43;
//int n3 = 12;
//int sum;
//   int* result =  addNumbers(&n1,&n2,&n3,&sum);
//    printf("%d",*result);

//Create a program to find the multiplication of two numbers using a function and pointers
//
//int n1 = 13;
//int n2 = 9;
//int m;
//
//int *p = multiply(&n1,&n2,&m);
//    printf("%d",*p);

//Struct
//struct Person person1;
//person1.salary=4234.52;
//person1.age =23;
//
//    printf("Age of person : %d",person1.age);
//    printf("Salary of the person : %2.lf",person1.salary);
//
//    person person2;
//    person2.salary =122;
//    person2.age =23;

//Enumerations

//    enum Size shoeSize;
//    shoeSize = Medium;//Small index 0 , Medium 1 and so on
//
//    printf("%d",shoeSize);
//    shoeSize = Huge;
//    printf("%d",shoeSize);

//Create an enum with enum constants weekdays

//    enum Weekdays weekend1;
//    enum Weekdays weekend2;
//
//    weekend1 = Saturday;
//    weekend2 = Sunday;
//    printf("%d \n%d",weekend1,weekend2);

//Dynamic Memory Allocation

//malloc = memory allocation
//malloc is used to reserve a block of memory of the specified size

int n = 100;
int *p;

    p = (int*) malloc(n * sizeof(int));
    printf("%d\n%p",*p,p);


}