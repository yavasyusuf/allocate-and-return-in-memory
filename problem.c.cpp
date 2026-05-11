#include <stdio.h>
#include <stdlib.h>
 struct Book{
 	 int id;
 	 int pages;
 	 float price;
 };
 int main(){
 	int nr;
 	struct Book *books;
 	printf("Enter book of number: ");
 	scanf("%d", &nr);
 	books = (struct Book*) malloc(nr * sizeof(struct Book));
 	
 	for(int i = 0;i<nr;i++){
 		printf("\nBook %d\n", i + 1);
 		
 		printf("Enter ID: ");
 		scanf("%d", &books[i].id);
 		
 		printf("Enter pages of book: ");
 		scanf("%d", &books[i].pages);
 		
 		printf("Enter the price of book: ");
 		scanf("%f", &books[i].price);
 	}
 	
 	printf("\nBook List\n");
 	
 	for(int i = 0;i<nr;i++){
 		printf("ID: %d\n", books[i].id);
 		printf("Pages: %d\n", books[i].id);
 		printf("Price: %.2f\n", books[i].price);
 		
 		
	 }
	 
	 free(books);
	 
	 return 0;
 	 
 }