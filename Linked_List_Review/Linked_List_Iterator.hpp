//
//  Linked_List_Iterator.hpp
//  Linked_List_Review
//
//  Created by Brandon Johns on 8/11/22.
//

#ifndef Linked_List_Iterator_hpp
#define Linked_List_Iterator_hpp

#include <stdio.h>


template <class Type>
struct node_Type
{
Type info;
node_Type<Type> *link;
    
};


template <class Type>
class Linked_List_Iterator
{
public:
    Linked_List_Iterator();
    Linked_List_Iterator(node_Type<Type> *ptr);
    
    Type operator*();
    Linked_List_Iterator<Type> operator++();
    bool operator==(const Linked_List_Iterator<Type> & right) const;
    bool operator !=(const Linked_List_Iterator<Type>& right) const;
private:
    node_Type<Type> *current;
};
#endif /* Linked_List_Iterator_hpp */
