//Program to test the queue operations 

#include <iostream>
#include "queueLinked.h"

using namespace std;
  
int main() 
{
    linkedQueueType<int> queue;
    linkedQueueType<int> copyQueue;

    int num;

    cout << "Queue Operations" << endl;
    cout << "Enter numbers ending with -999" << endl;
    cin >> num;

    while (num != -999)
    {
        queue.addQueue(num); //add an element to the queue
        cin >> num;
    }

    copyQueue = queue;  //copy queue into copyQueue

    cout << "queue: ";
    while (!queue.isEmptyQueue())
    {
        cout << queue.front() << " ";
        queue.deleteQueue();   
    }

    cout << endl;

    cout << "copyQueue: ";
    while (!copyQueue.isEmptyQueue())
    {
        cout << copyQueue.front() << " ";
        copyQueue.deleteQueue();   
    }

    cout << endl;

    return 0;
}