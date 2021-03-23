// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int R, L, sum, midl;
    sum = 0;
    R = size - 1;
    while(L < R){
        midl = (R-L)/2;
        if(arr[midl] == value){
            while(arr[midl - 1] == value){
                sum++;
                midl--;
            }
            midl += sum;
            while(arr[midl] == value){
                midl++;
                sum++;
            }
        }
        if(arr[midl] > value){
            R = midl;
        }
        else{
            L = midl;
        }
    }
  return sum; // если ничего не найдено
}
