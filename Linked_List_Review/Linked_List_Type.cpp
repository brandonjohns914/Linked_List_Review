//
//  Linked_List_Type.cpp
//  Linked_List_Review
//
//  Created by Brandon Johns on 8/11/22.
//

#include "Linked_List_Type.hpp"
#include<iostream>
#include<stdio.h>
using namespace std;

template <class Type>
const Linked_List_Type<Type> & Linked_List_Type<Type>:: operator =(const Linked_List_Type<Type>& equal)
{
    if(this!= &equal )
        Copy_List(equal);
    
    return *this; 
}

template <class Type>
void Linked_List_Type<Type>:: Initialize_List()
{
    Destory_List();
}

template <class Type>
bool Linked_List_Type<Type>:: Is_List_Empty() const
{
    return (first == NULL);
}

template <class Type>
void Linked_List_Type<Type>:: Print_List() const
{
    node_Type<Type> *current; // pointer moving through the list
    current = first; // setting pointer to the first node
    while(current != NULL)
    {
        cout<< current->info << " " <<endl;
        current= current->link;
    }
}

template <class Type>
int Linked_List_Type<Type>:: Length_List() const
{
    return count;
}

template <class Type>
void Linked_List_Type<Type>:: Destory_List()
{
    // temp deallocates memory of the node
    node_Type<Type> *temp;
    
    // checking for nodes in the list
    // setting first to null
    while(first != NULL)
    {
        temp = first;
        first = first->link;
        delete temp;
    }
    last = NULL;
    count =0;
}

template <class Type>
Type Linked_List_Type<Type>:: Front() const
{
    assert(first != NULL);
    return first->info;
}

template <class Type>
Type Linked_List_Type<Type>:: Back() const
{
    assert(last != NULL);
    return last->info;
}


template <class Type>
Linked_List_Iterator<Type> Linked_List_Type<Type>:: Begin()
{
    Linked_List_Iterator<Type> temp(first);
    return temp;
}


template <class Type>
Linked_List_Iterator<Type> Linked_List_Type<Type>:: End()
{
    Linked_List_Type<Type> temp(NULL);
    return temp;
}


template <class Type>
Linked_List_Type<Type>:: Linked_List_Type()
{
    first = NULL;
    last = NULL;
    count =0;
}


template <class Type>
Linked_List_Type<Type>:: Linked_List_Type(const Linked_List_Type<Type> & Other_List)
{
    first = NULL;
    Copy_List(Other_List);
}


template <class Type>
Linked_List_Type<Type>:: ~Linked_List_Type()
{
    Destory_List();
}
template <class Type>
void Linked_List_Type<Type>:: Copy_List(const Linked_List_Type<Type>& Other_List)
{
    node_Type<Type> * new_Node; // create node
    node_Type<Type> *current; // travel list
    
    // make list empty
    if(first !=NULL)
        Destory_List();
    
    // other list empty
    if(Other_List.first == NULL)
    {
        first = NULL;
        last = NULL;
        count = 0;
    }
    else
    {
        // current points to copy list
        current=Other_List.first;
        count = Other_List.count;
        
        //copy and create the node
        first = new node_Type<Type>;
        // copy the info
        first -> info= current->info;
        
        // setting link to null
        first->link=NULL;
        // setting last to the first node
        last = first;
        current=current->link; // copy next pointer link
        
        // copy remaining list
        while(current!=NULL)
        {
            new_Node = new node_Type<Type>;
            new_Node->info = current->info;
            // set link of new node to null
            new_Node ->link = NULL;
            // put new node after last
            last->link = new_Node;
            last = new_Node;
            
            current=current->link;
        }
    }
}


/*
virtual bool Search_List(const Type& search_Item) const =0;
virtual void Insert_First(const Type& new_Item) =0;
virtual void Insert_Last(const Type& new_Item) = 0;
virtual void Delete_Node(const Type& delete_Item)=0;
*/

