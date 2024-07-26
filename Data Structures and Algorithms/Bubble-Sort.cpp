# include<iostream>

void sort(int array[], int size);

int main(){

    int array[] = {10, 8, 3, 5, 7, 9, 2, 4, 6, 1};
    int size = sizeof(array)/sizeof(int);

    sort(array, size);

    for (int x : array){
        std::cout << x << " ";
    }

    return 0;
}

void sort(int array[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){ // (size -1) because the last element does not need to be compared
        for(int j = 0; j < size - i - 1; j++){   // becuase we won't need to sort the sorted elements
            if (array[j] > array[j + 1]){     // Use '<' for descending order
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}



