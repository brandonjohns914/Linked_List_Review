//
//  Unordered_Linked_List.cpp
//  Linked_List_Review
//
//  Created by Brandon Johns on 8/11/22.
//

#include "Unordered_Linked_List.hpp"
#include "Linked_List_Type.hpp"
#include <iostream>
using namespace std;
template<class Type>
bool Unordered_Linked_List<Type>::Search_List (const Type& search_Item) const
{
    node_Type<Type> *current;
    bool found = false;
    
    current = first;
     while(current!= NULL && !found)
     {
         if(current->info == search_Item)
             found=true;
     }
}

template<class Type>
void  Unordered_Linked_List<Type>:: Insert_First(const Type& new_Item)
{
    node_Type<Type> *new_Node;
    new_Node = new node_Type<Type>;
    new_Node->info = new_Item;
    new_Node->link = first;
    first = new_Node;
    count++;
    
    if(last == NULL)
        last = new_Node; 
}

template<class Type>
void  Unordered_Linked_List<Type>:: Insert_Last(const Type& new_Item)
{
    
}

template<class Type>
void  Unordered_Linked_List<Type>:: Delete_Node(const Type& delete_Item)
{
    
}
