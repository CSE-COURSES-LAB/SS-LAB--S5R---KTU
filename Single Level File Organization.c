#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct{
char dname[10];
char fname[10][10];
int fcnt;
}dir;
void main()
{
int i,ch;
char f[30];
//clrscr();
dir.fcnt = 0;
printf("\nEnter name of directory -- ");
scanf("%s", dir.dname);
while(1)
{
printf("\n 0. Create File");
printf("\n 2. Delete File");
printf("\n 3. Search File");
printf("\n 4. Display Files");
printf("\n5. Exit");
printf("\n Enter your choice -- ");
scanf("%d",&ch);
switch(ch){
case 0: printf("\n Enter the name of the file -- ");
scanf("%s",dir.fname[dir.fcnt]);
dir.fcnt++;
break;
case 2: printf("\n Enter the name of the file -- ");
scanf("%s",f);
for(i=0;i<dir.fcnt;i++){
if(strcmp(f, dir.fname[i])==0){
printf("File %s is deleted ",f);
strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
break;
}
}
if(i==dir.fcnt)
printf("File %s not found",f);
else
dir.fcnt--;
break;
case 3: printf("\n Enter the name of the file -- ");
scanf("%s",f);
for(i=0;i<dir.fcnt;i++){
if(strcmp(f, dir.fname[i])==0){
printf("File %s is found ", f);
break;
}
}
if(i==dir.fcnt)
printf("File %s not found",f);
break;
case 4: if(dir.fcnt==0)
printf("\n Directory Empty");
else{
printf("\n The Files are -- ");
for(i=0;i<dir.fcnt;i++)
printf("\t%s",dir.fname[i]);
}
break;
default: exit(0);
}
}
getch();
}

