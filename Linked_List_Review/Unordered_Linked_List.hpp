//
//  Unordered_Linked_List.hpp
//  Linked_List_Review
//
//  Created by Brandon Johns on 8/11/22.
//

#ifndef Unordered_Linked_List_hpp
#define Unordered_Linked_List_hpp

#include <stdio.h>
#include "Linked_List_Iterator.hpp"
#include "Linked_List_Type.hpp"

template<class Type>
class Unordered_Linked_List: public Linked_List_Type<Type>
{
public:
    bool Search_List(const Type& search_Item) const;
    void Insert_First(const Type& new_Item);
    void Insert_Last(const Type& new_Item);
    void Delete_Node(const Type& delete_Item);
};



#endif /* Unordered_Linked_List_hpp */
