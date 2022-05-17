#include <stdio.h>

int BracketSingleID(int);
int BracketJointID(int);

void main() 
{
   int singlejoint, income, joint, result;
   int * tax;
   while (1 == 1) 
   {
      printf("Single or Joint filing? Type 1 or 2. \n");
      scanf("%d", &singlejoint);
      if (singlejoint == 1) {
	 printf("Income?\n");
         scanf("%d", &income);	 
	 result = BracketSingleID(income);
	 printf("For an income of %d your tax bracket is %d\n", income, result);
	 break;
      }
      else if (singlejoint == 2) {
         printf("Joint Income?\n");
	 scanf("%d", &joint);
	 result = BracketJointID(joint);
	 printf("For a joint income of %d your tax bracket is %d\n", joint, result);
	 break;
      }
      else 
      {
         printf("Folow the directions. Try again.\n");
      }
   }
   return;
}

int BracketSingleID(int income)
{
   if (income <= 10275) 
   {
      return 1;
   }
   else if (income >= 10276 && income <= 41775)
   {
      return 2;
   }
   else if (income >= 41776 && income <= 89075)
   {
      return 3;
   }
   else if (income <= 89076 && income <= 170050)
   {
      return 4;
   }
   else if (income >= 170051 && income <= 215950)
   {
      return 5;
   }
   else if (income >= 215951 && income <= 539900)
   {
      return 6;
   }
   else
   {
      return 7;
   }
}

int BracketJointID(int joint)
{
   if (joint <= 20550) 
   {
      return 1;
   }
   else if (joint >= 20551 && joint <= 83550)
   {
      return 2;
   }
   else if (joint >= 83551 && joint <= 178150)
   {
      return 3;
   }
   else if (joint >= 171151 && joint <= 340100)
   {
      return 4;
   }
   else if (joint >= 340151 && joint <= 431900)
   {
      return 5;
   }
   else if (joint >= 431901 && joint <= 647850)
   {
      return 6;
   }
   else
   {
      return 7;
   }
}

