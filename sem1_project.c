#include<stdio.h>
void syntax()
{ 
  int a;
  printf("Of what syntax in C you want to know?\n1) Function\n2) Switch\n3) While loop\n4) Do while loop\n5) For loop\nEnter number:");
  scanf("%d", &a);
  if ( a == 1)
  { printf("Function syntax:\n data_type (int,void,etc.) function_name(maths, prime, etc.)\n{\nbody\n} ");}
  else if ( a == 2)
  { printf("Switch syntax: switch()\n case 1:\n break;\n  case n:\n break;\n  default:\n break;");
  }
  else if (a == 3)
  { printf("While loop syntax:\n while(condition)\n{\nincrememt or decrement;\n printf;\n}");
  }
  else if ( a == 4)
  { printf("Do while syntax:\n Do\n{\nincrement or decrement;\n printf\n}while(condition)");
  }
  else if(a == 5)
  {printf("For syntax:\nfor(initialisation ; condition; increment or decrement)\n{\nprintf\n}");
  }
} 
void basic_calculation()
{
  int a, b, ans;
  char sign;
  printf("Enter the equation:");
  scanf("%d %c %d", &a, &sign, &b);
  if (sign=='+')
  { ans = a+b;
    printf("%d + %d = %d", a, b, ans);
  }
  else if ( sign=='-')
  { ans = a-b;
    printf("%d - %d = %d", a, b, ans);
  }
  else if (sign=='*')
  {
  ans = a*b;
  printf("%d * %d = %d", a, b, ans);
  }  
  else if (sign=='/')
  { ans = a/b;
  printf("%d / %d = %d", a, b, ans);
  }
}
  
void quiz(){
    int p;
    int game,quiz;
    int score=0;
    printf("*************************\n");
    printf("*   quize of the day  *\n");
    printf("*************************\n");
    for (int game=1;game<=5;game++)
    {
    printf("enter the numbers between 1-5 for questions in sequence one after other");
    scanf("%d",&quiz);
    switch (quiz){
        case 1:printf("what is the capital of india?\n");
               printf("1)gujarat\n");
               printf("2)new delhi\n");
               printf("enter 1 or 2 from your choice");
               scanf("%d",&p);
               if(p==2){
                printf("correct\n");
                score++;}
                else{printf("incorrect\n\a");
                }break;
        case 2:printf("what is the national bird of india?\n");
        printf("1)crow \n");
        printf("2)peacock\n");
        printf("enter 1or 2 according to your choice");
        scanf("%d",&p);
        if(p==2){
        printf("correct\n");
        score++;}
        else {
            printf("incorrect\n\a");
        }break;
               case 3:printf("what is the national sports 0f india?\n");
        printf("1)kabbadi \n");
        printf("2)hockey\n");
        printf("enter 1or 2 according to your choice");
        scanf("%d",&p);
        if(p==2){
        printf("correct\n");
        score++;}
        else {
            printf("incorrect\n\a");
        }break;
               case 4:printf("what is the national emblem of india?\n");
        printf("1)ashok stambh(pillar) \n");
        printf("2)peacock\n");
        printf("enter 1or 2 according to your choice");
        scanf("%d",&p);
        if(p==1){
        printf("correct\n");
        score++;}
        else {
            printf("incorrect\n\a");
        }break;
               case 5:printf("what is the name of your cp teacher?\n");
        printf("1)abdul kalam sir\n");
        printf("2)ankit singh\n");
        printf("3)akhil bhai\n");
        printf("enter 1or 2 according to your choice");
        scanf("%d",&p);
        if(p==1){
        printf("correct");
        score++;}
        else {
            printf("incorrect\a");
        }break;
               default :
                printf("not a valid choice");break;
               break;
    }}
    printf("your final score out of 5 is:%d",score);
    printf("thank you");
    
}


void main()
{ int a;
  printf("Which thing you want to do?\n1) Quiz\n2) basic calculation\n3) Syntax\nEnter number:");
  scanf("%d", &a);
  if ( a==1)
  { quiz();
  }
  else if( a==2)
  { basic_calculation();
  }
  else if (a==3)
  { syntax();
 }
}
