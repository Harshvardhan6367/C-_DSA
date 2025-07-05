#include<iostream>
#include<cmath>
using namespace std;

class MaxHeap 
{
    public:
    int *arr;
    int size;        //Total element of Heap
    int total_size;  // Total size of array

    MaxHeap(int n)   //Here n is size of array
    {
        arr = new int[n];
        size =0;
        total_size = n;
    }

    // insert into the Heap
    void insert(int value)
    {
        // Check Weather Heap size is available or not
        if(size==total_size)
        {
            cout<<"Heap Overflow\n";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // Compare the inserted element with it's parent
        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[index], arr[(index-1)/2]);
            index = (index-1)/2;
        };

        cout<<arr[index]<<" is inserted into the heap"<<endl;

    }


    void Print()
    {
        for(int i=0; i<size; i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }


    // Heapify function
    void Heapify(int index)
    {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        // Largest will be replaced by the index having greatest value Among parent, left child or right child
         
        if(left<size && arr[left]>arr[largest])
            largest = left;
        if(right<size && arr[right]>arr[largest])
            largest=right;
        
        if(largest!=index)
        {
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
    }

    // Delete Node
    void Delete()
    {
        if(size==0)
        {
            cout<<"Heap Overflow\n";
            return;
        }
        cout<<arr[0]<<" is deleted from heap\n";
        arr[0] = arr[size-1];
        size--;

        if(size==0)
        return;

        Heapify(0);

    }

};



int main()
{
    MaxHeap H1(6);
    
    H1.insert(3); 
    H1.insert(33); 
    H1.insert(13); 
    
    H1.Print();
    
    H1.insert(132); 
    H1.insert(875); 
    H1.insert(218); 
    H1.insert(3); 
    H1.Delete(); 
    
    H1.Print();

}