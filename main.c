#include <stdio.h>
#include "nodo.h"


int main()
{
    Nodo *head = NULL;
    stampaNodo(head);
    
    /*Creazione e collegamento primo nodo*/
    
    Nodo n1;
    n1.val = 10;
    n1.next = NULL;
    
    head = &n1;
    stampaNodo(head);
    
    /*Creazione e collegamento in coda secondo nodo*/
    
    Nodo n2;
    n2.val = 4;
    n2.next = NULL;
    
    n1.next = &n2;
    stampaNodo(head);
    
    /*Creazione e collegamento in testa terzo nodo*/
    
    Nodo n3;
    n3.val = 65;
    n3.next = NULL;
    
    n3.next = head;
    head = &n3;
    stampaNodo(head);
    
    /*Creazione e collegamento tra n1 e n2 quarto nodo*/
    
    Nodo n4;
    n4.val = 8;
    n4.next = NULL;
    
    n4.next = n1.next;
    n1.next = &n4;
    stampaNodo(head);
    
    
    return 0;
}
