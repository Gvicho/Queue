#include"queue.h"

template<typename T> queue<T>::queue(){
    queue::node<T> *Temporary_node;
    Temporary_node = new queue::node<T>;
    Temporary_node->next=NULL;
    Temporary_node->last=NULL;
    Head = Temporary_node;
    Back = Temporary_node;
}
template<typename T> queue<T>::~queue(){
    queue::node<T> *Temporary_node;
    while(Head->last!=NULL){
        Temporary_node=Head->last;
        delete Head;
        Head=Temporary_node;
    }
    delete Head;
}
template<typename T>void queue<T>::push_back(T element){
    queue::node<T> *Temporary_node;
    Temporary_node = new queue::node<T>;
    Back->next=Temporary_node;
    Back->Value=element;
    Temporary_node->next=NULL;
    Temporary_node->last=Back;
    Back=Temporary_node;
    Queue_Size++;
}
template<typename T>void queue<T>::pop(){
    if(Head->next==NULL)return;
    queue::node<T> *Temporary_node;
	Temporary_node=Head->next;
    Temporary_node->last=NULL;
    delete Head;
    Head = Temporary_node;
    Queue_Size--;
}
template<typename T>int queue<T>::size(){
	return Queue_Size;
}
template<typename T>bool queue<T>::empty(){
	return Queue_Size==0;
}
template<typename T>T queue<T>::head(){
	return (Head->Value);
}

// If we want to use other data type and not an int we should declear queue with them in this Temporary function
void Temporary_function(){
	queue<int> q;
	q.push_back(5);
	q.pop();
	q.size();
	q.empty();
	q.head();
}










