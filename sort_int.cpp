#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
using namespace std;

int main() {

  const int testLen = 10000;

  vector<int> vec(testLen);
  vector<int*> vecp(testLen);

  for(int i=0; i<vec.size(); i++) {
    vec[i] = rand();
  }

  for(int i=0; i<vecp.size(); i++) {
    vecp[i] = vec.data() + i;
  }

  for (int i = 0; i < 10; i++) {
    cout << *(vecp[i]) << endl;
  }
  
  cout << "====================" << endl;

  {
    clock_t start,end;
    start=clock();

    sort(vecp.begin(), vecp.end(), [](int* px, int* py) { return *px<*py;});

    end=clock();
    printf("sort pointers: total time=%fms\n",(float)(end-start)*1000/CLOCKS_PER_SEC);
  }

  {
    clock_t start,end;
    start=clock();

    sort(vec.begin(), vec.end());

    end=clock();
    printf("sort values: total time=%fms\n",(float)(end-start)*1000/CLOCKS_PER_SEC);
  }

  return 0;
}