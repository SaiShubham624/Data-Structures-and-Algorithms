#include<iostream>
#include<stdexcept>
using namespace std;

class DynamicArray
{
/**
 * Properties:
    data -> Points to the dyanimcally created array
    size -> Size of the array
    nextIndex -> The next index to insert element
 * Methods:
    Constructors:
        DynamicArray() -> Default Constructor
        DynamicArray(DynamicArray const &) -> Deep Copy Constructor(User-Created)
        DynamicArray(int[]) -> Intializes the object with the given integer array
    append(int) -> Inserts element at the end of the array
    getElement(int) -> Returns the element at the given index
    insert(int, int) -> Inserts the element at the given index
    remove(int) -> Removes the element at the given index
    removeByElement(int) -> Removes the given element from the array
    getOccupiedSize() -> Returns the length of used array
    getTotalSize() -> Returns the length of the array
    show() -> Prints the Array
*/
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
    DynamicArray(DynamicArray const &a2){
        this->nextIndex = a2.nextIndex;
        this->size = a2.size;
        this->data = new int[a2.size];
        for (int i = 0; i < a2.nextIndex; i++)
        {
            this->data[i] = a2.data[i];
        }
        
    }
    DynamicArray(int arr[], int arrSize){
        size = 5;
        nextIndex = 0;
        data = new int[5];
        for (int i = 0; i < arrSize; i++)
        {
            this->append(arr[i]);
        }
        
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
        if(index >= nextIndex){
            this->append(element);
        }
        else{            
            for (int i = nextIndex - 1; i >= index; i--)
            {
                data[i+1] = data[i];
            }
            data[index] = element;
            nextIndex++;
        }
    }
    void remove(int index){
        if(index >= nextIndex){
            cout << "Index out of range" << endl;
        }
        else{
            for (int i = index + 1; i <= nextIndex; i++)
            {
                data[i-1] = data[i];
            }
            nextIndex--;
        }        
    }
    void removeByElement(int element){
        int index = 0;
        for (int i = 0; i < nextIndex; i++)
        {
            if(data[i] == element){
                index = i;
            }
        }
        for (int i = index + 1; i <= nextIndex; i++)
        {
            data[i-1] = data[i];
        }
        nextIndex--;
        
    }
    int getOccupiedSize(){
        return nextIndex;
    }
    int getTotalSize(){
        return size;
    }
    void show(){
        for (int i = 0; i < this->getOccupiedSize(); i++)
        {
            cout << this->getElement(i) << endl;
        }
    }
    ~DynamicArray() {}
};



