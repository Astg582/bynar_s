#include<iostream>

int BS(int*, int*, int);

int main()
{
int s = 0;
std::cout << " enter to size " << std::endl;
std::cin >> s;

int* arr = new int[s] ;

	for(int i = 0; i < s; ++i)
	{
	arr[i] = i;
	}

for(int i = 0; i < s; ++i){
	std::cout << arr[i] << ' ';
} 

int key = 0;
std::cout << "enter to key" << std::endl;
std::cin >> key;

int start = 0;
do{
std::cout << " enter to start" << std::endl;
std::cin >> start;
}while(start < 0 || start >= s);

int end = s;
do{
std::cout <<" enter to yor end in arr" << std::endl ;
std::cin >> end;
}while(end <= start || end >= s);


std::cout << BS(arr + start, arr + end, key) << std::endl;

delete[] arr;
}

int BS( int* begin, int* end, int key ){
 int i = 0;
 int j = (end - begin);	
int e = 0;
	while( i =< j)
	{
std::cout << e << std::endl;
		int mid = (i + j) / 2;
		if(begin[mid] == key)
		{
			return mid;

		}else if(begin[mid] < key)
		{
			i =  mid; 
			
		}else if(begin[mid] > key)
		{
			j = mid;
		}
++e;
	}
	return -1;
}
