//How do you find the middle element of a singly linked list in one pass?
#include<stdio.h>
#include<stdlib.h>

struct Node	
{
  int data;
  struct Node *next;
};

void display (struct Node *node)
{
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}

void print_Middle (struct Node *head)
{
  struct Node *first_ptr = head;
  struct Node *second_ptr = head;

  if (head != NULL)
    {
      while (second_ptr != NULL && second_ptr->next != NULL)
	{
	  second_ptr = second_ptr->next->next;
	  first_ptr = first_ptr->next;
	}
      printf ("The middle element in the linked list is : %d",
	      first_ptr->data);
    }
}

int main ()
{
  struct Node *head = NULL;
  struct Node *node2 = NULL;
  struct Node *node3 = NULL;
  struct Node *node4 = NULL;
  struct Node *node5 = NULL;

  head = (struct Node *) malloc (sizeof (struct Node));
  node2 = (struct Node *) malloc (sizeof (struct Node));
  node3 = (struct Node *) malloc (sizeof (struct Node));
  node4 = (struct Node *) malloc (sizeof (struct Node));
  node5 = (struct Node *) malloc (sizeof (struct Node));


  head->data = 80;	
  head->next = node2;	

  node2->data = 15;
  node2->next = node3;

  node3->data = 31;
  node3->next = node4;

  node4->data = 44;
  node4->next = node5;

  node5->data = 92;
  node5->next = NULL;

  printf ("Linked List: ");
  display (head);

  print_Middle (head);

  return 0;
}