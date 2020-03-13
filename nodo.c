#include <stdio.h>
#include "nodo.h"

void stampaNodo(Nodo *head);

void stampaNodo(Nodo *head)
{
    Nodo *temp;
    
    temp = head;
    while(temp != NULL){
        printf("%d ", temp -> val);
        temp = temp->next;
    }
    printf("\n");
}