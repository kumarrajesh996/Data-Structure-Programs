#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED

#include <windows.h>
#include<stdio.h>               //contains printf,scanf etc
#include<stdlib.h>
#include<conio.h>               //contains delay(),getch(),getchar(),gotoxy(),etc.
#include<string.h>              //contains strcmp() etc.
#include<time.h>

#define FALSE 0
#define TRUE 1
#define MAX 50
#define MAX_VAL 9999   /*All values in heap should be less than this value*/

void front_page();
void main_menu();
void Password();
void exit_application();
void delay(unsigned int mseconds);
void gotoxy (int x, int y);
int t(void);

void linked_list();
void stacks();
void queues();
void trees();
void graphs();
void searching();
void sorting();


int arr[MAX],i,j;
char ch;
int stack_arr[MAX];
int queue_arr[MAX];
int cqueue_arr[MAX];
int deque_arr[MAX];

struct bin_node                 //Binary tree Structure
{
	struct bin_node *lchild;
	int info;
	struct bin_node *rchild;
};

/*Linked list prototypes */
struct node                 //Linked List Structure
{
	struct node *prev;
	int info;
	struct node *next;
	struct node *link;
};

/*Single Linked list prototypes */
/*struct node
{
	int info;
	struct node *link;
};*/
struct node *s_create_list(struct node *start);
void s_display(struct node *start);
void s_search(struct node *start,int data);
struct node *s_addatbeg(struct node *start,int data);
struct node *s_addatend(struct node *start,int data);
struct node *s_addafter(struct node *start,int data,int item);
struct node *s_addbefore(struct node *start,int data,int item );
struct node *s_del(struct node *start,int data);
struct node *s_reverse(struct node *start);
/* End of Single Linked list prototypes */

/*Circular Linked list prototypes */
/*struct node
{
	int info;
	struct node *link;
};*/

struct node *c_create_list(struct node *last);
void c_display(struct node *last);
struct node *c_addtoempty(struct node *last,int data);
struct node *c_addatbeg(struct node *last,int data);
struct node *c_addatend(struct node *last,int data);
struct node *c_addafter(struct node *last,int data,int item);
struct node *c_del(struct node *last,int data);
/* End of Circular Linked list prototypes */

/*Doubly Linked list prototypes */
/*struct node
{
	struct node *prev;
	int info;
	struct node *next;
};*/
struct node *d_create_list(struct node *start);
void d_display(struct node *start);
struct node *d_addtoempty(struct node *start,int data);
struct node *d_addatbeg(struct node *start,int data);
struct node *d_addatend(struct node *start,int data);
struct node *d_addafter(struct node *start,int data,int item);
struct node *d_addbefore(struct node *start,int data,int item);
struct node *d_del(struct node *start,int data);
struct node *d_reverse(struct node *start);
/* End of Doubly Linked list prototypes */

/* End of Linked list prototypes */

/*Stack prototypes */
void stack_array();
void stack_linked_list();


/*Stack using array prototypes */
void a_push(int item);
int a_pop();
int a_peek();
int a_isEmpty();
int a_isFull();
void a_display();
/*End of Stack using array prototypes */

/*Stack using linked list prototypes */
void ll_push(int item);
int ll_pop();
int ll_peek();
int ll_isEmpty();
void ll_display();
/*End of Stack using linked list prototypes */

/*End of Stack prototypes */


/*Sorting prototypes */


void selection_sort();
void bubble_sort();
void insertion_sort();
void shell_sort();

void quick(int arr[],int low,int up);
int partition(int arr[], int low, int up);

void merge_sort(int arr[], int n);
void merge_pass(int arr[], int temp[], int size, int n);
void merge(int arr[], int temp[],int low1, int up1, int low2, int up2 );
void copy(int arr[], int temp[], int n);


void heap_sort(int arr[], int size);
void buildHeap(int arr[], int size);
int del_root(int arr[], int *size);
void restoreDown(int arr[], int i, int size );
void heap_display(int arr[], int n);

/*End of Sorting prototypes */

/*Searching prototypes */
void linear_searching();
void binary_searching();
void fibonacci_searching();

int LinearSearch(int arr[], int n, int item);
int Binary_Search(int arr[], int size, int item);
int fib(int m);
int rfibsearch(int a[],int n,int p,int q,int r,int key);
/*End of Searching prototypes */

/*Queue prototypes */
/*Simple Queue prototypes */
void simple_queue();

void q_array_insert(int item);
int q_array_del();
int q_array_peek();
void q_array_display();
int q_array_isFull();
int q_array_isEmpty();

void q_Ll_insert(int item);
int q_Ll_del();
int q_Ll_peek();
int q_Ll_isEmpty();
void q_Ll_display();

void q_CLl_insert(int item);
int q_CLl_del();
void q_CLl_display();
int q_CLl_isEmpty();
int q_CLl_peek();
/*End of Simple Queue prototypes */


/*Circular Queue prototypes */
void cq_display( );
void cq_insert(int item);
int cq_del();
int cq_peek();
int cq_isEmpty();
int cq_isFull();
/*End of Circular Queue prototypes */


/*Doubly ended Queue prototypes */
void deq_insert_frontEnd(int item);
void deq_insert_rearEnd(int item);
int deq_delete_frontEnd();
int deq_delete_rearEnd();
void deq_display();
int deq_isEmpty();
int deq_isFull();
void deq_pos_front_rear();
/*End of Doubly ended Queue prototypes */

/*Priority Queue prototypes */
void pq_Ll_insert(int item, int item_priority);
int pq_Ll_del();
void pq_Ll_display();
int pq_Ll_isEmpty();
/*End of Priority Queue prototypes */

/*End of Queue prototypes */

/*Tree prototypes*/
/*Binary Tree prototypes*/
struct bin_node *bin_search(struct bin_node *bin_ptr, int skey);
struct bin_node *bin_insert(struct bin_node *bin_ptr, int ikey);
struct bin_node *bin_del(struct bin_node *bin_ptr, int dkey);
struct bin_node *bin_Min(struct bin_node *bin_ptr);
struct bin_node *bin_Max(struct bin_node *bin_ptr);
int bin_height(struct bin_node *bin_ptr);
void bin_preorder(struct bin_node *bin_ptr);
void bin_inorder(struct bin_node *bin_ptr);
void bin_postorder(struct bin_node *bin_ptr);
/*End of Binary Tree prototypes*/

/*AVL Tree prototypes*/
struct avl_node *RotateLeft(struct avl_node *pptr);
struct avl_node *RotateRight(struct avl_node *pptr);

struct avl_node *avl_insert(struct avl_node *pptr, int ikey);
struct avl_node *insert_left_check(struct avl_node *pptr, int *ptaller);
struct avl_node *insert_right_check(struct avl_node *pptr, int *ptaller);
struct avl_node *insert_LeftBalance(struct avl_node *pptr);
struct avl_node *insert_RightBalance(struct avl_node *pptr);

struct avl_node *avl_del(struct avl_node *pptr, int dkey);
struct avl_node *del_left_check(struct avl_node *pptr, int *pshorter);
struct avl_node *del_right_check(struct avl_node *pptr, int *pshorter);
struct avl_node *del_LeftBalance(struct avl_node *pptr,int *pshorter);
struct avl_node *del_RightBalance(struct avl_node *pptr,int *pshorter);
void avl_preorder(struct avl_node *ptr);
void avl_inorder(struct avl_node *ptr);
void avl_postorder(struct avl_node *ptr);
/*End of AVL Tree prototypes*/

/*Heap Tree prototypes*/
void heap_insert(int num, int arr[MAX], int *p_hsize);
int heap_del_root(int arr[MAX], int *p_hsize);
void heap_restoreUp(int arr[MAX], int loc);
void heap_restoreDown(int arr[MAX], int i, int size);
void heap_buildHeap_top_down(int arr[MAX], int size );
void heap_buildHeap_bottom_up(int arr[MAX], int size );
void heap_tree_display(int arr[MAX],int hsize);
/*End of Heap Tree prototypes*/
/*End of Tree prototypes*/

#endif // PROTOTYPES_H_INCLUDED
