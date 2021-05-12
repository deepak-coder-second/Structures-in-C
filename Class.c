#include <stdio.h>
#include <string.h>



struct Class{
    char Name[50];
    int rollNo;
    int addressKey;
};

void printStudent(struct Class Class){
    printf("%s\n",Class.Name);
    printf("%d\n",Class.rollNo);
    printf("%d\n",Class.addressKey);
}

int main(){
    struct Class std1;
    struct Class std2;
    struct Class std3;
    struct Class std4;

    int inputKey;

    //std1
    strcpy(std1.Name,"Adil");
    std1.rollNo=1;
    std1.addressKey=54;

    //std2
    strcpy(std2.Name,"Aliyas");
    std2.rollNo=2;
    std2.addressKey=44;

    //std3
    strcpy(std3.Name,"Aiswarya");
    std3.rollNo=3;
    std3.addressKey=34;

    //std4
    strcpy(std4.Name,"Agrima");
    std4.rollNo=4;
    std4.addressKey=24;


    printf("Enter roll No:");
    scanf("%d",&inputKey);

    if(std1.rollNo == inputKey){
        printStudent(std1);
    }else if(std2.rollNo == inputKey){
        printStudent(std2);
    }else if(std3.rollNo == inputKey){
        printStudent(std3);
    }else if(std4.rollNo == inputKey){
        printStudent(std4);
    }else{
        printf("Student not in the class\n");
    }



    return 0;
}