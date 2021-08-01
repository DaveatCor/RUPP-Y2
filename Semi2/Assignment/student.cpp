#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
    int id;
    char name[100];
    float score;
    struct Student *next;
    
}* head;

void insert(struct Student *std)
{
    
//    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    
    if(head==NULL){
        // if head is NULL
        // set student as the new head
        head = std;
    }
    else{
        // if list is not empty
        // insert student in beginning of head
        std->next = head;
        head = std;
    }
    
}

void search(int id)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->id==id){
            printf("Id: %d\n", temp->id);
            printf("Name: %s\n", temp->name);
            printf("Score: %0.4f\n", temp->score);
            return;
        }
        temp = temp->next;
    }
    printf("Student with id %d is not found !!!\n", id);
}

void update(int id)
{
    
    struct Student * temp = head;
    while(temp!=NULL){
        
        if(temp->id==id){
            printf("Record with id %d Found !!!\n", id);
            fflush(stdin);
            printf("Enter new name: ");
            gets(temp->name);
            printf("Enter new score: ");
            scanf("%f", &temp->score);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;
        
    }
    printf("Student with id %d is not found !!!\n", id);
    
}

void sort() {
  int tempvar = 0;
    struct Student *node, *temp = head;
    temp = node;
    while(node != NULL){
        temp=node; 
        while (temp->next !=NULL) {
             if(temp->id > temp->next->id) {
              tempvar = temp->id;
              temp->id = temp->next->id;
              temp->next->id = tempvar;
            }
           temp = temp->next;
        }
        node = node->next;
    }
}

void Delete(int id){
	
    struct Student * temp1 = head;
    struct Student * temp2 = head; 
    while(temp1!=NULL){
        if(temp1->id==id){
            printf("Record with id %d Found !!!\n", id);
            if(temp1==temp2){
                head = head->next;
                free(temp1);
            }
            else{
                temp2->next = temp1->next;
                free(temp1); 
            }
            printf("Record Successfully Deleted !!!\n");
            return;
            
        }
        temp2 = temp1;
        temp1 = temp1->next;
        
    }
    printf("Student with id %d is found !!!\n", id);
    
}

void write(struct Student st){
	
	FILE *fptr = fopen("myfile", "w");

	if (fptr == NULL){
		printf("File cannot open");
		exit(0);
	}
	
	fwrite(&st, sizeof(st), 1, fptr);
	
	fclose(fptr);	
}

struct Student read(){

	FILE *fptr = fopen("myfile", "a");

	struct Student st;

	if (fptr == NULL){
		printf("File cannot open");
		exit(0);
	}
	
	fread(&st, sizeof(st), 1, fptr);

	return st;	
}

void count(){
    struct Student * temp = head;
    int count=0;
    /* Traverse the linked list and maintain the count. */
        while(temp != NULL){
            temp = temp->next;
            count++;
    }
    printf("\n Total no. of student is %d",count);
}

void display(struct Student *st)
{
//    if (st == NULL){
//	}
//	else {
//		struct Student * temp = head;
//	}

    struct Student * temp = head;
    while(temp!=NULL){
    
        printf("id: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("score: %0.4f\n\n", temp->score);
        temp = temp->next;
        
    }
}


int main() {
    head = NULL;
    
    int choice;
    
    struct Student std;
    
    // Label
    timeTravel:
    
	printf(
		"1 Insert student details\n"
		"2 Search for student details\n"
		"3 Delete student details\n"
		"4 Update student details\n"
		"5 Display all student details\n"
		"6 Count number of students\n"
		"7 Save file\n"
		"0 Exit program"
	);
	
    printf("\n\nEnter Choice: ");
    
    // Clear buffer
    fflush(stdin);
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
            printf("Enter id: ");
            scanf("%d", &std.id);
            fflush(stdin);
            printf("Enter name: ");
            gets(std.name);
            printf("Enter score: ");
            scanf("%f", &std.score);
            insert(&std);
            break;
             
        case 2:
            printf("Enter id to search: ");
            scanf("%d", &std.id);
            search(std.id);
            break;
            
        case 3:
            printf("Enter id to delete: ");
            scanf("%d", &std.id);
            Delete(std.id);
            break;
            
        case 4:
            printf("Enter id to update: ");
            scanf("%d", &std.id);
            update(std.id);
            break;
            
        case 5:
        	std = read();
            display(&std);
            break;
            
        case 6:
        	count();
            break;
            
        case 7:
        	write(std);
        	printf("Successfully save file\n");
        	break;
        	
        case 0:
        	printf("Thank you for using our program");
        	break;
        	
        default:
        	printf("Wrong input\nPlease input correct option!");
    }
    
    if (choice != 0) goto timeTravel;
    
    getch();
}


