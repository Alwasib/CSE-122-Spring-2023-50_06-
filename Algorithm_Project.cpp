#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int average(int numbers[], int size)
{
    int arrayAverage;
        int sum = 0;
        for (int x = 0; x < size; x++)
    {
        sum += numbers[x];
        arrayAverage = sum / size;
    }
        return (arrayAverage);
}

tuple<int, int, int> findMaxSubarray(int arr[],int n) {

    int max_sum = arr[0];
    int current_sum = arr[0];
    int start = 0;
    int end = 0;
    int temp_start = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > current_sum + arr[i]) {
            current_sum = arr[i];
            temp_start = i;
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }

    return make_tuple(max_sum, start, end);
}

int main() {
    cout<<"\n\n\n\t\t\t\t ======================================  \n";
    cout<<"\t\t\t\t |  Welcome to profit analysis system | \n";
    cout<<"\t\t\t\t ======================================  \n";
    cout<<"\t\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t\t\t\t\\/"<<endl;
    cout<<"\n\t\t\t Here, you can find the most profitable time of your business \n";

    int opt,i,avg;
    int day[30];

    const char * months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int mnt[12];

    cout<<"\n\n\t\t\t\t ======================================"<<endl;
    cout<<"\t\t\t\t |>      Choose time interval:       <|"<<endl;
    cout<<"\t\t\t\t ======================================\n"<<endl;
    cout<<"\n\t\t\t\t\t 1. Daily (30 day) \n";
    cout<<"\n\t\t\t\t\t 2. Monthly (12 month) \n";
    cout<<"\n\t\t\t ==> Enter The Option :  ";
    cin>>opt;
    if(opt==1)
    {
        cout<<"\n\t\t\t Enter the amount of revenue each day :\n";
        for( i=0;i<30;i++)
        {
            cout<<"\t\t\t\t";
            cin>>day[i];
        }
        avg = average( day, 30);
        for( i=0;i<30;i++)
        {
            day[i]=day[i]-avg;
        }

      /*  for( i=0;i<12;i++)
        {
            cout<<mnt[i]<<" , ";
        }*/

        auto [max_sum, start_idx, end_idx] = findMaxSubarray(day,30);

        cout << "\n\t\t\t Maximum profit => " << max_sum+(avg*(end_idx-start_idx+1));
        cout<<"\n\n\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~"<<endl;
        cout << "\t\t\t The profit is between day " << start_idx+1<<" and day "<<end_idx+1<<endl;
         cout<<"\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~"<<endl;



    }
    else if(opt==2)
    {

        cout<<"\n\t\t\t Enter the amount of revenue each month :\n";
        for( i=0;i<12;i++)
        {
            cout<<"\t\t\t\t\t";
            cin>>mnt[i];
        }
        avg = average( mnt, 12);
        for( i=0;i<12;i++)
        {
            mnt[i]=mnt[i]-avg;
        }

       /* for( i=0;i<12;i++)
        {
            cout<<mnt[i]<<" , ";
        }*/

        auto [max_sum, start_idx, end_idx] = findMaxSubarray(mnt,12);

        cout << "\n\t\t\t Maximum profit => " << max_sum+(avg*(end_idx-start_idx+1));
        cout<<"\n\n\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~"<<endl;
        cout << "\t\t\t The profit is between " << months[start_idx]<<" and "<<months[end_idx]<<endl;
         cout<<"\t\t\t~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~"<<endl;

    }





  /*  auto [max_sum, start_idx, end_idx] = findMaxSubarray(arr,12);

    cout << "Maximum profit: " << max_sum;
    cout << ", The profit is between month " << start_idx+1<<" and "<<end_idx+1<<endl;
*/

    return 0;
}

