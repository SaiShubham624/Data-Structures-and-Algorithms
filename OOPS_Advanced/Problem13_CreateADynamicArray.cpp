#include<iostream>
using namespace std;

class DynamicArray
{
private:
    int* data;
    int size;
    int nextIndex;  
public:
    DynamicArray(){
        data = new int[5];
        size = 5;
        nextIndex = 0;
    }
    void append(int element){
        if(nextIndex == size){
            int *newData = new int[size + 5];
            for (int i = 0; i < size; i++)
            {
                newData[i] = data[i];
            }
            delete []data;
            data = newData;
            size += 5;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int getElement(int index){
        if(index >= 0 && index < nextIndex){
            return data[index];
        }
        else{
            return -1;
        }
    }
    void insert(int index, int element){
        if (nextIndex == size){
            int *newData = new int[size + 5];
            for (int i = 0; i < size; i++)
            {
                newData[i] = data[i];
            }
            delete []data;
            data = newData;
            size += 5;
        }
        for (int i = nextIndex - 1; i >= index; i--)
        {
            data[i+1] = data[i];
        }
        data[index] = element;
        nextIndex++;
    }
    int getOccupiedSize(){
        return nextIndex;
    }
    int getTotalSize(){
        return size;
    }
    ~DynamicArray() {}
};


int main(){
    DynamicArray arr;
    arr.append(1);
    arr.append(2);
    // arr.append(3);
    arr.append(4);
    arr.append(5);
    arr.append(6);
    arr.insert(2, 3);
    for (int i = 0; i < arr.getOccupiedSize(); i++)
    {
        cout << arr.getElement(i) << endl;
    }
    
    
    
    
    system("pause"); //For Debugging, ignore it
    return 0;
}
/*
Different Approaches:
For inserting:
1. 
    void insert(int index, int element){
        int a = element;
        int b = 0;
        if(nextIndex == size){
            int *newData = new int[size + 5];
            for (int i = 0; i < size; i++)
            {
                newData[i] = data[i];
            }
            delete []data;
            data = newData;
            size += 5;
        }
        for (int i = 0; i <= nextIndex; i++)
        {            
            if(i == index){
                int b = data[index];
                data[index] = a;
                a = b;
            }
            else if (i > index){
                int b = data[i];
                data[i] = a;
                a = b;
            }
        }        
        nextIndex++;
    }
*/