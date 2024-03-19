#include <stdio.h>

int main() {
    int bday,bmonth,byear;
    int day,month,year;
    int age;
    int maxhr;
    float targethr1,targethr2;

    printf("Enter your birthday: ");
    scanf("%d/%d/%d",&bday,&bmonth,&byear);

    printf("Enter current date: ");
    scanf("%d/%d/%d",&day,&month,&year);

    age= (year-byear);
    maxhr = (220 - age);
    targethr1 = (maxhr * 0.50);
    targethr2 = (maxhr * 0.85);

    printf("You are %d years old \n",age);
    printf("Your maximum heart rate in beats per minute is %d\n",maxhr);
    printf("Your target heart rate is between %.1f and %.1f",targethr1,targethr2);


    return 0;
}
