#include<stdio.h>
#include<stdlib.h>

struct student {
  int roll;
  struct student *prev;
  struct student *next;
};

struct student *create_node(int data) {
  struct student *newNode;
  newNode = (struct student *)malloc(sizeof(struct student));
  newNode->roll = data;
  newNode->prev = NULL;
  newNode->next = NULL;

  return newNode;
}


struct student *append_node_at_beginning(struct student **head_addr) {
  int roll;
  struct student *newNode, *temp;
  printf("Enter roll no: ");
  scanf("%d", &roll);
  newNode = create_node(roll);
  
  if(*head_addr == NULL)
    *head_addr = newNode;
  else {
    new_node->next = headref;
  }
}

struct student *append_node_at_end(struct student **head_addr) {
  int roll;
  struct student *newNode, *temp;
  printf("Enter roll no: ");
  scanf("%d", &roll);
  newNode = create_node(roll);
  
  if(*head_addr == NULL)
    *head_addr = newNode;
  else {
    temp = *head_addr;
    while(temp->next != NULL) {
      temp = temp->next;
      newNode->prev = temp;
    }

    temp->next = newNode;
  }
}

void display_list(struct student *temp) {
  while(temp!=NULL) {
    printf("%d ",(*temp).roll);
    temp=temp->next;
  }
  printf("\n");
}

int main(){
  struct student *head;
  head = NULL;

  int choice;
  printf("1. Insert Node at Beginning\n");
  printf("2. Insert Node at End\n");
  printf("3. Display\n");
  printf("4. Exit\n");
  
  while(1) {
    printf("Enter your choice: ");
    
    scanf("%d",&choice);
    
    switch(choice) {
      case 1: append_node_at_beginning(&head);
              break;
      case 2: append_node_at_end(&head);
              break;
      case 3: display_list(head);
              break;
      case 4: exit(0);
      default: continue;
    }
  }

  return 0;
}
