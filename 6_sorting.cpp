#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    char temp[20], name[20][20];
    int i, j, n;
    FILE *f;
    f = fopen("sort.txt", "w");
    cout<<"Enter no. of names"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" names"<<endl;
    for (i = 0; i < n; i++){
        cin>>name[i];
        fprintf(f, "%s", name[i]);
    }
    fclose(f);
    f = fopen("sort.txt", "r");
    if (f == NULL){
        cout << "File doesnt exists"<<endl;
        return 0;
    }
    while (!feof(f)){
        fscanf(f, "%s", name[i]);
        i++;
    }
    n = i - 1;
    cout <<"Names before sorting :"<<endl;
    for (i = 0; i < n; i++)
        cout<<name[i]<<" "<<endl;
    cout << "\nNames after sorting :"<<endl;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (strcmp(name[j], name[j + 1]) > 0){
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
        cout<<name[i]<<" "<<endl;
    return 0;
}
