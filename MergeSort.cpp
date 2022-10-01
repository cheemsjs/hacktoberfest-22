
#include <iostream>

class MergeSort
{
public:
    void merge(int Arr[], int begin, int mid, int end)
    {
        int rightLen = mid - begin + 1;
        int leftLen = end - mid;

        int *rightArr = new int[rightLen];
        int *leftArr = new int[leftLen];

        for (int i = 0; i < rightLen; i++)
        {
            rightArr[i] = Arr[begin + i];
        }
        for (int j = 0; j < leftLen; j++)
        {
            leftArr[j] = Arr[mid + 1 + j];
        }

        int rIndex = 0;
        int lIndex = 0;
        int ArrIndex = begin;
        while (rIndex < rightLen && lIndex < leftLen)
        {
            if (rightArr[rIndex] <= leftArr[lIndex])
            {
                Arr[ArrIndex] = rightArr[rIndex];
                rIndex++;
            }
            else
            {
                Arr[ArrIndex] = leftArr[lIndex];
                lIndex++;
            }
            ArrIndex++;
        }

        while (rIndex < rightLen)
        {
            Arr[ArrIndex] = rightArr[rIndex];
            ArrIndex++;
            rIndex++;
        }

        while (lIndex < leftLen)
        {
            Arr[ArrIndex] = leftArr[lIndex];
            ArrIndex++;
            lIndex++;
        }

        delete[] leftArr;
        delete[] rightArr;
    }

    void mergeSort(int Arr[], int l, int r)
    {
        if (l < r)
        {
            int m = l + (r - l) / 2;
            mergeSort(Arr, l, m);
            mergeSort(Arr, m + 1, r);
            merge(Arr, l, m, r);
        }
    }

    void displayArr(int Arr[], int len)
    {
        for (int i = 0; i < len; i++)
        {
            std::cout << Arr[i] << " ";
        }
    }
};

int main()
{
    MergeSort mergeSortObj;
    int Arr[] = {11, 7, 6, 8, 8, 9, 5, 9, 6, 5, 4};
    int len = sizeof(Arr) / sizeof(Arr[0]);

    mergeSortObj.mergeSort(Arr, 0, len - 1);
    mergeSortObj.displayArr(Arr, len);
    return 0;
}


