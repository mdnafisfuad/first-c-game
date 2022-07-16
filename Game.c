#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
int total_questions, i, correct_ans, user_ans, real_ans, c, d;
correct_ans = 0;
printf("How many questions do you want to solve?\n");
scanf("%d", &total_questions);
for(i=1;i<=total_questions;i++)
{
srand(time(0));
int t = rand() % 3;
int a = rand() % 51;
int b = rand() % 51;
int e = rand() % 16;
int f = rand() % 16;
int g = rand() % 11;
int h = f * g;
switch (t)
{
  case 0:
  printf("\nWhat is %d + %d?\n", a, b);
  real_ans = a + b;
  printf("\nAnswer:-  ");
  scanf("%d", &user_ans);
  if(real_ans == user_ans)
  {
    printf("\nCORRECT!\n");
    correct_ans++;
  }
  else
  {
    printf("\nWRONG! Correct answer is %d\n", real_ans);
  }
    printf("______________________________________________\n");
  break;

  case 1:
  if (a <= b) {
    c = b;
    d = a;
  }
  else{
    c = a;
    d = b;
  }
  printf("\nWhat is %d - %d?\n", c, d);
  real_ans = c - d;
  printf("\nAnswer:-  ");
  scanf("%d", &user_ans);
  if(real_ans == user_ans)
  {
    printf("\nCORRECT!\n");
    correct_ans++;
  }
  else
  {
    printf("\nWRONG! Correct answer is %d\n", real_ans);
  }
    printf("______________________________________________\n");
  break;

  case 2:
  printf("\nWhat is %d x %d?\n", e, f);
  real_ans = e * f;
  printf("\nAnswer:-  ");
  scanf("%d", &user_ans);
  if(real_ans == user_ans)
  {
    printf("\nCORRECT!\n");
    correct_ans++;
  }
  else
  {
    printf("\nWRONG! Correct answer is %d\n", real_ans);
  }
    printf("______________________________________________\n");
  break;

  case 3:
  printf("\nWhat is %d / %d?\n", h, g);
  real_ans = f;
  printf("\nAnswer:-  ");
  scanf("%d", &user_ans);
  if(real_ans == user_ans)
  {
    printf("\nCORRECT!\n");
    correct_ans++;
  }
  else
  {
    printf("\nWRONG! Correct answer is %d\n", real_ans);
  }
    printf("______________________________________________\n");
  break;
default:
printf("Something went wrong :(");
}
}
printf("\nYou have corrected %d out of %d questions.\n", correct_ans, total_questions);
printf("\n\n Press any key to continue...");
int exit;
scanf("%d", &exit);
printf("%d", exit);
}
