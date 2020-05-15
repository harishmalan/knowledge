#include <iostream>
#include <climits>

using namespace std;
 void swap ( int *x, int *y);

 class minHeap
 {
 	int *heap_arr; // pointer pointing heap heap_arr
 	int max_capacity; // maximum size possible of heap
 	int heap_size; // current heap size

 public:
 	minHeap(int max_capacity); //constructer
 	void swim(int ); // to heapify a subtree with root at given index
 	int parent(int i){ return ((i-1)/2);}
 	int left(int i){ return ((i*2)+1);}
 	int right(int i){ return ((i*2)+2);}
 	int extractMin();
 	void sink(int i , int new_val);
 	int getMin(){return heap_arr[0];}
 	void insertKey(int k);
 	void deleteKey(int i);
 	void printHeap();
 };

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

 //constructer
 minHeap::minHeap(int cap)
 {
 	heap_size =0;
 	max_capacity = cap;
 	heap_arr = new int[cap];
 }


 void minHeap::insertKey(int k)
 {
 	if (heap_size == max_capacity)
 	{
 		cout << "\n Over flow, Couldn't insert key" << endl;
 		return ;
 	}
 	int i = heap_size;
 	heap_arr[i] = k;
 	heap_size ++ ;
 	//cout << heap_arr[parent(i)] << "<" << heap_arr[i] << " " ;
 	while( i != 0 && heap_arr[parent(i)] > heap_arr[i])
 	{
 		swap( &heap_arr[i], &heap_arr[parent(i)]);
 		i= parent(i);	
 	}
 }

void minHeap::sink(int i , int new_val)
{
	heap_arr[i] = new_val;
	while(i != 0 && heap_arr[parent(i)] > heap_arr[i])
	{
		swap(&heap_arr[i], &heap_arr[parent(i)]);
		i = parent(i);
	}

}

void minHeap::deleteKey(int i)
{
    sink(i, INT_MIN);
    extractMin();
}

int minHeap::extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return heap_arr[0];
    }
 
    // Store the minimum value, and remove it from heap
    int root = heap_arr[0];
    heap_arr[0] = heap_arr[heap_size-1];
    heap_size--;
    swim(0);
    return root;
}
 
void minHeap::swim(int i)
{
 int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && heap_arr[l] < heap_arr[i])
        smallest = l;
    if (r < heap_size && heap_arr[r] < heap_arr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&heap_arr[i], &heap_arr[smallest]);
        swim(smallest);
    }
}

void minHeap::printHeap()
{
	for( int i =0 ; i<heap_size; ++i)
	{
		cout <<heap_arr[i] <<endl;
	}
}

 int main()
{
    minHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.sink(2, 1);
    cout << h.getMin() << endl;
    h.printHeap();
    return 0;
}