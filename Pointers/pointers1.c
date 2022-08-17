#include<stdio.h>

void only_read(const char name[]){
    printf(" %s ",name);
    /// Error : name[0] = 'u';
}

void display_name(char nAme[], char* sUrname){
    printf("\nLength of name : %d",strlen(nAme));
    printf("\nLength of surname : %d",strlen(sUrname));
    printf("\n%s %s",nAme, sUrname);

    while(*nAme != '\0'){
        printf(" %c ",*nAme);
        nAme++;
    }
}

void double_array(int drr[], int n){
    printf("\nSize of drr : %d\n",sizeof(drr));
    int i;
    for(i = 0; i < n; i++){
        drr[i] *= 2;
    }

}


void print_array(int brr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf(" %d ",brr[i]);
        printf(" %d \n",*(brr+i));
    }
}

void print_array1(int brr[]){
    int i;
    int n = sizeof(brr)/sizeof(brr[0]);
    for(i = 0; i < n; i++){
        printf(" %d ",brr[i]);
        printf(" %d \n",*(brr+i));
    }
}

int main(){
    printf("Pointers");
    int a = 10;
    int *p = &a;
    printf("\np: %d",p);
    printf("\np+1 : %d",p+1);
    p = p+1;
    printf("\np: %d",p);
    printf("\n*p: %d",*p);


    printf("\n*****************************************");

    printf("\nNew Concept : \n");

    int arr[] = {10, 20, 30, 40, 50};
    int i;
    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf(" %d ",arr[i]);
        printf(" %d \n",*(arr+i));
    }

    printf("\n*****************************************\n");

    print_array(arr, sizeof(arr)/sizeof(arr[0]));
    printf("\n*****************************************\n");

    print_array1(arr);
    printf("\n*****************************************\n");

    double_array(arr, sizeof(arr)/sizeof(arr[0]));

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf(" %d ",arr[i]);
    }

    printf("\n*****************************************\n");

    char name[20];
    name[0] = 'N';
    name[1] = 'i';
    name[2] = 's';
    name[3] = 'h';
    name[4] = 'a';
    name[5] = 'n';
    name[6] = 't';
    name[7] = '\0';
    printf("\n Name : %s ",name);
    printf("\nString length : %d",strlen(name));

    char surname[] = "Kumbhar";
    char *c1;
    c1 = surname;
    printf("\n %c",c1[0]);
    printf("\n %c",*(c1+1));
    printf("\n*****************************************\n");


    display_name(name, surname);

    printf("\n*****************************************\n");

    char *const_name = "Nana";  /// String gets stored as a compile time; stored in Text segment of memory.
    /// it can not be modified.
    //const_name[0] = 'J';
    display_name(const_name, surname);
    printf("\n*****************************************\n");

    printf("\nConstant :");
    only_read(name);
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    printf("\n*****************************************\n");
    return 0;
}
