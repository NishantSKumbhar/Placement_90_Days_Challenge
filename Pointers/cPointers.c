#include<stdio.h>
#include<string.h>


void showArray(int brr[], int n){
    int i;
    printf("\nArray   : ");
    for(i = 0; i < n; i++){
        printf(" %d ",*(brr+i));
        // printf(" %d ",brr[i]);
    }
    printf("\nAddress : ");
    for(i = 0; i < n; i++){
        printf(" %d ",(brr+i));
        // printf(" %d ",&brr[i]);
    }

}


void showmultiarray(int *p, int n){
    int i = 0;
    printf("\n\n");
    for(i = 0; i < n; i++){
        printf("%d \t",*(p+i));
        //printf("%d ",p[i]);
    }

    printf("\n");
    for(i = 0; i < n; i++){
        printf("%d ",(p+i));
    }
    printf("\n");
}

void sample(){
    printf("\nThis is Sample Function \n");
}
int * Add(int *n1, int *n2){

    int *ans = *n1 + *n2;
    return &ans;
}

int addi(int a, int b){
    return a+b;
}

void B(void (*p)()){
    printf("\nInside B\n");
    p(); // callback function
}
int main(){

    printf("\n\t\t\tC");
	printf("\n__________________________________________________");

	printf("\n******************** POINTERS ********************");

	printf("\n__________________________________________________");


	int a = 1025;

	printf("\na : %d",a);
	printf("\n&a : %d",&a);
	int *p = &a;
	printf("\n*p : %d",*p);
	printf("\np : %d",p);
	printf("\n&p : %d",&p);
    printf("\n*(p+1) : %d",*(p+1));  // garbage
    printf("\n(p+1) : %d",(p+1));
    printf("\n(*p+1) : %d",(*p+1));


    char *c = (char*)p;   // typecasting
    printf("\n*c : %d",*c);
    printf("\nc : %d",c);
    printf("\n&c : %d",&c);

    printf("\nc + 1 : %d",c +1);
    printf("\n*(c+1) : %d",*(c+1));
    printf("\n*c + 1 : %d",*c + 1);
	printf("\n*(c+1) + 1 : %d",*(c+1)+ 1);

	printf("\n\n\tVoid *\n");

	void *vp = &a;

	printf("\nvp : %d",vp);
	//printf("\n*vp : %d",*vp);
    printf("\nvp+1 : %d",vp+1);

    printf("\n\n\t Array\n");
    int arr[10] = {10, 20, 30, 40, 50, 60};

    printf("\nFirst Element : %d",*arr);

    showArray(arr, 10);

    int *arp = arr;

    //arr++; Invalid
    //arp++; Valid

    printf("\narp : %d",arp);
    printf("\n*arp : %d",*arp);
    *arp += 1;

    showArray(arr, 10);

    char name[5];
    // try by puttig 4
    name[0] = 'J';
    name[1] = 'O';
    name[2] = 'H';
    name[3] = 'N';
    int len = strlen(name);
    printf("\nName : %s and Length : %d",name,len);

    int *x = &a;
    printf("\nSize of Pointer : %d",sizeof(x));

    char *t = "Hello";
    printf("\nNew : %s",t);
    //t[0] = "J"; Invalid
    printf("\nNew : %s",t);


    printf("\n\n\t MultiDimentional Array\n");

    int darr[2][3] = {{2,3,6}, {4,5,8}};
    showmultiarray(darr, 6);
    int (*pr)[3] = darr;
    printf("\ndarr : %d",darr);
    printf("\ndarr[0] : %d",darr[0]);
    printf("\n&darr[0] : %d",&darr[0]);
    printf("\n&darr[0][0] : %d\n",&darr[0][0]);
    printf("\ndarr[1] : %d",darr[1]);
    printf("\n&darr[1] : %d",&darr[1]);
    printf("\n&darr[1][0] : %d\n",&darr[1][0]);

    printf("\ndarr + 1 : %d",darr+1);
    printf("\ndarr + 2 : %d\n",darr+2);

    printf("\n*darr : %d",*darr);
    printf("\n*darr + 1 : %d\n",*darr+1);

    printf("\n*(darr + 1) : %d\n",*(darr+1));

    printf("\ndarr[0][2] : %d",darr[0][2]);
    printf("\n*(darr[0]+2) : %d",*(darr[0]+2));
    printf("\n*(*(darr+0)+2) : %d",*(*(darr+0)+2));

    printf("\n\n\t 3-D Array\n");
    int trr[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};

    int i,j,k;
    printf("\nsize : %d\n",sizeof(trr)/sizeof(trr[0]));
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 2; k++){
                printf(" %2d ", trr[i][j][k]);
            }
            printf("  ");
        }
        printf("\n");
    }

    printf("\n\n\tDYNAMIC MEMORY ALLOCATION\n");

    int *ip = (int *)malloc(sizeof(int) * 3);

    *(ip + 0) = 12;
    *(ip + 1) = 13;
    *(ip + 2) = 14;

    printf("\n%d",ip[0]);
    printf("\n%d",ip[1]);
    printf("\n%d",*(ip+2));
    printf("\nSize of ip : %d\n",sizeof(ip));

    free(ip);
    /*int t=0;
    for(t = 0; t < 3; t++){
        printf("%d ",*(ip +t));
    }
    */


    //showArray(ip,3);
    free(ip);

    int num1 = 23, num2 = 22;
    int *ad = Add(&num1, &num2);
    sample();  // after calling sample it may affect the address
    printf("\nAddition is : %d",*ad);


    printf("\n\n\tFunction Pointer\n");
    int q;
    int (*fp)(int , int);
    fp = &addi;  // add
    q = (*fp)(3, 4);
    //q = fp(3, 4);
    printf("\nAddition : %d",q);

    void (*r)();
    r = sample;
    printf("\nFun sample using function pointer : ");
    r();

    B(r);  // function pointer passed
    //B(sample);
	return 0;
}
