#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <stdbool.h>

void menu();
void createFile();
void add();
void delete();
void update();
void list();
void listAll();
void listByName();
void listBySex();
void removeFile();
bool appRun = true;

struct Person{
    int id;
    char name[30];
    char address[50];
    char phoneNum[15];
};

void menu();
void createFile();
void add();
void delete();
void update();
void list();
void listAll();
void listByName();
void listBySex();
void removeFile();
const char fName[] = {"phonebook.txt"};//To assign the file name that i want -- mistake for the safety i change char fName[] = {"phonebook.txt"}; to char fName[] = {"phonebook.txt"};

int main(int argc, char* argv[]){
    system("cls");  //clears the screen
    system("color B0"); //Creates Bright White Background with black text
    menu();

}
void menu(){

        system("cls");
        printf("\t#######----PHONEBOOK----#######");
        printf("\n\n\t\t --MENU-- \t\t\n\n");
        printf("\t 1.Add New \t 2.List \t 3.Delete \t 4.Update \t 5.Remove File \t 6.Exit\n");
        int choice;
    scanf("\n%d",&choice);
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                list();
                break;
            case 3:
                //delete();
                break;
            case 4:
                //update();
                break;
            case 5:
                //removeFile();
                break;
            case 6:
                system("cls");
                return;
            default:
                printf("\n Wrong Input \n");
                menu();
                system("cls");

        }
}

void add(){
    FILE* f;
    struct Person person1;
    f = fopen(fName,"ab+");//ab+ helps us the open the file and also start the end of the file that helps us the see the data's one after the other

    printf("\nEnter ID : ");
    scanf("%d",&person1.id);

    printf("\nEnter Name : ");
    scanf("%s",person1.name);

    printf("\nEnter Address : ");
    scanf("%s",person1.address);

    printf("\nEnter Phone Number : ");
    scanf("%s",person1.phoneNum);

    fprintf(f,"%d %s %s %s\n",person1.id,person1.name,person1.address,person1.phoneNum);
    fclose(f);

    printf("\nData added\n");
    getch();
    menu();




}
void listAll(){
    struct Person person1;
    FILE *f;

    system("cls");
    f = fopen(fName,"rb");

    if(f == NULL) {
        printf("\n No data found.");
        return;

    }
    rewind(f);//to clear the buffer in the function we use rewind(). This function moves the filer pointer to the beginning of the file and clears the buffer.
    //Its like our data holds the predetermined memory and rewind helps us for clear the memory and reuse for the new data's
    while (fscanf(f, "%d %s %s %s", &person1.id, person1.name, person1.address, person1.phoneNum) != EOF) {//fread can't read don't know why :/ - That's a alternatife use and works fine
        printf("%d %s %s %s\n", person1.id, person1.name, person1.address, person1.phoneNum);
    }//We use here format specifiers for read the data.Because the program read the end of the file we added the EOF(End of File) control
    fclose(f);

    printf("\nPress any key to continue.");
    getchar();
    getchar();

    menu();

}
void list(){
    printf("Which way you want to list : \n");
    printf("For list all press 1 \n For list with name press 2");
    int choice;
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            listAll();
            break;
    }
}