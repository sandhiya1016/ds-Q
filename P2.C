
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 struct Node{
     char treasure[100];
     struct Node*next;
 };
 //head pointer null
 struct Node*head=NULL;
 struct Node* createNode(char treasure[]){//believer
     struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->treasure,treasure);
    newNode->next=NULL;
    return newNode;
 }
 //insertatbeg
 void addhint(char treasure[]){
     struct Node*newNode=createNode(treasure);
     newNode->next=head;
     head=newNode;
     printf("%s added to tha hint",treasure);
 }
 
 //display
 void display(){
     struct Node*temp=head;
     while(temp!=NULL){
         printf("%s->",temp->treasure);
         temp=temp->next;
     }
     printf("NULL");
}

int main(){
    int hint;char hintName[100];
    while(1)
    {
    printf("hint 1: Add a hint\n hint2: Display hint\n hint3:Exit\n Enter your hint");
    scanf("%d",&hint);
    getchar();
    switch (hint){
        case 1:
        printf("Enter hint Name\n");
        fgets(hintName,sizeof(hintName),stdin);
        hintName[strcspn(hintName,"\n")]=0;
        addhint(hintName);
        break;
        case 2:
        display();
        break;
        case 3:
        printf("Existing hint");
        exit(0);
        default:
        printf("Enter valid hint");
    }}
    return 0;
        
    }
