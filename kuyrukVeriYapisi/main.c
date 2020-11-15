#include <stdio.h>
#include <stdlib.h>
// İlk giren İlk çıkar (FİFO) mantıği ile çalışamn yapılardır
typedef struct n{
int data;
struct n * next;
}node;

node * push(node * liste,int data){
if(liste == NULL){
    liste = (node *)malloc(sizeof(node));
    liste->data = data;
    liste->next = NULL;
    return liste;
}
else{
    node * iter = liste;
    while(iter->next != NULL)
        iter = iter->next;
    node * temp = (node *)malloc(sizeof(node));
    temp->data = data;
    iter->next = temp;
    temp->next = NULL;
    return liste;
}
}
node * pop(node * liste){
printf(" %d ",liste->data);
node * temp = liste->next;
free(liste);
return temp;
}
int main()
{
    node * liste = NULL;
    liste = push(liste,10);
    liste = push(liste,20);
    liste = push(liste,30);
    liste = push(liste,40);
    liste = pop(liste);
    liste = pop(liste);
      liste = pop(liste);
    return 0;
}
