//AUDIO PLAYLIST
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 struct Node{
     char song[100];
     struct Node*next;
 };
 //head pointer null
 struct Node*head=NULL;
 struct Node* createNode(char song[]){
     struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->song,song);
    newNode->next=NULL;
    return newNode;
 }
 //insertatbeg
 void addsong(char song[]){
     struct Node*newNode=createNode(song);
     newNode->next=head;
     head=newNode;
     printf("%s added to tha playlist",song);
 }
 
 //display
 void display(){
     struct Node*temp=head;
     while(temp!=NULL){
         printf("%s->",temp->song);
         temp=temp->next;
     }
     printf("NULL");
}

int main(){
    int choice;char songName[100];
    while(1)
    {
    printf("choice 1: Add a song\n choice2: Display songs\n choice 3:Exit\n Enter yournchoice");
    scanf("%d",&choice);
    getchar();
    switch (choice){
        case 1:
        printf("Enter song Name\n");
        fgets(songName,sizeof(songName),stdin);
        songName[strcspn(songName,"\n")]=0;
        addsong(songName);
        break;
        case 2:
        display();
        break;
        case 3:
        printf("Existing playlist");
        exit(0);
        default:
        printf("Enter valid choice");
    }}
    return 0;
        
    }
