#include<stdio.h>
#include<conio.h>
void create()
{
int i[20],j[10],k[3],l[12];
char n[40],x[10];
printf("\n\t\t\tWelcome to Account Opening Service\n");
printf("\n\t\t\tPlease Enter Full Name: ");
scanf("%s",&n);
printf("\t\t\tEnter Mobile Number: ");
scanf("%d",&j);
printf("\t\t\tEnter age: ");
scanf("%d",&k);
printf("\t\t\tGender: ");
scanf("%s",&x);
printf("\t\t\tEnter Aadhar Card Number: ");
scanf("%d",&l);
printf("\n\t\t\t*Account Created Successfully*\n");
printf("\t\t    This is Your Account Number: 45696 37895\n");
printf("\t\tThe PassBook and ChequeBook will be delivered witnin 2 week");
}
void deposit()
{

int k,e;
printf("\n\t\t\tPlease Verify Your Identity\n");
printf("\t\t  Enter Account Number(10 digits only): ");
scanf("%d",&k);
printf("\t\t\t    Enter Amount: ");
scanf("%d",&e);
printf("\n\t\t\t\t*Processing*");
printf("\n\t\t\t*Amount Deposited Successfully*");
}
void withdraw()
{
int a[10],b[4],c[10],d[3];
printf("\n\t\tEnter Account Number(10 digits only): ");
scanf("%d",&a[10]);
printf("\t\t\t    Enter CVV Code: ");
scanf("%d",&d[3]);
printf("\t\t\tEnter 4 digit Pin code: ");
scanf("%d",&b[40]);
printf("\t\t      Enter Amount To Be Withdrawn: ");
scanf("%d",&c[10]);
printf("\n\t\t\t\t *Please wait*\n");
printf("\t\t\t*Amount withdrawn successfully*");
}
void balance()
{
int m[10];
char c[20];
printf("\n\t\t    Enter The Name Of Account Holder: ");
scanf("%s",&c);
printf("\t\t    Enter Account Number(10 digits only): ");
scanf("%d",&m);
printf("\n\t\t\t      *Verifying Details*\n");
printf("\t\t\t         *Please Wait*\n");
printf("\t\t\tAvailable Amount is RS.100000");
}
void pin()
{
int i,j,k,l;
printf("\n\t\tEnter Account Number(10 digits only): ");
scanf("%d",&l);
printf("\t\t\t Enter Existing Pin: ");
scanf("%d",&i);
printf("\t\t\t Enter New Pin: ");
scanf("%d",&j);
printf("\t\t\t Re-Enter New Pin: ");
scanf("%d",&k);
printf("\n\t\t\t*Pin Changed Successfully*");
}
void close()
{
int i,j;
char c[10];
printf("\n\t\tEnter Account Number(10 digits only): ");
scanf("%d",&i);
printf("\t\t\t     Enter Pin Number: ");
scanf("%d",&j);
printf("\t\t\t     Type `CONFIRM': ");
scanf("%s",&c);
printf("\n\t\t\t  *Account Closed Successfully*");
}
void main()
{
int b;
clrscr();
printf("\t\t\t**********************\n");
printf("\t\t\tBANK MANAGEMENT SYSTEM\n");
printf("\t\t\t**********************\n");
printf("\t\t\tWELCOME TO SBI MAIN MENU");
printf("\n\n\t\t\t1.Create/Open New Account\n\t\t\t2.Deposit Amount\n\t\t\t3.WithDraw Amount\n\t\t\t4.Balance Enquiry\n\t\t\t5.Change Pin Number\n\t\t\t6.Close An Account\n\t\t\t7.Exit\n");
printf("\t\t\tChoose From Above Option:- ");
scanf("%d",&b);
switch(b)
{
case 1:
create();
break;

case 2:
deposit();
break;

case 3:
withdraw();
break;

case 4:
balance();
break;

case 5:
pin();
break;

case 6:
close();
break;

case 7:
break;

default:
printf("\n Invalid Option");
break;
}
getch();
}
