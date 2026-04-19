#include <iostream>

using namespace std;


void append(int *& mas, int & lenth ,int number) {
    if (lenth < 0) return;
    int * prev_mas = new int[lenth]; //copy our array
    for (int i = 0; i < lenth; i++)
        prev_mas[i] = mas[i];
    delete [] mas;
    mas = new int[lenth+1]; //clean and recreate our array
    for (int i = 0; i < lenth; i++)
       mas[i] = prev_mas[i];
    mas[lenth] = number; //adding the number
    lenth++; //increasing length
    delete [] prev_mas; //clean memory
}


int main() {
    int n = 5;
    int* mas = new int[n];
    mas[0]=1;
    for (int i = 1; i < n; i++)
        mas[i]=mas[i-1]+1;

    append(mas,n,52);

    for (int i = 0; i < n; i++)
        cout<<mas[i]<<endl;
}
