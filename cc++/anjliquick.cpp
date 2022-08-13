#include <iostream>
using namespace std;
int a[20];
int lb,ub,temp;
int partition(int lb, int ub)
{
    int pivot=lb;
    int start= lb;
    int end=ub;
    while(start<end)
    {

    while((a[start]<=a[pivot])&&start<=ub)
    {
        start+=1;
    }
    while((a[end]>a[pivot])&&end>=lb)
    {
        end-=1;
    }
    if(start<end)
    {

    
  temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
 return end;


}
void quicksort(int lb, int ub)
{
    if(lb<ub)
    {
       int loc=partition(lb,ub);
    
    quicksort(lb,loc-1);
    quicksort(loc+1,ub);
    }
}
int main()

{
    cout << "ENTER NO. OF ELEMENTS IN YOUR ARRAY-->>" << endl;
    int n;
    cin >> n;
    cout << "ENTER ELEMENTS FOR YOUR ARRAY-->>" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "ELEMENTS IN UNSORTED MANNER ARE-->" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<"\t";
    }
    quicksort(0,n-1);
    cout << "ELEMENTS IN SORTED MANNER ARE-->" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<"\t";
    }


    return 0;
}