   if(arr[i] >= pivotEle && arr[j] < pivotEle)
            swap(arr[i++], arr[j--]);
        else if(arr[i] <= pivotEle && arr[j] > pivotEle){
            i++;
            j--;
        }else if(arr[i] >= pivotEle && arr[j] > pivotEle){
            j--;
        }else if(arr[i] <= pivotEle && arr[j] < pivotEle){
            i++;
        }