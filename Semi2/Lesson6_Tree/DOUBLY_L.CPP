#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//=========Circular Double Linked List==========

typedef struct student{
	int id;
	char name[20];
	char sex;
	int db,dc,ds,mp,cp;
	float avg;
	};

struct nodetype{
	student info;
	struct nodetype *left;
	struct nodetype *right;
	};

typedef nodetype *pointertype;
//==============================================
void initialize(pointertype *plist){
	*plist=NULL;
}
//----------------------------------------------
pointertype getnode(){
	pointertype p;
	p=(pointertype)malloc(sizeof(struct nodetype));
	return(p);
}
//----------------------------------------------
void freenode(pointertype p){
	free(p);
}
//----------------------------------------------
int listsize(pointertype *plist){
	pointertype p;
	int i;
	if(*plist==NULL) return(0);
	else
		if((*plist)->left==NULL)
			return(1);
		else{
			p=(*plist)->right;	i=1;
			while(p!=*plist){
				i++;
				p=p->right;}
	return(i);
	}
}

//----------------------------------------------
void clearlist(pointertype *plist){
	pointertype p,q;
	p=*plist;
	for(int i=0;i<listsize(plist);i++){
		q=p;
		p=p->right;
		freenode(q);
		}
	*plist=NULL;
	}
//----------------------------------------------
void insfirst(pointertype *plist,student item){
	pointertype p,f;	//f :final node
	p=getnode();
	p->info=item;
	if(*plist==NULL){
		p->left=NULL;
		p->right=NULL;
		*plist=p;}
	else
		if((*plist)->left==NULL){
			p->left=*plist;
			p->right=*plist;
			(*plist)->left=p;
			(*plist)->right=p;
			*plist=p;}
		else{
			f=(*plist)->left;
			p->left=f;
			p->right=*plist;
			(*plist)->left=p;
			f->right=p;
			*plist=p;}
}
//----------------------------------------------
void insend(pointertype *plist,student item){
	pointertype p,f;	//f :final node
	p=getnode();
	p->info=item;
	if(*plist==NULL){
		p->left=NULL;
		p->right=NULL;
		*plist=p;}
	else
		if((*plist)->left==NULL){
			p->left=*plist;
			p->right=*plist;
			(*plist)->left=p;
			(*plist)->right=p;
			}
		else{
			f=(*plist)->left;
			p->left=f;
			p->right=*plist;
			f->right=p;
			(*plist)->left=p;
			}
}
//----------------------------------------------
void delfirst(pointertype *plist){
	pointertype p,f;
	p=*plist;
	if(p->left==NULL){   //have one node
		*plist=NULL;
		freenode(p);}
	else
		if(listsize(plist)==2){
			f=p->left;
			f->left=NULL;
			f->right=NULL;
			*plist=f;
			freenode(p);
			}
		 else{
			f=p->left;
			*plist=p->right;
			(*plist)->left=f;
			f->right=*plist;
			freenode(p);
			}
}
//----------------------------------------------
void delend(pointertype *plist){
	pointertype p,r;
	if((*plist)->left==NULL){
		freenode(*plist);
		*plist=NULL;
		}
	else
		if(listsize(plist)==2){
			p=(*plist)->left;
			(*plist)->left=NULL;
			(*plist)->right=NULL;
			freenode(p);
			}
		else{
			p=(*plist)->left;
			r=p->left;
			r->right=*plist;
			(*plist)->left=r;
			freenode(p);
			}
}

//----------------------------------------------
void del(pointertype *plist,pointertype q){
	pointertype p,r;
	if(q==*plist)
		delfirst(plist);
	else if(q==(*plist)->left)
		delend(plist);
	else {
		p=q->left;
		r=q->right;
		p->right=r;
		r->left=p;
		freenode(q);
		}
}

//----------------------------------------------
void traverse(pointertype *plist){
	pointertype p;
	int i=1,x;
	_setcursortype(_NOCURSOR);
	if(*plist==NULL){gotoxy(33,12);textcolor(9); cprintf("List is empty.\n");}
	else{

			textcolor(7);
			printf("            ษออออัออออออัออออออออออออออออออออออออัอออออัอออออออออออป\n");
			printf("            บ    ณ      ณ		         ณ     ณ           บ\n");
			printf("            ฬออออุออออออุออออออออออออออออออออออออุอออออุอออออออออออน\n");
			gotoxy(15,2);textcolor(12);cprintf("Nง");
			gotoxy(21,2);textcolor(11);cprintf("ID");
			gotoxy(36,2);textcolor(10);cprintf("NAME");
			gotoxy(52,2);textcolor(9);cprintf("SEX");
			gotoxy(59,2);textcolor(14);cprintf("AVERAGE");
			gotoxy(1,3);
			p=*plist;
			for(int k=0;k<listsize(plist);k++){
				textcolor(7);
				printf("\n            บ    ณ      ณ                        ณ     ณ	   บ");
				textcolor(14);
				gotoxy(21,i+3);cprintf("%0.2d",p->info.id);
				textcolor(15);
				gotoxy(15,i+3);cprintf("%0.2d",i);
				gotoxy(27,i+3);cprintf("%s",p->info.name);
				gotoxy(53,i+3);cprintf("%c",p->info.sex);
				if(p->info.avg<10) x=61;
				else if(p->info.avg<100) x=60;
				else x=59;
				gotoxy(x,i+3);cprintf("%0.2f",p->info.avg);
				i++;
				p=p->right;
				}
			printf("\n            ศออออฯออออออฯออออออออออออออออออออออออฯอออออฯอออออออออออผ");

			}
		textcolor(7);
}


//----------------------------------------------
pointertype nodepointer(pointertype *plist,int id){
	pointertype p;

	p=*plist;
	if(p->left==NULL){
		if(p->info.id==id) return(p);
		}
	else{
		do{
			if(p->info.id==id){

				return(p);
				}
			p=p->right;
		}while(p!=*plist);
	    }
	return(NULL);

}

//----------------------------------------------
void search(pointertype *plist,int id){
	int b=0,i,x;
	pointertype p;
	p=*plist;
	for(i=0;i<listsize(plist);i++){
		if(p->info.id==id){ b=1;
			textcolor(7);
			printf("\n");
			printf("            ษออออัออออออัออออออออออออออออออออออออัอออออัอออออออออออป\n");
			printf("            บ    ณ      ณ		         ณ     ณ           บ\n");
			printf("            ฬออออุออออออุออออออออออออออออออออออออุอออออุอออออออออออน\n");
			gotoxy(15,5);textcolor(12);cprintf("Nง");
			gotoxy(21,5);textcolor(11);cprintf("ID");
			gotoxy(36,5);textcolor(10);cprintf("NAME");
			gotoxy(52,5);textcolor(9);cprintf("SEX");
			gotoxy(59,5);textcolor(14);cprintf("AVERAGE");
			gotoxy(1,6);
			textcolor(7);
			printf("\n            บ    ณ      ณ                        ณ     ณ	   บ");
			textcolor(14);
			gotoxy(21,7);cprintf("%0.2d",p->info.id);
			textcolor(15);
			gotoxy(15,7);cprintf("01");
			gotoxy(27,7);cprintf("%s",p->info.name);
			gotoxy(53,7);cprintf("%c",p->info.sex);
			if(p->info.avg<10) x=61;
			else if(p->info.avg<100) x=60;
			else x=59;
			gotoxy(x,7);cprintf("%0.2f",p->info.avg);
			printf("\n            ศออออฯออออออฯออออออออออออออออออออออออฯอออออฯอออออออออออผ");
			break;
			}
		p=p->right;
		}
	if(b==0){
		 textcolor(9);
		 cprintf("       Not Found");
		 }
	getch();
}
//----------------------------------------------
void bubble_sort(pointertype *plist){
	pointertype p,q;
	student temp;
	int i,j,n;
	n=listsize(plist);
	for(j=1;j<n;j++){
		p=*plist;
		q=(*plist)->right;
		for(i=0;i<n-j;i++){
			if(p->info.avg<q->info.avg){
				temp=p->info;
				p->info=q->info;
				q->info=temp;
				}
			p=p->right;
			q=q->right;
		}
	}
}
//----------------------------------------------
/*void selection_sort(pointertype *plist){
	pointertype p,q;
	student temp;
	int i,j,n;
	n=listsize(plist);
	for(i=0;i<n-1;i++){
		p=*plist;
		q=(*plist)->right;
		for(j=i+1;j<n;j++){
			if(p->info.avg<q->info.avg){
				temp=p->info;
				p->info=q->info;
				q->info=temp;
				}
			p=p->right;
			q=q->right;
		}
       }
} */
//==============================================


void update(pointertype p){
	student item;
	char ch;

	gotoxy(20,3);printf("1. Update field NAME");
	gotoxy(20,4);printf("2. Update field SEX");
	gotoxy(20,5);printf("3. Update fields SCORE(DB,DC,DS,MP,CP)");
	gotoxy(20,6);printf("4. Update all fields");
	gotoxy(20,8);printf("Please chose :");
	while(ch=toupper(getch()),!strchr("1234",ch));
	printf("%c\n\n",ch);
	item=p->info;
	if(ch=='1'){
		printf("Entre Name:");fflush(stdin);gets(item.name);
		}
	if(ch=='2'){
		printf("Enter Sex(M,F):");fflush(stdin);
		while(item.sex=toupper(getch()),!strchr("MF",item.sex));
		printf("%c\n",item.sex);
		}
	if(ch=='3'){
		printf("Enter Score of DataBase:");fflush(stdin);scanf("%d",&item.db);
		printf("Enter Score of DataCommunication:");fflush(stdin);scanf("%d",&item.dc);
		printf("Enter Score of DataStructure:");fflush(stdin);scanf("%d",&item.ds);
		printf("Enter Score of Microproccessor:");fflush(stdin);scanf("%d",&item.mp);
		printf("Enter Score of C++:");fflush(stdin);scanf("%d",&item.cp);
		item.avg=(item.db+item.dc+item.ds+item.mp+item.cp)/5.0;
		}
	if(ch=='4'){
		printf("Entre Name:");fflush(stdin);gets(item.name);
		printf("Enter Sex(M,F):");fflush(stdin);
		while(item.sex=toupper(getch()),!strchr("MF",item.sex));
		printf("%c\n",item.sex);

		printf("Enter Score of DataBase:");fflush(stdin);scanf("%d",&item.db);
		printf("Enter Score of DataCommunication:");fflush(stdin);scanf("%d",&item.dc);
		printf("Enter Score of DataStructure:");fflush(stdin);scanf("%d",&item.ds);
		printf("Enter Score of Microproccessor:");fflush(stdin);scanf("%d",&item.mp);
		printf("Enter Score of C++:");fflush(stdin);scanf("%d",&item.cp);
		item.avg=(item.db+item.dc+item.ds+item.mp+item.cp)/5.0;
		}
	p->info=item;
	}





char *s[]={" 1. OUTPUT "," 2. ADD    "," 3. INSERT ", " 4. DELETE ",
	   " 5. UPDATE "," 6. SORT   "," 7. SEARCH "," 8. PRINT  "," 9. EXIT   "};
//----------------------------------------------
void outxy(int x,int y,int colorf,int colorb,char *st){
	gotoxy(x,y);
	textcolor(colorf);
	textbackground(colorb);
	cprintf("%s",st);
}
//----------------------------------------------
int menu(char *str[],int n){
	clrscr();
	_setcursortype(_NOCURSOR);
	int i,c=0,j;
	char ch;
	textcolor(12);
	gotoxy(26,3);cprintf("Royal University of Phnom Penh");
	textcolor(11);
	gotoxy(31,5);cprintf("STUDENTS MANAGEMENT");
	textcolor(14);
	gotoxy(30,6);  cprintf("ษอออออออออออออออออออป");
	for(j=0;j<n+2;j++){
	gotoxy(30,j+7);cprintf("บ                   บ");
	}
	gotoxy(30,j+7);cprintf("ศอออออออออออออออออออผ");

	do{
		for(i=0;i<n;i++)
			if(c==i) outxy(35,8+i,1,7,str[i]);
			else outxy(35,8+i,7,0,str[i]);
			ch=getch();
			if(ch==49){ c=0;break;}
			if(ch==50){ c=1;break;}
			if(ch==51){ c=2;break;}
			if(ch==52){ c=3;break;}
			if(ch==53){ c=4;break;}
			if(ch==54){ c=5;break;}
			if(ch==55){ c=6;break;}
			if(ch==56){ c=7;break;}
			if(ch==57){ c=8;break;}
			if(ch==0){
				ch=getch();

				if(ch==72)
					if(c==0) c=n-1;
					else c--;
				if(ch==80)
					if(c==n-1) c=0;
					else c++;

					}
	}while(ch!=13);
	_setcursortype(_NORMALCURSOR);
	textcolor(7);
	textbackground(0);
	return(c+1);
}


//----------------------------------------------
int readfile(pointertype *plist)
{
	pointertype p,q;
	int current_id,size,i;
	FILE *fp1,*fp2;
	fp1=fopen("list.dat","rb");
	if(fp1==NULL){
		initialize(plist);
		fclose(fp1);
		return(0);
		     }
	else{
		fseek(fp1,0,2);
		size=ftell(fp1)/sizeof(struct nodetype);
		rewind(fp1);
		if(size==0){
			initialize(plist);
			   }
		else if(size==1){
			p=getnode();
			*plist=p;
			fread(p,sizeof(nodetype),1,fp1);
			p->left=NULL;
			p->right=NULL;
				}
		else{
			p=getnode();
			*plist=p;
			fread(p,sizeof(nodetype),1,fp1);
			for(i=1;i<size;i++){
				q=getnode();
				fread(q,sizeof(nodetype),1,fp1);
				p->right=q;
				q->left=p;
				p=q;
					   }
			p->right=*plist;
			(*plist)->left=p;
		    }
		fp2=fopen("id.dat","rb");
		fread(&current_id,sizeof(int),1,fp2);
	    }
	fcloseall();
	return(current_id);
}




//----------------------------------------------
void writefile(pointertype *plist,int current_id){
	pointertype p;
	int i;
	FILE *fp1;
	FILE *t;
	t=fopen("tmp.dat","wb");
	if(*plist!=NULL){
		p=*plist;
		for(i=0;i<listsize(plist);i++){
			fwrite(p,sizeof(struct nodetype),1,t);
			p=p->right;
			}
	}
	fclose(t);
	remove("list.dat");
	rename("tmp.dat","list.dat");
	fp1=fopen("id.dat","wb");
	fwrite(&current_id,sizeof(int),1,fp1);
	fclose(fp1);
}


//----------------------------------------------
void print(pointertype *plist)
{
	pointertype p;
	int i,j,l;
	#define MAX 50
	char buffer[MAX];
	char printer[]="LPT1";
	FILE *fp,*fp1;
	fp=fopen("table.txt","w");

	char time[9],date[9];
	_strtime(time);
	_strdate(date);
	fprintf(fp,"%57c%s  %s\n",' ',time,date);
	fprintf(fp,"%5c",' ');
	for(j=0;j<70;j++)
		fprintf(fp,"%c",196);
	fprintf(fp,"\n\n\n%25cRoyal University of Phnom Penh\n\n",' ');
	fprintf(fp,"%12c%c",' ',201);
	for(j=0;j<4;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",209);
	for(j=0;j<6;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",209);
	for(j=0;j<24;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",209);
	for(j=0;j<5;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",209);
	for(j=0;j<11;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c\n",187);


	fprintf(fp,"%12c%c Nง ",' ',186);
	fprintf(fp,"%c  ID  ",179);
	fprintf(fp,"%c%10cNAME%10c",179,' ',' ');
	fprintf(fp,"%c SEX ",179);
	fprintf(fp,"%c  AVERAGE  ",179);
	fprintf(fp,"%c\n",186);



	fprintf(fp,"%12c%c",' ',204);
	for(j=0;j<4;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",216);
	for(j=0;j<6;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",216);
	for(j=0;j<24;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",216);
	for(j=0;j<5;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",216);
	for(j=0;j<11;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c\n",185);


	p=*plist;
	for(i=0;i<listsize(plist);i++){
		fprintf(fp,"%12c%c",' ',186);
		fprintf(fp," %0.2d ",i+1);
		fprintf(fp,"%c",179);
		fprintf(fp,"  %0.2d  ",p->info.id);
		fprintf(fp,"%c %s",179,p->info.name);
		l=23-strlen(p->info.name);
		for(j=0;j<l;j++)
			fprintf(fp," ");
		fprintf(fp,"%c  %c  ",179,p->info.sex);
		fprintf(fp,"%c",179);
		if(p->info.avg<10) fprintf(fp,"%4c",' ');
		else if(p->info.avg<100) fprintf(fp,"%3c",' ');
		else fprintf(fp,"%2c",' ');
		fprintf(fp,"%0.2f%3c%c\n",p->info.avg,' ',186);
		p=p->right;
		}



	fprintf(fp,"%12c%c",' ',200);
	for(j=0;j<4;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",207);
	for(j=0;j<6;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",207);
	for(j=0;j<24;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",207);
	for(j=0;j<5;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c",207);
	for(j=0;j<11;j++)
		fprintf(fp,"%c",205);
	fprintf(fp,"%c\n",188);


	fclose(fp);
	fp=fopen("table.txt","r");
	fp1=fopen(printer,"w");
	while(fgets(buffer,MAX,fp)!=NULL)
		fputs(buffer,fp1);
	fcloseall();
	remove("table.txt");
}






void main(){
clrscr();
textcolor(7);
pointertype plist,p;
student data;
int n,i,id,current_id;
char ch;
current_id=readfile(&plist);
while(1){
	switch(menu(s,9)){
		case 1:
			clrscr();
			traverse(&plist);
			getch();
			break;
		case 2:
			clrscr();
			data.id=++current_id;
			printf("\n\nID:%d\n",current_id);
			printf("Entre Name:");fflush(stdin);gets(data.name);
			printf("Enter Sex(M,F):");fflush(stdin);while(data.sex=toupper(getch()),!strchr("MF",data.sex)); printf("%c\n",data.sex);
			printf("Enter Score of DataBase:");fflush(stdin);scanf("%d",&data.db);
			printf("Enter Score of DataCommunication:");fflush(stdin);scanf("%d",&data.dc);
			printf("Enter Score of DataStructure:");fflush(stdin);scanf("%d",&data.ds);
			printf("Enter Score of Microproccessor:");fflush(stdin);scanf("%d",&data.mp);
			printf("Enter Score of C++:");fflush(stdin);scanf("%d",&data.cp);
			data.avg=(data.db+data.dc+data.ds+data.mp+data.cp)/5.0;
			insend(&plist,data);
			writefile(&plist,current_id);
			break;
		case 3:
			clrscr();
			data.id=++current_id;
			printf("\n\nID:%d\n",current_id);
			printf("Entre Name:");fflush(stdin);gets(data.name);
			printf("Enter Sex(M,F):");fflush(stdin);while(data.sex=toupper(getch()),!strchr("MF",data.sex)); printf("%c\n",data.sex);
			printf("Enter Score of DataBase:");fflush(stdin);scanf("%d",&data.db);
			printf("Enter Score of DataCommunication:");fflush(stdin);scanf("%d",&data.dc);
			printf("Enter Score of DataStructure:");fflush(stdin);scanf("%d",&data.ds);
			printf("Enter Score of Microproccessor:");fflush(stdin);scanf("%d",&data.mp);
			printf("Enter Score of C++:");fflush(stdin);scanf("%d",&data.cp);
			data.avg=(data.db+data.dc+data.ds+data.mp+data.cp)/5.0;
			insfirst(&plist,data);
			writefile(&plist,current_id);
			break;
		case 4: clrscr();
			if(plist!=NULL){
			printf("\n\nPlease Enter ID(for delete):");
			scanf("%d",&id);
			p=nodepointer(&plist,id);
				if(p!=NULL){
					printf("Are you sure you want to delete node (Y/N)?");
					while(ch=toupper(getch()),!strchr("YN",ch));
						if(ch=='Y'){
							del(&plist,p);
							writefile(&plist,current_id);
							}
				}
				else{printf("No Student ID=%d",id);getch();}
			}
			else{ printf("\n\n\nList is empty."); getch();}
			break;
		case 5:
			clrscr();
			if(plist!=NULL){
				printf("Please Enter ID(for delete):");
				scanf("%d",&id);
				p=nodepointer(&plist,id);
				if(p!=NULL)
					update(p);
				else {printf("No Student ID=%d",id);getch();}
			}
			else {printf("\n\n\nList is empty."); getch();}
			break;

		case 6: clrscr();
			if(plist!=NULL){
				bubble_sort(&plist);
				//selection_sort(&plist);
				writefile(&plist,current_id);
				gotoxy(25,10);
				printf("Sort list by average from z->a.");
				gotoxy(35,12);
				printf("Completed.");
				}
			else
				printf("\n\n\nList is empty.");
				getch();break;
		case 7:
			clrscr();
			if(plist!=NULL){
				cprintf("\nPlease Enter ID for search:");
				scanf("%d",&id);
				search(&plist,id);
				}
			else{ printf("\n\n\nList is empty."); getch();}
			break;
		case 8:
			clrscr();
			traverse(&plist);
			if(plist!=NULL)
				print(&plist);
			getch();break;
		case 9:
			clearlist(&plist);
			exit(0);
		}
		}

}
