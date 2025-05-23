#include<stdio.h>
int main(){
    struct book
    {
        char name[30];
        int pages;
        float price;
    };
    struct book b1,b2,b3;
    printf("Enter name, no, of pages and price of 3 books: \n");
    scanf("%s %d %f",&b1.name , &b1.pages , &b1.price);
    scanf("%s %d %f",&b2.name , &b2.pages , &b2.price);
    scanf("%s %d %f",&b3.name , &b3.pages , &b3.price);

printf("Data of 3 Books:\n");
printf("%s %d %f \n", b1.name , b1.pages , b1.price);
printf("%s %d %f \n", b2.name , b2.pages , b2.price);
printf("%s %d %f \n", b3.name , b3.pages , b3.price);
return 0;
}
