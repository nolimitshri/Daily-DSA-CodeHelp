#include<iostream>
using namespace std;

int main(){
    // Q1
    // int i = 1;
    // while(i <= 4){
    //     int j = 1;
    //     while(j <= 4){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q2
    // int i = 1;
    // int n = 4;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q3
    // int i = 1;
    // int n = 4;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         // cout << j;
    //         cout << n - j + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q4
    // int n = 3;
    // int i = 1;
    // int c = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << c;
    //         c++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q5 Triangle Star
    // int i = 1;
    // int n = 4;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q6
    // int i = 1;
    // int n = 4;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q7
    // int i = 1;
    // int n = 4;
    // while(i <= n){
    //     int j = 1;
    //     int c = i;
    //     while(j <= i){
    //         cout << i+j-1 ;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q8
    // int n = 4;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << i - j + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q9
    // int i = 1;
    // int n = 4;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << char('A'+i-1);
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // Q10
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << char('A' + j - 1);
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q11
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << char('A' + i + j - 2);
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q12
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << char('A' + i + j - 2);
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // Q13
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << char('A' + n - i + j - 1);
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q14
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << char('A' + i + j - 2);
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern with spaces
    // Q15
    int i = 1, n = 5;
    // while(i <= n){
    //     int j = 1;
    //     int spaces = n - i;
    //     while(spaces != 0){
    //         cout << " ";
    //         spaces--;
    //     }
    //     while(j <= i){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q16
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n - i + 1){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q17
    // while(i <= n){
    //     int spaces = i - 1;
    //     int j = 1;
    //     while(spaces != 0){
    //         cout << " ";
    //         spaces--;
    //     }
    //     while(j <= n - i + 1){
    //         cout << "*";
    //         // cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Q18
    // while(i <= n){
    //     int j = 1;
    //     int spacess = i - 1;
    //     while(spacess != 0){
    //         cout << " ";
    //         spacess--;
    //     }
    //     while(j <= n - i + 1){
    //         cout << i + j - 1;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }


    // Pyramid Patterns
    // Q19
    while(i <= n){
        int spaces = n - i;
        int j = 1;
        int k = 1;
        while(spaces != 0){
            cout << " ";
            spaces--;
        }
        while(j <= i){
            cout << j;
            j++;
        }
        if(i > 1){
            while(k <= i - 1){
                cout << i - k;
                k++;
            }
        }
        cout << endl;
        i++;
    }






    return 0;
}