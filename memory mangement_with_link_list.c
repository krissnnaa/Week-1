#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
int info;
struct node *next;
};
struct node *start=NULL;
void insert();
void insert_at_beg();
void insert_at_mid();
void insert_at_end();
void del();
void del_at_beg();
void del_at_mid();
void del_at_end();
void show();
int count();
void main()
{
int ch=0,i=0,cnt;
while(1)
{
printf("=================menu====================");
printf("\n1.insert");
printf("\n2.delete");
printf("\n3.show");
printf("\n4.count");
printf("\n5.exit");
printf ("\nenter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:del();
break;
case 3:show();
break;
case 4:cnt=count();
printf("\n the no of nodes : %d\n",cnt);
break;
case 5:exit(1);
}
}
}
void insert()
{
int j=0,ch1=0;
printf("\nenter your choice");
printf("\n1.insert at the beginning");
printf("\n2.insert at the middle");
printf("\n3.insert at the end\n");
scanf ("%d",&ch1);
switch(ch1)
{
case 1:insert_at_beg();
break;
case 2:insert_at_mid();
break;
case 3:insert_at_end();
}
}
void insert_at_beg()
{
int info;
struct node *t=(struct node *)malloc(sizeof(struct node));
printf("\nenter information to be inserted in the beginning= ");
scanf("%d",&info);
t->info=info;
t->next=start;
start=t;
}
void insert_at_mid()
{
int inform,x,i;
struct node *t=(struct node *)malloc(sizeof(struct node));
struct node *p=start;
printf("\nenter the location after which new node to be added= ");
scanf("%d",&x);
for(i=1;i<x;i++)
p=p->next;
printf("\nenter information of the new node= ");
scanf("%d",&inform);
t->info=inform;
t->next=p->next;
p->next=t;
}
void insert_at_end()
{
int inform1;
struct node *t=(struct node *)malloc(sizeof(struct node));
struct node *p=start;
printf("\nenter information to be added= ");
scanf("%d",&inform1);
t->info=inform1;
while(p->next!=NULL)
p=p->next;
p->next=t;
t->next=NULL;
}
void del()
{
int k=0,ch2=0;
printf("\nenter your choice");
printf("\n1.delete at the beggning");
printf("\n2.delete at the middle");
printf("\n3.delete at the end\n");
scanf ("%d",&ch2);
switch(ch2)
{
case 1:del_at_beg();
break;
case 2:del_at_mid();
break;
case 3:del_at_end();
break;
}
}
void del_at_beg()
{
struct node *t=start;
start=start->next;
free(t);
}
void del_at_mid()
{
int n;
struct node *cur=start;
struct node *pre=start;
printf("\nenter information to be deleted= ");
scanf("%d",&n);
while(cur->info!=n)
{
pre=cur;
cur=cur->next;
}
pre->next=cur->next;
free(cur);
}
void del_at_end()
{
struct node *cur=start;
struct node *pre=start;
while(cur->next!=NULL)
{
pre=cur;
cur=cur->next;
}
pre->next=NULL;
free(cur);
}
void show()
{
struct node *p=start;
printf("\n\n================LINK LIST======================\n\n");
while(p!=NULL)
{
printf("%d\n",p->info);
p=p->next;
}
}
int count()
{
 int c=0;
 struct node *q=start;
 while(q!=NULL)
{
q=q->next;
c=c+1;
}
   return c;
 }
