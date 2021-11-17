#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
COORD coord = {0,0};
void gotoxy(int x,int y){
coord.X =x;
coord.Y =y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

struct home_flight 
{
    int city_no, flight_time,u_age,pay_opt_no,amount;
    double mo_num, pass_no,acc_no1,acc_no2;
    char city1[50],city2[50],city3[50],city4[50],city5[50],city6[50],city7[50],city8[50],city9[50],city10[50], city11[50], city12[50];
    char u_fname[20], u_lname[20],upi_pass_1[5],upi_pass_2[5],upi_id[42],dabit_no[16],ifsc_no[11],dabit_cvv_1[5], dabit_cvv_2[5];
    
}s;

void border(){
system("cls");
// 218 == '┌'
// 191 == //'┐'
// 192 == //'└'
// 217 == //'┘'
// 179 == //'│'
// 196 == //'─'
    gotoxy(6,2);
    printf("%c",218);
    gotoxy(7,2);
    for (int i = 1; i < 34; i++)
    {
        printf("%c",196);
    }

    gotoxy(6,3);
    printf("%c",179);
    gotoxy(39,2);
     printf("%c",191);
    gotoxy(39,3);
    printf("%c",179);
    gotoxy(40,3);
    for (int i = 0; i < 25; i++)
    {
         printf("%c",196);
    }
    gotoxy(6,4);
    printf("%c",192);
    gotoxy(7,4);
     for (int i = 1; i < 33; i++)
    {
        printf("%c",196);
    }
    gotoxy(39,4);
    printf("%c",217);
    gotoxy(65,2);
    printf("%c",218);
    gotoxy(66,2);
    for (int i = 1; i < 25; i++)
    {
        printf("%c",196);
    }
    gotoxy(65,3);
    printf("%c",179);
    gotoxy(65,4);
    printf("%c",192);
    gotoxy(66,4);
    for (int i = 1; i < 25; i++)
    {
        printf("%c",196);
    }
    gotoxy(90,4);
    printf("%C",217);
    gotoxy(90,3);
    printf("%C",179);
    gotoxy(90,2);
    printf("%C",191);
    

    gotoxy(4,3);
    printf("%c",196);
    printf("%c",196);
    gotoxy(3,3);
    printf("%c",218);
    gotoxy(3,3);
    for(int i = 1; i< 25; i++){
        gotoxy(3,3+i);
        printf("%c",179);
    }
    gotoxy(4,8);
    printf("%C",196);
    printf("%C",196);
    gotoxy(6,7);
    printf("%C",218);
    gotoxy(6,8);
    printf("%C",179);
    gotoxy(6,9);
    printf("%C",192);
    gotoxy(7,7);
    for (int i = 1; i <= 12; i++)
    {
        printf("%C",196);
    }
    gotoxy(19,7);
    printf("%C",191);
    gotoxy(19,8);
    printf("%C",179);
    gotoxy(19,9);
    printf("%C",217);
    gotoxy(19,32);
    gotoxy(7,9);
    for (int i = 1; i <= 12; i++)
    {
        printf("%C",196);
    }

    gotoxy(91,3);
    printf("%c",196);
    gotoxy(92,3);
    printf("%C",191);
    gotoxy(92,4);
    for(int i = 1; i< 25; i++){
        gotoxy(92,3+i);
        printf("%c",179);
    }
    gotoxy(3,28);
    printf("%c",192);
    gotoxy(3,28);
    gotoxy(4,28);
    for (int i = 1; i <=30; i++)
    {
        printf("%c",196);
    }
    gotoxy(92,28);
    printf("%c",217);
    gotoxy(34,27);
    printf("%c",218);
    gotoxy(34,28);
    printf("%c", 179);
    gotoxy(34,29);
    printf("%c", 192);
    gotoxy(35,27);
    for (int i = 1; i <=56; i++)
    {
        printf("%c",196);
    }
    gotoxy(35,29);
    for (int i = 1; i <=56; i++)
    {
        printf("%c",196);
    }
    gotoxy(91,27);
    printf("%c", 191);
    gotoxy(91,28);
    printf("%c", 179);
     gotoxy(91,29);
    printf("%c", 217);
    
}
void box2(){
    gotoxy(6,7);
    for (int i = 1; i <=105; i++)
    {
        printf("%c",196);
    }
    gotoxy(5,7);
    printf("%c",218);
    gotoxy(5,8);
    printf("%c",179);
    gotoxy(5,9);
    printf("%c",192);
    gotoxy(6,9);
    for (int i = 1; i <=105; i++)
    {
        printf("%c",196);
    }
    gotoxy(111,7);
    printf("%c",191);
    gotoxy(111,8);
    printf("%c",179);
    gotoxy(111,9);
    printf("%c",217);
    
    gotoxy(6,19);
    for (int i = 1; i <=105; i++)
    {
        printf("%c",196);
    }
    gotoxy(5,19);
    printf("%c",218);
    gotoxy(5,20);
    printf("%c",179);
    gotoxy(5,21);
    printf("%c",192);
    gotoxy(6,21);
    for (int i = 1; i <=105; i++)
    {
        printf("%c",196);
    }
    gotoxy(111,19);
    printf("%c",191);
    gotoxy(111,20);
    printf("%c",179);
    gotoxy(111,21);
    printf("%c",217);
}
void date_time(){
int day, month, year;
time_t now;
time(&now);
struct tm *local = localtime(&now);
day = local->tm_mday;            
month = local->tm_mon + 1;  
year = local->tm_year + 1900;
printf("Date: %02d/%02d/%d\n", day, month, year);
}
void Tickit(){
// 218 == '┌'
// 191 == //'┐'
// 192 == //'└'
// 217 == //'┘'
// 179 == //'│'
// 196 == //'─'
    system("cls");
    gotoxy(6,2);
    for (int i = 1; i < 70; i++)
    {
        printf("%c",196);
    }
    gotoxy(5,2);
    printf("%c",218);
    gotoxy(5,2);
    for (int i = 1; i < 22; i++)
    {
        gotoxy(5,2+i);
        printf("%c",179);
    }
    gotoxy(6,4);
    for (int i = 1; i < 70; i++)
    {
        printf("%c",196);
    }
    gotoxy(75,2);
    printf("%c",191);
    gotoxy(75,2);
    for (int i = 1; i < 22; i++)
    {
        gotoxy(75,2+i);
        printf("%c",179);
    }
    gotoxy(5,24);
    printf("%c",192);
    gotoxy(6,24);
    for (int i = 1; i < 70; i++)
    {
        printf("%c",196);
    }
    gotoxy(75,24);
    printf("%c",217);
    gotoxy(35,3);
    printf("BORDING PASS");
    gotoxy(55,3);
    date_time();
    gotoxy(10,10);
    printf("NAME : ");
    gotoxy(10,11);
    printf("%s %s", s.u_fname,s.u_lname);
    gotoxy(30,10);
    printf("AGE : ");
    gotoxy(30,11);
    printf("%d",s.u_age);
    gotoxy(40,10);
    printf("Mobile No. : ");
    gotoxy(40,11);
    printf("%.0f",s.mo_num);
    gotoxy(60,10);
    printf("Passport No. : ");
    gotoxy(60,11);
    printf("%0.f",s.pass_no);
    gotoxy(10,14);
    printf("SOURCE : ");
    gotoxy(24,14);
    printf("-------------->");
    gotoxy(10,15);
    printf("Ahmedabad");
    gotoxy(40,14);
    printf("DESTINATION : ");
    gotoxy(40,15);
    switch (s.city_no)
    {
    case 1:
        printf("%s",s.city1);
        break;
    case 2:
        printf("%s",s.city2);
        break;
    case 3:
        printf("%s",s.city3);
        break;
    case 4:
        printf("%s",s.city4);
        break;
    case 5:
        printf("%s",s.city5);
        break;
    case 6:
        printf("%s",s.city6);
        break;
    case 7:
        printf("%s",s.city7);
        break;
    case 8:
        printf("%s",s.city8);
        break;
    case 9:
        printf("%s",s.city9);
        break;
    case 10:
        printf("%s",s.city10);
        break;
    case 11:
        printf("%s",s.city11);
        break;
    case 12:
        printf("%s",s.city12);
        break;
    }
    gotoxy(60,14);
    printf("AMMOUNT : ");
    gotoxy(60,15);
    printf("%d",s.amount);
    gotoxy(35,20);
    printf("HAVE A NICE TRIP!");
    gotoxy(6,32);
}
void paymant(){
   border();
    gotoxy(6,3);
    printf("A H M E D A B A D___A I R P O R T");
    gotoxy(68,3);
    date_time();
    gotoxy(7,8);
    printf("Paymant_Form");
    gotoxy(35,10);
    printf("Choose your payment method");
    gotoxy(25,11);
    for (int i = 1; i <=50; i++)
    {printf("%c",196);}
    gotoxy(40,14);
    printf("(1) UPI");
    gotoxy(40,16);
    printf("(2) DEBIT CARD");
    gotoxy(40,18);
    printf("(3) INTERNET BANKING");
    gotoxy(35,28);
    printf("Select Your Option :  ");
    fflush(stdin);
    scanf("%d",&s.pay_opt_no);
     switch (s.pay_opt_no)
    {
    case 1:
    case1:
        system("cls");
        border();
        gotoxy(6,3);
        printf("A H M E D A B A D___A I R P O R T");
        gotoxy(68,3);
        date_time();
        gotoxy(7,8);
        printf("UPI");
        gotoxy(35,8);
        printf("UPI method has been selected ");
        gotoxy(25,9);
        for (int i = 1; i <=50; i++)
        {printf("%c",196);}
        gotoxy(32,12);
        printf("Enter your UPI ID : ");
        fflush(stdin);
        fgets(s.upi_id,45,stdin);
        char c;
        char ch;
        gotoxy(32,14);
        printf("Enter your UPI PIN : ");
        fflush(stdin);
       for (int i = 0; i < 4; i++)
       {
           c = getch();
           s.upi_pass_1[i] = c;
           printf("*");
       }
        gotoxy(32,16);
        printf("verify your UPI PIN : ");
        fflush(stdin);
       for (int i = 0; i < 4; i++)
       {
           ch = getch();
           s.upi_pass_2[i] = ch;
           printf("*");
       }
    int x = strcmp(s.upi_pass_1,s.upi_pass_2);
    if (x == 0)
    {
    gotoxy(32,18);
    printf("Amount to Pay : ");
    fflush(stdin);
    scanf("%d",&s.amount);
    gotoxy(35,28);
    system("pause");
    Tickit();
    break;
    }
    else {
      goto case1;  
    }
    case 2:
    case2:
        system("cls");
        border();
        gotoxy(6,3);
        printf("A H M E D A B A D___A I R P O R T");
        gotoxy(68,3);
        date_time();
        gotoxy(7,8);
        printf("DABIT");
        gotoxy(35,8);
        printf("DEBIT method has been selected ");
        gotoxy(25,9);
        for (int i = 1; i <=50; i++)
        {printf("%c",196);}
        gotoxy(32,12);
        printf("Enter your Debit Card No. : ");
        fflush(stdin);
        scanf("%s",&s.dabit_no);
        if (strlen(s.dabit_no) != 16){
            goto case2;
        }
        char _c;
        char _ch;
        gotoxy(32,14);
        printf("Enter your CVV : ");
        fflush(stdin);
       for (int i = 0; i < 3; i++)
       {
           _c = getch();
           s.dabit_cvv_1[i] = _c;
           printf("*");
       }
        gotoxy(32,16);
        printf("verify your CVV : ");
        fflush(stdin);
       for (int j = 0; j < 3; j++)
       {
           _ch = getch();
           s.dabit_cvv_2[j] = _ch;
           printf("*");
       }
    int y = strcmp(s.dabit_cvv_1,s.dabit_cvv_2);
    if (y == 0)
    {
    gotoxy(32,18);
    printf("Amount to Pay : ");
    fflush(stdin);
    scanf("%d",&s.amount);
    gotoxy(35,28);
    system("pause");
    Tickit();
    break;
    }
    else {
      goto case2;  
    }

case 3:
    case3:
        system("cls");
        border();
        gotoxy(6,3);
        printf("A H M E D A B A D___A I R P O R T");
        gotoxy(68,3);
        date_time();
        gotoxy(7,8);
        printf("INTERNET_BANKING");
        gotoxy(35,8);
        printf("INTERNET_BANKING method has been selected ");
        gotoxy(25,9);
        for (int i = 1; i <=50; i++)
        {printf("%c",196);}
        gotoxy(32,12);
        printf("Enter your ACC No. : ");
        fflush(stdin);
        scanf("%lf",&s.acc_no1);
        int count1 = 0;
        account_no:
        if(s.acc_no1 < 99999999 || s.acc_no1 > 999999999999999999)
        { 
        count1 = count1 + 1;
        count1++;
        gotoxy(32,13 + count1);
        printf("Enter Acc No again : ");
        fflush(stdin);
        scanf("%lf",&s.acc_no1);
        goto account_no;
        }
        else{
            gotoxy(32,15+count1);
            printf("verify your ACC no : ");
            fflush(stdin);
            scanf("%lf",&s.acc_no2);
            int count2 = 0;
            account_num:
            if(s.acc_no2 < 99999999 || s.acc_no2 > 999999999999999999)
            { 
            count2 = count2 + 1;
            count2++;
            gotoxy(30,17 + count2);
            printf("Enter Acc No again : ");
            fflush(stdin);
            scanf("%lf",&s.acc_no2);
            goto account_num;
            }
        }
    if (s.acc_no1 == s.acc_no2)
    {
    gotoxy(32,17+count1 +count1);
    printf("enter your IFSC code : ");
    fflush(stdin);
    fgets(s.ifsc_no,11,stdin);
     gotoxy(32,18+count1);
    printf("Amount to Pay : ");
    fflush(stdin);
    scanf("%d",&s.amount);
    gotoxy(35,28);
    system("pause");
    Tickit();
    break;
    }
    else {
      goto case3;  
     }
    }
    }
void user()
{
   border();
    gotoxy(6,3);
    printf("A H M E D A B A D___A I R P O R T");
    gotoxy(68,3);
    date_time();
    gotoxy(8,8);
    printf("USER_FORM");
    gotoxy(30,8);
    printf("Enter your First Name : ");
    scanf("%s",&s.u_fname);
    gotoxy(30,10);
    printf("Enter your Last Name : ");
    scanf("%s",&s.u_lname);
    gotoxy(30,12);
    printf("Enter your age : ");
    scanf("%d",&s.u_age);
    if(s.u_age >110 || s.u_age < 1){
        gotoxy(30,14);
        printf("Invelid age, Please Try Again");
        gotoxy(30,16);
        fflush(stdin);
        printf("Enter your age : ");
        scanf("%d",&s.u_age);
    }
    gotoxy(30,14);
    printf("Enter Mobile No : ");
    scanf("%lf",&s.mo_num);
    int count = 0;
    mobile_number:
    if(s.mo_num < 1111111111 || s.mo_num > 9999999999)
       { 
        count = count + 1;
        count++;
        gotoxy(30,14 + count);
        printf("Enter Mobile No again : ");
        fflush(stdin);
        scanf("%lf",&s.mo_num);
        goto mobile_number;
       }
     gotoxy(30,16+count);
    printf("Enter Passport No : ");
    scanf("%lf",&s.pass_no);
    passport_number:
    if(s.pass_no < 11111111 || s.pass_no > 99999999)
       { 
        count++;
        gotoxy(30,17+count);
        printf("Invellid Passport No.");
        gotoxy(30,19 + count);
        printf("Enter Passport No again : ");
        fflush(stdin);
        scanf("%lf",&s.pass_no);
        goto passport_number;
       }
   
    char yas_no;
    yasno:
    gotoxy(35,28);
    printf("Do you want to continue? (y/n) :  ");
    fflush(stdin);
    scanf("%c",&yas_no);
    if ((int) yas_no == 121){
        system("cls");
        paymant();
    }
   else if ((int) yas_no == 110)
   {
       exit(1);
   }
   else{
       goto yasno;
   }
}    
void book()
{
    int choose;
    gotoxy(30,24);
    printf("(1) Book Now");
    gotoxy(30,25);
    printf("(2) Are you want to cancel Flight?");
    gotoxy(30,27);
    printf("Choose any option : ");
    scanf("%d", &choose);
    printf("\n");    
    switch (choose)
    {
    case 1:
    system("cls");
       user();
        break;
    case 2:
    exit(1);
        break;
    }
}

int flight_name(){
    border();
    gotoxy(6,3);
    printf("A H M E D A B A D___A I R P O R T");
    gotoxy(68,3);
    date_time();
    gotoxy(8,8);
    printf("H O M E");
    gotoxy(28,8);
    printf(" Welcome to Ahmedabad Airport Flight Secuduling \t ");
    gotoxy(28,9);
   for (int i = 1; i <=50; i++)
        {printf("%c",196);}
    gotoxy(28,10);
    printf(" Choose your Destination according to given list below : ");
    gotoxy(40,12);
    printf("\t 1. Mumbai ");
    gotoxy(40,13);
    printf("\t 2. New Delhi ");
    gotoxy(40,14);
    printf("\t 3. Chennai ");
    gotoxy(40,15);
    printf("\t 4. Singapore ");
    gotoxy(40,16);
    printf("\t 5. Hong Kong ");
    gotoxy(40,17);
    printf("\t 6. Tokyo ");
    gotoxy(40,18);
    printf("\t 7. London ");
    gotoxy(40,19);
    printf("\t 8. Dubai ");
    gotoxy(40,20);
    printf("\t 9. Munic ");
    gotoxy(40,21);
    printf("\t10. Toronto ");
    gotoxy(40,22);
    printf("\t11. New York ");
    gotoxy(40,23);
    printf("\t12. Cape town ");
    gotoxy(35,28);
    fflush(stdin);
    printf("Enter Your Destination Number : ");
    scanf("%d",&s.city_no);
    if (s.city_no > 12 || s.city_no <1){
        system("cls");
        flight_name();
    }
};
void list_flight_mu()
{
    box2();
    gotoxy(35,8);
    strcpy(s.city1,"MUMBAI");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n",s.city1);
    gotoxy(6,10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6,12);
    printf("(1)\t  MUMBAI\t  ---\t 8:00 PM\t T1\t \t 20A\t \t DEPARTED\t2000/-\n");
    gotoxy(6,14);
    printf("(2)\t  MUMBAI\t  ---\t 9:00 AM\t T2\t \t 2A \t \t DEPARTED\t2000/-\n");
    gotoxy(10,20);
    printf("Select Flight according to your timing : ");
    fflush(stdin);
    scanf("%d",&s.flight_time);
   if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_mu();
   }
}
void list_flight_nd(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city2, "NEW DELHI");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city2);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t  ---\t 8:30 PM\t T7\t \t 7C\t \t DEPARTED\t3500/-\n", s.city2);
    gotoxy(6, 14);
    printf("(2)\t  %s\t  ---\t 9:30 AM\t T7\t \t 7C \t \t DEPARTED\t3500/-\n", s.city2);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_nd();
   }
}
void list_flight_cn(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city3, "CHENNAI");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city3);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t ---\t 11:00 PM\t T6\t \t 20B\t \t DEPARTED\t3000/-\n", s.city3);
    gotoxy(6, 14);
    printf("(2)\t  %s\t ---\t 10:00 AM\t T1\t \t 8B \t \t DEPARTED\t3500/-\n", s.city3);
    gotoxy(6, 20);
    printf("Select Flight according to your timing : ");
    fflush(stdin);
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_cn();
   }
}
void list_flight_sg(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city4, "SINGAPORE");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city4);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t ---\t 9:30 AM\t T5\t \t 2B \t \t DEPARTED\t40000/-\n", s.city4);
    gotoxy(6, 14);
    printf("(2)\t  %s\t ---\t 10:30 PM\t T7\t \t 5A \t \t DEPARTED\t40000/-\n", s.city4);
    gotoxy(10, 20);
    printf("Select Flight according to your timing : ");
    fflush(stdin);
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_sg();
   }
}
void list_flight_hk(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city5, "HONG KONG");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city5);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t ---\t 5:00 PM\t T3\t \t 21A\t \t DEPARTED\t35000/-\n", s.city5);
    gotoxy(6, 14);
    printf("(2)\t  %s\t ---\t 5:00 AM\t T3\t \t 7B \t \t DEPARTED\t35000/-\n", s.city5);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_hk();
   }
}
void list_flight_tk(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city6, "TOKYO");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city6);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t\t ---\t 1:00 PM\t T4\t \t 7A\t \t DEPARTED\t50000/-\n", s.city6);
    gotoxy(6, 14);
    printf("(2)\t  %s\t\t ---\t 4:00 AM\t T10\t \t 1C \t \t DEPARTED\t50000/-\n", s.city6);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_tk();
   }
}
void list_flight_ld(void)
{
    box2();
    gotoxy(35, 8);   
    strcpy(s.city7, "LONDON");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city7);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t %s\t\t ---\t 6:00 PM\t T10\t \t 5A\t \t DEPARTED\t60000/-\n", s.city7);
    gotoxy(6, 14);
    printf("(2)\t %s\t\t ---\t 12:00 AM\t T4\t \t 2C \t \t DEPARTED\t60000/-\n", s.city7);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_ld();
   }
}
void list_flight_db(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city8, "DUBAI");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city8);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t %s\t\t ---\t 1:30 PM\t T9\t \t 15C\t \t DEPARTED\t40000/-\n", s.city8);
    gotoxy(6, 14);
    printf("(2)\t %s\t\t ---\t 8:25 AM\t T11\t \t 16B \t \t DEPARTED\t40000/-\n", s.city8);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_db();
   }
}
void list_flight_mn(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city9, "MUNIC");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city9);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t\t ---\t 8:45 PM\t T6\t \t 14A\t \t DEPARTED\t50000/-\n", s.city9);
    gotoxy(6, 14);
    printf("(2)\t  %s\t\t ---\t 7:45 AM\t T7\t \t 7V \t \t DEPARTED\t50000/-\n", s.city9);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
        gotoxy(50,28);
        system("cls");
        list_flight_mn();
   }
}
void list_flight_tr(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city10, "TORONTO");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city10);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t ---\t 9:45 PM\t T3\t \t 5D\t \t DEPARTED\t60000/-\n", s.city10);
    gotoxy(6, 14);
    printf("(2)\t  %s\t ---\t 7:00 AM\t T4\t \t 3D \t \t DEPARTED\t60000/-\n", s.city10);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_tr();
   }
}
void list_flight_ny(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city11, "NEW YORK");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city11);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t ---\t 1:15 PM\t T1\t \t 4A\t \t DEPARTED\t60000/-\n", s.city11);
    gotoxy(6, 14);
    printf("(2)\t  %s\t ---\t ---- --\t T2\t \t 2D\t \t --------\t-----\n", s.city11);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_ny();
   }
}
void list_flight_ct(void)
{
    box2();
    gotoxy(35, 8);
    strcpy(s.city12, "CAPE TOWN");
    printf("HERE IS THE POSSIBLE FLIGHT FOR REACHING %s \n", s.city12);
    gotoxy(6, 10);
    printf("Flight NO\t Destination\t VIA\t TIME\t \t TERMINAL\t Gate No\t Status\t \tAmmount\n");
    gotoxy(6, 12);
    printf("(1)\t  %s\t ---\t ---- PM\t T9\t \t 20A\t \t DEPARTED\t40000/-\n", s.city12);
    gotoxy(6, 14);
    printf("(2)\t  %s\t ---\t 12:00 AM\t T10\t \t 2A \t \t --------\t-----\n", s.city12);
    gotoxy(10, 20);
    fflush(stdin);
    printf("Select Flight according to your timing : ");
    scanf("%d", &s.flight_time);
    if (s.flight_time == 1 || s.flight_time == 2){
       book();
   }
   else{
    gotoxy(50,28);
       system("cls");
       list_flight_ct();
   }
}
void main (){
    flight_name();
   switch (s.city_no)
    {
    case 1:
        system("cls");
        list_flight_mu();
        break;
    case 2:
        system("cls");
        list_flight_nd();
        break;
    case 3:
       system("cls");
        list_flight_cn();
        break;
    case 4:
       system("cls");
        list_flight_sg();
        break;
    case 5:
       system("cls");
        list_flight_hk();
        break;
    case 6:
       system("cls");
        list_flight_tk();
        break;
    case 7:
       system("cls");
        list_flight_ld();
        break;
    case 8:
       system("cls");
        list_flight_db();
        break;
    case 9:
       system("cls");
        list_flight_mn();
        break;
    case 10:
       system("cls");
        list_flight_tr();
        break;
    case 11:
       system("cls");
        list_flight_ny();
        break;
    case 12:
       system("cls");
        list_flight_ct();
        break;
    default:
        break;
    }
}