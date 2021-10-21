// Q 1. 1 #include<stdio.h> 2 void create(int x); //function to create database
// 3 void search(int y, int z);
// 4 void sort(int n);
// 5 void add(int n, int k);
// 6 struct database
// {
//   7 int emp_id;
//   8 char emp_name[20];
//   9 char emp_city[20];
//   10
// };
// struct database data[100];
// 11 void main()
// {
//   12 int i, j, n, k, choice = 0;
//   13 n = 5;
//   14 create(n);
//   15 printf("If you want to add more enter 1: ");
//   16 scanf("%d", &choice);
//   17 if (choice == 1)
//   {
//     18 printf("Enter the number of records to add: ");
//     19 scanf("%d", &k);
//     20 add(n, k);
//     21
//   }
//   22 if (choice == 1)
//   {
//     23 n = n + k;
//     24
//   }
//   25 sort(n);
//   26 for (i = 0; i < n; i++)
//   {
//     27 printf("%d %s %s\n", data[i].emp_id, &data[i].emp_name, &data[i].emp_city);
//     28
//   }
//   29 printf("Enter employee Id to search: ");
//   30 scanf("%d", &j);
//   31 search(j, n);
//   32
// }
// 33 //function to create database
//     34 void
//     create(int x)
// {
//   35 int i;
//   36 for (i = 0; i < x; i++)
//   {
//     37 printf("\nEnter the employee Id: ");
//     38 scanf("%d", &data[i].emp_id);
//     39 printf("Enter the employee name: ");
//     40 scanf("%s", &data[i].emp_name);
//     41 printf("Enter the employee city: ");
//     42 scanf("%s", &data[i].emp_city);
//     43
//   }
//   44
// }
// 45 //function to search employee
//     46 void
//     search(int y, int z)
// {
//   47 int i;
//   48 for (i = 0; i < z; i++)
//   {
//     49 if (data[i].emp_id == y)
//     {
//       50 printf("%d %s %s\n\n", data[i].emp_id, &data[i].emp_name, &data[i].emp_city);
//       51
//     }
//     52
//   }
//   53
// }
// 54 //function to sort the database
//     55 void
//     sort(int n)
// {
//   56 int i, j, min_idx;
//   57 struct database temp;
//   58 for (i = 0; i < n - 1; i++)
//   {
//     59 min_idx = i;
//     60 for (j = i + 1; j < n; j++)
//     {
//       61 if (data[j].emp_id < data[min_idx].emp_id)
//       {
//         62 min_idx = j;
//         63
//       }
//       64
//     }
//     65 temp = data[min_idx];
//     66 data[min_idx] = data[i];
//     67 data[i] = temp;
//     68
//   }
//   69
// }
// 70 //function to add in database
//     71 void
//     add(int n, int k)
// {
//   72 int i;
//   73 for (i = n; i < n + k; i++)
//   {
//     74 printf("\nEnter the employee Id: ");
//     75 scanf("%d", &data[i].emp_id);
//     76 printf("Enter the employee name: ");
//     77 scanf("%s", &data[i].emp_name);
//     78 printf("Enter the employee city: ");
//     79 scanf("%s", &data[i].emp_city);
//     80
//   }
//   81
// }
// 82

//     Q 2.

// #include <bits/stdc++.h>
//     using namespace std;
// #define endl "\n"
// #define ll long long
// #define ld long double
// int main()
// {
//   ll n, m = INT_MIN;
//   cin >> n;
//   ll arr[n];
//   for (ll i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//     m = max(m, arr[i]);
//   }
//   ll count[m];
//   for (ll i = 0; i < n; i++)
//     count[arr[i]]++;
//   for (ll i = 0; i < m; i++)
//   {
//     if (count[i] != 0)
//     {
//       cout << "The count of " << i << " is" << count[i] << endl;
//     }
//   }
//   return 0;
// }

// Q 3
// #include <bits/stdc++.h>
//     using namespace std;
// #define endl "\n"
// #define ll long long
// #define ld long double
// int fib(int n)
// {
//   if (n <= 1)
//     return n;
//   return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//   int n;
//   cin >> n;
//   cout << fib(n) << endl;
//   return 0;
// }

// Q 4.

// #include <bits/stdc++.h>
//     using namespace std;
// #define endl "\n"
// #define ll long long
// #define ld long double
// void rev(int arr[], int n)
// {
//   int *p1 = arr, *p2 = arr + n - 1;
//   while (p1 < p2)
//   {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     p1++;
//     p2--;
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];
//   rev(arr, n);
//   return 0;
// }

// Q 5.
// #include <bits/stdc++.h>
//     using namespace std;
// int main()
// {
//   string s, t;
//   cout << "Enter the string " << endl;
//   getline(cin, s);
//   cout << "Enter the word to be deleted" << endl;
//   cin >> t;
//   while (s.find(t) != string::npos)
//   {
//     s.erase(s.find(t), t.length());
//   }
// }

// Q 6
// #include <stdio.h>
//     2 struct booklist
// {
//   3 char title[50];
//   4 char author[50];
//   5 int pages;
//   6 float price;
//   7 int sold_copies;
//   8 float amount_soldcopies;
//   9
// };
// 10 void main()
// {
//   11 struct booklist book[100];
//   12 int count, n, j, k, i;
//   13 float sum = 0;
//   14 printf("Enter number of elements: ");
//   15 scanf("%d", &n);
//   16 for (i = 0; i < n; i++)
//   {
//     17 printf("Title of book: ");
//     18 scanf("%s", &book[i].title);
//     19 printf("Author of book: ");
//     20 scanf("%s", &book[i].author);
//     21 printf("Pages of book: ");
//     22 scanf("%d", &book[i].pages);
//     23 printf("Price of book: ");
//     24 scanf("%f", &book[i].price);
//     25 printf("No. of sold copies of book: ");
//     26 scanf("%d", &book[i].sold_copies);
//     27 book[i].amount_soldcopies = book[i].price * book[i].sold_copies;
//     28
//   }
//   29 30 for (i = 0; i < n; i++)
//   {
//     31 printf(" %s %s %d %f %d %f\n", book[i].title, book[i].author, book[i].pages, book[i].price, book[i].sold_copies, book[i].amount_soldcopies);
//     32
//   }
//   33 int max = book[0].pages;
//   34 for (i = 0; i < n; i++)
//   {
//     35 if (book[i].pages > max)
//     {
//       36 max = book[i].pages;
//       37 j = i;
//       38
//     }
//     39
//   }
//   40 printf(" The book with maximum pages: \n");
//   41 printf(" %s %s %d %f %d %f", book[j].title, book[j].author, book[j].pages, book[j].price,
//             book[j].sold_copies, book[j].amount_soldcopies);
//   42 int min = book[0].price;
//   43 for (i = 0; i < n; i++)
//   {
//     44 if (book[i].price < min)
//     {
//       45 min = book[i].price;
//       46 k = i;
//       47
//     }
//     48
//   }
//   49 printf("\n The book with minimum price: \n");
//   50 printf(" %s %s %d %f %d %f", book[k].title, book[k].author, book[k].pages, book[k].price,
//             book[k].sold_copies, book[k].amount_soldcopies);
//   51 for (i = 0; i < n; i++)
//   {
//     52 sum = sum + book[i].amount_soldcopies;
//     53
//   }
//   54 printf("\nTotal money earned: %f", sum);
//   55
// }

// Q 7 1 #include<stdio.h> 2 #include<string.h> 3 struct record
// {
//   4 char str[50];
//   5
// };
// 6 void sort(int n);
// 7 struct record arr[100];
// 8 void main()
// {
//   9 char f_name[50], m_name[50], s_name[50], ph_num[50];
//   10 int i, j;
//   11 for (i = 0; i < 5; i++)
//   {
//     12 printf("Enter the full name and phone number: ");
//     13 scanf("%s %s %s %s", &s_name, &f_name, &m_name, &ph_num);
//     14 sprintf(arr[i].str, "%s,%c.%c %s", s_name, f_name[0], m_name[0], ph_num);
//     15
//   }
//   16 sort(5);
//   17 for (j = 0; j < 5; j++)
//   {
//     18 printf("%s\n", arr[j].str);
//     19
//   }
//   20
// }
// 21 void sort(int n)
// {
//   22 int i, j, min_idx;
//   23 struct record temp;
//   24 for (i = 0; i < n - 1; i++)
//   {
//     25 min_idx = i;
//     26 for (j = i + 1; j < n; j++)
//     {
//       27 if (arr[j].str[0] < arr[min_idx].str[0])
//       {
//         28 min_idx = j;
//         29
//       }
//       30
//     }
//     31 temp = arr[min_idx];
//     32 arr[min_idx] = arr[i];
//     33 arr[i] = temp;
//     34
//   }
//   35
// }

// Q 8
// #include <bits/stdc++.h>
//     using namespace std;
// #define endl "\n"
// #define ll long long
// #define ld long double
// int main()
// {
//   string s, t;
//   cout << "Enter the string " << endl;
//   getline(cin, s);
//   cout << "Enter the pattern" << endl;
//   cin >> t;
//   while (s.find(t) != string::npos)
//   {
//     s.erase(s.find(t), t.length());
//   }
// }

// Q 9
// #include <bits/stdc++.h>>
//     using namespace std;
// int main()
// {
//   int n, x;
//   cout << "Enter the size of array" << endl;
//   cin >> n;
//   unordered_set<int> s;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> x;
//     s.insert(x);
//   }
//   for (int x : s)
//   {
//     cout << x << " ";
//   }
//   cout << endl;
// }

// 10 Linear Search
// #include <bits/stdc++.h>
//     using namespace std;
// #define endl "\n"
// #define ll long long
// #define ld long double
// int main()
// {
//   ll n;
//   cout << "Enter the size of the array" << endl;
//   cin >> n;
//   ll arr[n];
//   for (ll i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   ll number;
//   cout << "Enter the number to  be searched" << endl;
//   cin >> number;
//   for (ll i = 0; i < n; i++)
//   {
//     if (arr[i] == number)
//     {
//       cout << "Number found" << endl;
//       return 0;
//     }
//   }
//   cout << "Number not found" << endl;
//   return 0;
// }

// Binary search
// #include <bits/stdc++.h>
//     using namespace std;
// #define endl "\n"
// #define ll long long
// #define ld long double

// ll binarySearch(ll arr[], ll l, ll r, ll x)
// {
//   while (l <= r)
//   {
//     int m = l + (r - l) / 2;
//     if (arr[m] == x)
//       return m;
//     if (arr[m] < x)
//       l = m + 1;
//     else
//       r = m - 1;
//   }
//   return -1;
// }

// int main()
// {
//   ll n;
//   cout << "Enter the size of the array" << endl;
//   cin >> n;
//   ll arr[n];
//   for (ll i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   ll number;
//   cout << "Enter the number to  be searched" << endl;
//   cin >> number;
//   ll index = binarySearch(arr, 0, n - 1, number);
//   if (index == -1)
//   {
//     cout << "Number not found" << endl;
//   }
//   else
//   {
//     cout << "Number found" << endl;
//   }

//   Q 11
// #include <stdio.h>
// #include <stdlib.h>
//       void
//       main()
//   {
//     int *ptr;
//     ptr = (int *)malloc(10 * sizeof(int));
//     int i;
//     printf("Enter elements in array: ");
//     for (i = 0; i < 10; i++)
//     {
//       scanf("%d", &ptr[i]);
//     }
//     for (i = 0; i < 10; i++)
//     {
//       printf(" %d ", ptr[i]);
//     }
//   }

//   12 Matrix addition
// #include <stdio.h>
//       int
//       main()
//   {
//     int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//     printf("Enter the number of rows (between 1 and 100): ");
//     scanf("%d", &r);
//     printf("Enter the number of columns (between 1 and 100): ");
//     scanf("%d", &c);

//     printf("\nEnter elements of 1st matrix:\n");
//     for (i = 0; i < r; ++i)
//       for (j = 0; j < c; ++j)
//       {
//         printf("Enter element a%d%d: ", i + 1, j + 1);
//         scanf("%d", &a[i][j]);
//       }

//     printf("Enter elements of 2nd matrix:\n");
//     for (i = 0; i < r; ++i)
//       for (j = 0; j < c; ++j)
//       {
//         printf("Enter element b%d%d: ", i + 1, j + 1);
//         scanf("%d", &b[i][j]);
//       }

//     // adding two matrices
//     for (i = 0; i < r; ++i)
//       for (j = 0; j < c; ++j)
//       {
//         sum[i][j] = a[i][j] + b[i][j];
//       }

//     // printing the result
//     printf("\nSum of two matrices: \n");
//     for (i = 0; i < r; ++i)
//       for (j = 0; j < c; ++j)
//       {
//         printf("%d   ", sum[i][j]);
//         if (j == c - 1)
//         {
//           printf("\n\n");
//         }
//       }

//     return 0;
//   }

//   12 matrix multiplication
// #include <iostream>

//       using namespace std;

//   void multiply(int mat1[][4],
//                 int mat2[][4],
//                 int res[][4])
//   {
//     int i, j, k;
//     for (i = 0; i < 4; i++)
//     {
//       for (j = 0; j < 4; j++)
//       {
//         res[i][j] = 0;
//         for (k = 0; k < 4; k++)
//           res[i][j] += mat1[i][k] * mat2[k][j];
//       }
//     }
//   }

//   int main()
//   {
//     int i, j;
//     int res[4][4];
//     int mat1[4][4] = {{1, 1, 1, 1},
//                       {2, 2, 2, 2},
//                       {3, 3, 3, 3},
//                       {4, 4, 4, 4}};

//     int mat2[4][4] = {{1, 1, 1, 1},
//                       {2, 2, 2, 2},
//                       {3, 3, 3, 3},
//                       {4, 4, 4, 4}};

//     multiply(mat1, mat2, res);

//     cout << "Result matrix is \n";
//     for (i = 0; i < 4; i++)
//     {
//       for (j = 0; j < 4; j++)
//         cout << res[i][j] << " ";
//       cout << "\n";
//     }

//     return 0;
//   }

//   Q 13
// #include <bits/stdc++.h>
//       using namespace std;

//   void search(vector<vector<vector<int>>> arr, int m, int n, int o, int num)
//   {
//     for (int i = 0; i < m; i++)
//     {
//       for (int j = 0; j < n; j++)
//       {
//         for (int k = 0; k < o; k++)
//         {
//           if (arr[i][j][k] == num)
//           {
//             cout << "Found" << endl;
//             return;
//           }
//         }
//       }
//     }
//     cout << "Not Found" << endl;
//     return;
//   }
//   void insert(vector<vector<vector<int>>> arr, int m, int n, int o)
//   {
//     for (int i = 0; i < m; i++)
//     {
//       for (int j = 0; j < n; j++)
//       {
//         for (int k = 0; k < o; k++)
//         {

//           cin >> arr[i][j][k];
//         }
//       }
//     }
//   }
//   int main()
//   {
//     int m, n, o, x;
//     cout << "Enter the size of 3d array" << endl;
//     cin >> m >> n >> o;
//     vector<vector<vector<int>>> arr;

//     // insertion
//     insert(arr, m, n, o);

//     //search
//     int num;
//     cout << "Enter the number to be searched" << endl;
//     cin >> num;
//     search(arr, n, m, o, num);
//   }

//   14
// #include <bits/stdc++.h>
//       using namespace std;
// #define endl "\n"
// #define ll long long
// #define ld long double
//   int main()
//   {
//     ll m, n, count = 0;
//     ;
//     cin >> m >> n;
//     ll arr[m][n];
//     for (ll i = 0; i < m; i++)
//     {
//       for (ll j = 0; j < n; j++)
//       {
//         cin >> arr[i][j];
//         if (arr[i][j] != 0)
//           count++;
//       }
//     }
//     if (count * 3 < n * m)
//       cout << "SPARSE" << endl;
//     else
//       cout << "NOT SPARSE" << endl;
//   }
