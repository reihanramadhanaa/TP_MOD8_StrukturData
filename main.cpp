#include <iostream>
#include "DCL.h"

using namespace std;

int main()
{
   List L ;

 createList_1302220048(L);
 insertLast_1302220048(L, alokasi_1302220048(5));
 insertLast_1302220048(L, alokasi_1302220048(15));
 insertLast_1302220048(L, alokasi_1302220048(25));
 insertLast_1302220048(L, alokasi_1302220048(35));
 insertLast_1302220048(L, alokasi_1302220048(45));
 insertLast_1302220048(L, alokasi_1302220048(55));
 insertLast_1302220048(L, alokasi_1302220048(65));
 insertLast_1302220048(L, alokasi_1302220048(75));
 insertLast_1302220048(L, alokasi_1302220048(85));
 printInfo_1302220048(L);
 deleteByValue_1302220048(L,5);
 deleteByValue_1302220048(L,100);
 deleteByValue_1302220048(L,45);
 deleteByValue_1302220048(L,85);
 printInfo_1302220048(L);

}
