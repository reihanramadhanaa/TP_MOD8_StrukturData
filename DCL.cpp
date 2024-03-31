#include <iostream>
#include "DCL.h"

using namespace std ;


void createList_1302220048(List &L){
  first(L) = NULL;
  last(L) = NULL;

}

address alokasi_1302220048(infotype x){
 address p;

   p = new Elmlist;
   info(p) = x;
   next(p) = NULL;
   prev(p) = NULL;

   return p ;

}
void dealokasi_1302220048(address &p){
  delete p ;
  p = NULL;

}

void insertFirst_1302220048(List &L ,address p){
  if (first(L) != NULL && last(L) != NULL){
      next(p) = first(L) ;
      prev(p) = last(L);
      prev(first(L)) = p;
      next(last(L)) = p;
      first(L) = p;

    }else {
       first(L) = p;
       last(L) = p;
       next(p) = first(L);
       prev(p) = last(L);
    }

}

void  insertAfter_1302220048(List &L , address prec, address p){
    next(prec) = p;
    next(p) = next(prec);
    prev(next(prec)) = p;
    prev(p) = prec ;

}

void insertLast_1302220048(List &L , address p){
  if (first(L)!= NULL && last(L) !=NULL){
       next(p) = first(L) ;
       prev(p) = last(L) ;
       next(last(L)) = p;
       prev(first(L))= p;
       last(L)= p;

   }else{
     first(L) = p;
     last(L)= p ;
     next(p) = first(L);
     prev(p) = last(L);
   }

}


address findElm_1302220048(List L , infotype x){
    address p ;

    if (first(L) == NULL && last(L) == NULL){
         return NULL ;
    } else{
        p = first(L);
      while (p != NULL){
        if (info(p) == x ){
            return p ;
        }
        p = next(p) ;

       }
    }
}
void deleteFirst_1302220048(List &L , address &p ){
  p = first(L) ;
  next(last(L)) = next(first(L));
  prev(next(first(L))) = last(L);
  first(L) = next(first(L));
  next(p) = NULL ;
  prev(p) = NULL ;

}

void deleteAfter_1302220048(List &L  , address prec , address &p){
   p = next(prec);
   next(prec) = next(p);
   prev(next(p)) = p ;
   next(p) = NULL;
   prev(p) = NULL;

}

void deleteLast_1302220048(List &L , address &p){
   p = last(L);
   next(prev(last(L))) = first(L);
   prev(first(L)) = prev(last(L));
   last(L) = prev(last(L)) ;
   next(p)= NULL ;
   prev(p)= NULL ;

}

void printInfo_1302220048(List L){
   if (first(L) == NULL){
    cout << "LIst Kosong";
   }else{
     address p =first(L);
     do {
        cout << info(p)<<", ";
        p = next(p);
     }while(p !=first(L));
   }
   cout << endl;
}

void deleteByValue_1302220048(List &L, infotype x){
     if (first(L) == NULL) {
        cout << "List kosong" << endl;
    } else {
        address P = first(L);
     do {
     if (info(P) == x) {

     if (P == first(L)) {
     deleteFirst_1302220048(L,P);
     dealokasi_1302220048(P);
     } else {
     deleteAfter_1302220048(L, prev(P), P);
     dealokasi_1302220048(P);
     }
     return;
  }
    P = next(P);
    } while (P != first(L));

    }

}

void reverseList_1302220048(List L, List &L2){
  if (first(L) == NULL && last(L) == NULL) {
        cout << "List kosong" << endl;
        return;
    }

    address p = first(L);
    createList_1302220048(L2);

    do {
        address newNode = alokasi_1302220048(info(p));
        if (first(L2) == NULL && last(L2) == NULL) {
            first(L2) = newNode;
            last(L2) = newNode;
        } else {
            prev(first(L2)) = newNode;
            next(newNode) = first(L2);
            first(L2) = newNode;
        }
        p = next(p);
    } while (p != first(L));

    next(last(L2)) = first(L2);
    prev(first(L2)) = last(L2);

}
