//
//  Linked_List_Iterator.cpp
//  Linked_List_Review
//
//  Created by Brandon Johns on 8/11/22.
//

#include "Linked_List_Iterator.hpp"


template <class Type>
Linked_List_Iterator<Type>:: Linked_List_Iterator()
{
    current = NULL;
}

template <class Type>
Linked_List_Iterator<Type>:: Linked_List_Iterator(node_Type<Type> *ptr)
{
    current = ptr;
}

template <class Type>
Type Linked_List_Iterator<Type>::  operator*()
{
    return current->info;
}

template <class Type>
Linked_List_Iterator<Type> Linked_List_Iterator<Type>::  operator++()
{
    current = current->link;
    return *this;
}

template <class Type>
bool Linked_List_Iterator<Type>:: operator==(const Linked_List_Iterator<Type> & right) const
{
    return (current == right.current);
}

template <class Type>
bool Linked_List_Iterator<Type>:: operator !=(const Linked_List_Iterator<Type>& right) const
{
    return(current!=right.current);
}
