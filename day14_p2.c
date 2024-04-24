#include<stdio.h>
void italy();
void brazil();
void argentina();
int main()
{
printf("Iam in main\n");
italy();
brazil();
argentina();
return 0;

}
//  Calling more then one function
void italy()
{
printf("I am in Italy\n");
}
void brazil()
{
printf("I am in  brazil\n");
}
void argentina()
{
printf("Iam in argentina\n");
}

