#include <iostream>
using namespace std;
class dsa
{
    public:
    void transverse()
    {
        int A[]={1,2,5,8,6};
        int i,n=5;
        cout<<"The array elements for transvers elements:\n";
        for(i=0;i<n;i++)
        cout<<A[i]<<"\n";
    }



    void insertion()
    {
    int arr[10], i, elem, pos, sz;
    cout<<"For Insertion Enter the Size for Array: ";
    cin>>sz;
    cout<<"Enter "<<sz<<" Array Elements: ";
    for(i=0; i<sz; i++)
    cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"Position for insertion: ";
    cin>>pos;
    for(i=sz; i>=pos; i--)
    arr[i] = arr[i-1];
    arr[i] = elem;
    sz++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<sz; i++)
    cout<<arr[i]<<"  ";
    cout<<endl;
    }



    void deletion()
    {
        int arr[100], tot, i, elem, j, found=0;
    cout<<"For Deletion Enter the Size of array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found=1;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<"\nElement not found in the Array!";
    else
    {
        cout<<"\nElement Deleted!";
        cout<<"\n\nThe New Array is:\n";
        for(i=0; i<tot; i++)
            cout<<arr[i]<<"  ";
    }
    cout<<endl;
    }


    void search()
    {
    int arr[10], i, num, index, n;
    cout<<"For search Enter the size of array: ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Array Elements: ";
    for(i=0; i<n; i++)
    cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at Index No."<<index;
    cout<<endl;
    }



    void update()
    {
        int arr[10], i, n, j, val;
        cout<<"\nFor update Define Size of the array: ";
        cin>>n;
        cout<<"\nEnter "<<n<<" Array elements: ";
        for(i=0;i<n;i++)
        cin>>arr[i];
        cout<<"\nEnter the position to update: ";
        cin>>j;
        cout<<"\nEnter the value of the required element: ";
        cin>>val;
        arr[j]=val;
        cout<<"\nThe array after the update is: ";
        for(i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    }
}a1;
int main()
{
    a1.transverse(); cout<<endl;
    a1.insertion();  cout<<endl;
    a1.deletion();   cout<<endl;
    a1.search();     cout<<endl;
    a1.update();     cout<<endl;
    return 0;
}