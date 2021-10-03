#include <algorithm>
#include<iostream>
#include<iomanip>
#include<chrono>
#include<fstream>
#include<stdlib.h>
using namespace std;
using namespace std::chrono;

//structure to store the data of subarray
struct MaxSubArrayRecord
{
	int start;  //start index
	int end;   //end index
	int sum;  //sum of array
};

MaxSubArrayRecord Cross_Sum(int arr[], const int startIndex, const int midIndex, const int endIndex)
{
	int leftSum = 0;
	int rightSum = 0;
	int currentSum = 0;
	MaxSubArrayRecord result;
	leftSum = arr[midIndex];
	currentSum = arr[midIndex];
	result.start = midIndex;
	for (int i = midIndex - 1; i >= startIndex; i--)
	{
		currentSum = currentSum + arr[i];
		if (currentSum > leftSum)
		{
			leftSum = currentSum;
			result.start = i;
		}
	}
	currentSum = 0;
	rightSum = arr[midIndex + 1];
	currentSum = arr[midIndex + 1];
	result.end = midIndex + 1;
	for (int i = midIndex + 2; i <= endIndex; i++)
	{
		currentSum = currentSum + arr[i];
		if (currentSum > rightSum)
		{
			rightSum = currentSum;
			result.end = i;
		}
	}
	result.sum = leftSum + rightSum;
	return result;
}
//recursive maxsubarray function to find the maximum subarray
MaxSubArrayRecord MaxSubArray(int arr[], const int startIndex, const int endIndex)
{
	if (endIndex == startIndex)  //if array consist of single element
	{
		MaxSubArrayRecord result;  //object to store the result
		result.start = startIndex;
		result.end = endIndex;
		result.sum = arr[startIndex];
		return result;
	}
	else
	{
		int midIndex = (startIndex + endIndex) / 2;
		MaxSubArrayRecord left;
		MaxSubArrayRecord right;
		MaxSubArrayRecord cross;
		left = MaxSubArray(arr, startIndex, midIndex);
		right = MaxSubArray(arr, midIndex + 1, endIndex);
		cross = Cross_Sum(arr, startIndex, midIndex, endIndex);
		if (left.sum >= right.sum && left.sum >= cross.sum)
		{
			return left;
		}
		else if (right.sum >= left.sum && right.sum >= cross.sum)
		{
			return right;
		}
		else
		{
			return cross;
		}
	}
}
//finding Maximum subArray using Brute Force algorithm
MaxSubArrayRecord MaxSubArrayBrute(const int arr[], const int size)
{
	int l = 0;
	int h = 0;
	int m = arr[0];
	int c;
	MaxSubArrayRecord res;
	for (int i = 0; i < size; i++)
	{
		c = 0;
		for (int j = i; j < size; j++)
		{
			c = c + arr[j];
			if (c > m)
			{
				m = c;
				l = i;
				h = j;
			}
		}
	}
	res.start = l;
	res.end = h;
	res.sum = m;
	return res;
}
 //depending on the size of the array mixed array function will call either brute force or recursive function
MaxSubArrayRecord MaxSubArrayMixed(int arr[], const int startIndex, const int endIndex)
{
	int size = endIndex - startIndex + 1;
	if (size < 30)
	{
		return MaxSubArrayBrute(arr, size);
	}
    else
	{
	int midIndex = (startIndex + endIndex) / 2;
	MaxSubArrayRecord left;
	MaxSubArrayRecord right;
	MaxSubArrayRecord cross;
	left = MaxSubArray(arr, startIndex, midIndex);
	right = MaxSubArray(arr, midIndex + 1, endIndex);
	cross = Cross_Sum(arr, startIndex, midIndex, endIndex);
	if (left.sum >= right.sum && left.sum >= cross.sum)
	{
		return left;
	}
	else if (right.sum >= left.sum && right.sum >= cross.sum)
	{
		return right;
	}
	else
	{
		return cross;
	}
	}
}
//Function to generate random numbers
void RandomArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = (i * 45 + 79) % 101;
	}
}

//main function
int main()
{
	const int startIndex = 0, endIndex = 30000;
	int size;
	int arr[endIndex];
	MaxSubArrayRecord result;
	RandomArray(arr, endIndex);
	cout << "****************************************\n";
	// Get starting timepoint 
	auto start = high_resolution_clock::now();
	result = MaxSubArrayMixed(arr, startIndex, endIndex);
	// Get ending timepoint 
	auto stop = high_resolution_clock::now();

	// use duration cast method 
	auto duration = duration_cast<seconds>(stop - start);
	cout << "Time taken by function: "
		<< duration.count() << " seconds" << endl;
	cout << "**************************************\n";
	size = (result.end - result.start) + 1;
	//printing the starting index and ending index and sum of maximunsubarray
	cout << "starting index of maximum subarray is " << result.start << endl;
	cout << "ending index of maximum subarray is " << result.end << endl;
	cout << "The maximum sum is " << result.sum << endl;
	cout << "The length of the array is " << size << endl;
	return 0;
}
