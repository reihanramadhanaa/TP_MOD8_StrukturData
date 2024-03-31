#ifndef DCL_H_INCLUDED
#define DCL_H_INCLUDED

#include <iostream>
#define first(L)L.first
#define last(L)L.last
#define info(p) p->info
#define next(p) p->next
#define prev(p) p->prev

using namespace std;

typedef int infotype ;
typedef struct Elmlist *address;

struct Elmlist {
    infotype info;
    address next ;
    address prev ;

};

struct List{
  address first;
  address last;
};

void createList_1302220048(List &L);
address alokasi_1302220048(infotype x);
void dealokasi_1302220048(address &P);
void insertFirst_1302220048(List &L  , address p);
void insertAfter_1302220048(List &L , address prec, address p);
void insertLast_1302220048(List &L , address p);
address findElm_1302220048(List L , infotype x);
void deleteFirst_1302220048(List &L , address &p );
void deleteAfter_1302220048(List &L  , address prec , address &p);
void deleteLast_1302220048(List &L , address &p);
void printInfo_1302220048(List L);
void deleteByValue_1302220048(List &L, infotype x);
void reverseList_1302220048(List L, List &L2);


#endif // DCL_H_INCLUDED
