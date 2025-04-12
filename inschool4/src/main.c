#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int value;
	struct Node* next;
}spisok;

spisok* create(int data)
{
	// Выделение памяти под корень списка
	spisok *tmp = (spisok*)malloc(sizeof(spisok));
	// Присваивание значения узлу
	tmp -> value = data;
	// Присваивание указателю на следующий
	//элемент значения NULL
	tmp -> next = NULL;
	return(tmp);
}
void add_element_end(int data, spisok *head)
{
	// Выделение памяти под новый элемент списка
	spisok *tmp_last = (spisok*)malloc(sizeof(spisok));
	// Присваивание значения узлу
	tmp_last -> value = data;
	// Присваивание указателю на следующий элемент значения NULL
	tmp_last -> next = NULL;
	// Присваивание новому указателю указателя head.
	// Присваивание выполняется для того, чтобы не потерять
	//указатель на «голову» списка
	spisok *p_last = head;
	// Сдвиг указателя p_last в самый конец первоначального списка
	while (p_last -> next != NULL){
	p_last = p_last -> next;
	}
	// Присваивание указателю p_last -> next значения указателя tmp
	//(созданный новый узел)
	p_last -> next = tmp_last;
}
spisok *remove_element (int X, spisok *head)
{
	spisok *tmp = head, *p = NULL; // Присваивание новому указателю tmp указателя head, p - NULL
	if (head == NULL) return NULL; // Проверка списка на пустоту
	while (tmp && tmp -> value != X) 
	{ // Если список не пуст, поиск указателя на искомый элемент
	p = tmp;
	tmp = tmp -> next;
	}
	if (tmp == head) 
	{ // Если удаляемый элемент первый
	p = tmp -> next;
	free(head);
	return p;
	}
	if (!tmp) return head; // Если в списке нет искомого элемента, то возвращаем первоначальный список
	p -> next = tmp -> next;
	// Присваивание новому указателю указателя tmp
	free(tmp);
	// Освобождение памяти для указателя tmp
	return head;
}
spisok *add_element_n_position(int data, int n, spisok *head)
{
	// Присваивание новому указателю указателя head.
	// Присваивание выполняется для того, чтобы не потерять указатель на «голову» списка
	spisok *p = head;
	int count = 1; // Счетчик
	while (count < n - 1 && p -> next != NULL)
	{ // Поиск позиции n
	p = p -> next;
	count++;
	}
	spisok *tmp = (spisok*)malloc(sizeof(spisok)); // Выделение памяти под узел списка
	tmp -> value = data;
	// Присваивание значения узлу
	// Присваивание указателю tmp -> next значения указателя p -> next
	// (созданный новый узел)
	tmp -> next = p -> next;
	// Присваивание указателю p -> next значения указателя tmp (созданный новый узел)
	p -> next = tmp;
	return head;
}
void print_all(spisok *tmp)
{
	while (tmp != NULL)
	{
	printf("%d ", tmp -> value); // Вывод значения узла
	// Сдвиг указателя к следующему узлу
	tmp = tmp -> next;
	}	
}
spisok *remove_all (spisok *head)
{
	// Сдвиг указателя head в самый конец первоначального списка
	while (head != NULL)
	{
	// Присваивание новому указателю указателя head
	spisok *p = head;
	head = head -> next;
	// Освобождение памяти для указателя p
	free(p);
	}
	return NULL;
}
int main(void)
{
	spisok *head;
	// заглавный и последний элементы списка
	int a;
	int data;
	printf("head = ");
	scanf("%d", &data);
	head = create(data);
	printf("a = ");
	scanf("%d", &a);
	// формируем список
	while (a != 0) 
	{
	add_element_end(a, head); // добавляем к списку очередной элемент
	printf("a = ");
	scanf("%d", &a);
	}
	print_all(head);
	// печатаем список
	printf("deleted x = ");
	scanf("%d", &a);
	head = remove_element(a, head); // удаляем все элементы списка, имеющие значение a
	print_all(head);
	printf("добавляем на 3 место 5 \n");
	add_element_n_position(5, 3, head);
	print_all(head);
	// печатаем новый список
	head = remove_all(head); // удаляем весь список;
	print_all(head);
	return 0;
}
	
