#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    double arr[100];

    double sum = 0;
    double min;
    double max;
    double average;

    int count = 0;
    int skipped = 0;

    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

    bool first = true;

    //Enter readings 
    cout << "Enter the number of readings: ";
    cin >> n;

    // accepting the values 
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // valid readings 
    cout << "Valid readings : ";

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            skipped++;
            continue;
        }

        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Skipped (errors) : " << skipped << endl;


    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            continue;
        }

        if(arr[i] >= 45)
        {
            cout << "First CRITICAL : Index " << i
                 << " -> " << arr[i] << " C" << endl;

            break;
        }
    }


 
    for(int i = 0; i < n; i++)
    {
        // Ignore sensor errors
        if(arr[i] < 0)
        {
            continue;
        }

        // Sum
        sum = sum + arr[i];

        // Count readings
        count++;


        // Min and Max
        if(first)
        {
            min = arr[i];
            max = arr[i];

            first = false;
        }
        else
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }

            if(arr[i] > max)
            {
                max = arr[i];
            }
        }


        // Temperature categories
        if(arr[i] <= 29)
        {
            normal++;
        }
        else if(arr[i] <= 44)
        {
            warning++;
        }
        else if(arr[i] <= 59)
        {
            critical++;
        }
        else
        {
            shutdown++;
        }
    }

    average = sum / count;
    
    cout << fixed << setprecision(2);

    cout << "Min : " << min << " C" << endl;
    cout << "Max : " << max << " C" << endl;
    cout << "Avg : " << average << " C" << endl;

    cout << "Normal: " << normal << endl;
    cout << "Warning: " << warning << endl;
    cout << "Critical: " << critical << endl;
    cout << "Shutdown: " << shutdown << endl;

    return 0;
}