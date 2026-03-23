//This program tests various operation of a linked list
//

#include <iostream>                                
#include <string>    
#include <array>
#include "UnorderedLinkedList.h"                    

using namespace std;                                

int main()                                          
{                                                   
     unorderedLinkedList list1, list2;       
     std::array<int, 10> list{ 33,55,4,99,44,77,100,11,99,21 };
     auto size = std::size(list);
     int num;

     for (auto oneValue : list)   {                              
          list1.insertLast(oneValue);                     
     }                                               

     cout << "LIST1: ";                     
     list1.print();                                                                
     cout << "\nLength of LIST1: "
          << list1.length();                 

     list2 = list1;	   //test the assignment operator 
     cout << "\n\nLIST2 assigned from list1: ";
     list2.print();                                 
                                    
     cout << "\n: Length of LIST2: " << list2.length() << endl;                 

     cout << "\nEnter number to be deleted from list2 : ";                            
     cin >> num;                                                                    
     list2.deleteNode(num);                         

     cout << "\nAfter deleting " << num << " from LIST2: " << endl;                     
     list2.print();
     
     cout << "\n\n: Length of LIST2: " << list2.length() << endl; 

     cout << "\n\nDestroying LIST2 now....";
     list2.destroyList();

    // cout << "\n\nAttempting to access LIST2 now....\n";
     //cout << list2.front();

              

     //cout << "\n Output list1 using an iterator" << endl;            

     //linkedListIterator<string> it;                 

     //for (it = list1.begin(); it != list1.end(); ++it)                  
          //cout << *it << " ";                         
     cout << endl;                                   

     return 0;			                          	
}                                                   
