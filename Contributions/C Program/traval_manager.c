#include <stdio.h>
#include <string.h>
struct Driver_id
{
   char Name_id[50];
   char License_no[50];
   char Route[100];
   char Exprinc_kms[10];
}Driver_id1;
int main()
{
   printf("\t\t\t\t\t\tTraval Manager\t\t\t\t\t\t\t\n");
   // struct Driver_id Driver_id1;
   // scanf("%s",&Name_id[50]);
   // strcpy(Driver_id1.Name_id, "jignesh solanki");
   scanf("%s\n",&Driver_id1.Name_id);
   strcpy(Driver_id1.License_no, "AERJ13345676");
   strcpy(Driver_id1.Route, "Surat to Ahmadabad");
   strcpy(Driver_id1.Exprinc_kms, "1232kms");

   printf("Driver Name is : %s\n", Driver_id1.Name_id);
   printf("Driver License no is : %s\n", Driver_id1.License_no);
   printf("Driver Route is : %s\n", Driver_id1.Route);
   printf("Driver Exprinc_kms no is : %s\n", Driver_id1.Exprinc_kms);

   return 0;
}