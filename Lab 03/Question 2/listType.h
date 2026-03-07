#pragma once
template <class T>
class listType {
    protected:
        T list[100];
        int length;
        int maxSize;
    public:
        listType(int size = 100) { 
            maxSize = size; length = 0; 
        }
    };