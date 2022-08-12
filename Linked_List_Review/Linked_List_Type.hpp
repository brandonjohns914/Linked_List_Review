//
//  Linked_List_Type.hpp
//  Linked_List_Review
//
//  Created by Brandon Johns on 8/11/22.
//

#ifndef Linked_List_Type_hpp
#define Linked_List_Type_hpp

#include <stdio.h>
#include "Linked_List_Iterator.hpp"

template <class Type>
class Linked_List_Type
{
public:
    const Linked_List_Type<Type> & operator =(const Linked_List_Type<Type>& equal);
    void Initialize_List();
    bool Is_List_Empty() const;
    void Print_List() const;
    int Length_List() const;
    void Destory_List();
    Type Front() const;
    Type Back() const;
    
    virtual bool Search_List(const Type& search_Item) const =0;
    virtual void Insert_First(const Type& new_Item) =0;
    virtual void Insert_Last(const Type& new_Item) = 0;
    virtual void Delete_Node(const Type& delete_Item)=0;
    
    Linked_List_Iterator<Type> Begin();
    Linked_List_Iterator<Type> End();
    
    Linked_List_Type();
    Linked_List_Type(const Linked_List_Type<Type> & Other_List);
    ~Linked_List_Type();
    int count;
    node_Type<Type> *first;
    node_Type<Type> *last; 
    private:
    void Copy_List(const Linked_List_Type<Type>& Other_List);
protected:
   

};

#endif /* Linked_List_Type_hpp */
