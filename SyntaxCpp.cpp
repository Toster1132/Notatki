int przyklad = 0; // 0
double przyklad = 0.0; // 0.0
string przyklad = zero; // "zero"
char przyklad = z // 'z'
bool przyklad = false; // false

& - AND
| - OR
^ - XOR
~ - NOT
<< - lewo x pozycji
>> - prawo x pozycji
// awooga
// LOSOWE NOTATKI BEZ KONTEKSTU BEZ WYTLUMACZENIA SA BO SA PIERDOL SIE
// awooga
  int tab[5] = {2,35,2,4,8};

  for(int i =0; i<5 -1;i++)
  {
      for(int j = 0; j<5 - i -1; j++)
      if(tab[j] > tab[j+1])
      swap(tab[j], tab[j+1]);
  }
  
  for(int i : tab)
  {
      cout << i << endl;
  }
//awooga
    vector<int>v;
    int x = 0;
    int z = 5;
    for(int i = 0; i < 4;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i <z -1;i++)
    {
        cout << "tabela - " << v[i] << endl;
    }
    cout << "Suma " << v.size() << endl;
//awooga
    int q = 0;
    cin >> q;
    int tab[q];

    for(int i = 0; i<q;i++)
    {
        cin >> tab[i];
    }
    for(int i =0;i<q;i++)
    {
        cout << tab[i] << endl;
    }
//awooga
    double a = NULL;
    double b = NULL;

    cin >> a >> b;

    double *pole = nullptr;
    pole = new double(a*b);

    cout << *pole << endl;

    delete pole;
//awooga
    const int m = 3;
    const int n = 2;

    int tab1[m][n] = {{1,2},{3,4},{5,6}};

    for(int i = 0; i < m;i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "tab1 " << i << ", " << j << tab1[i][j] << endl;
        }
    }
//awooga
    const int m = 4;
    int tablica[m] = {1,2,5,8};

    int minimum = 0;
    int maximum = 0;

    for(int i = 0; i < m; i++)
    {
            if((i == 0))
            {
                minimum = tablica[i];
                maximum = tablica[i];
            }
            else
            {
                if(tablica[i] > maximum) maximum = tablica[i];
                if(tablica[i] < minimum) minimum = tablica[i];
            }
    }
    cout << "najmniejszy el. tab: "<< minimum << endl;
    cout << "najwiekszy el. tab: " << maximum << endl;
//awooga
